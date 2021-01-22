//RSQ and RAQ 区間加算、区間和

struct LazySegmentTree {
  private:
    int N;
    vector<ll> node, lazy;

  public:
    LazySegmentTree(vector<ll> V) {
      N = 1;
      while(N < (int)V.size()) N *= 2;
      node.resize(2 * N - 1);
      lazy.resize(2 * N - 1, 0);
      rep (i, (int)V.size()) node[i + N - 1] = V[i];
      for(int i = N - 2; i >= 0; i--) node[i] = node[i * 2 + 1] + node[i * 2 + 2];
    }
  
    void eval(int k, int l, int r) {
      if(lazy[k] == 0) return;
      node[k] += lazy[k];
      if(r - l > 1) {
        lazy[2 * k + 1] += lazy[k] / 2;
        lazy[2 * k + 2] += lazy[k] / 2;
      }
      lazy[k] = 0;
    }

    void add(int a, int b, ll x, int k = 0, int l = 0, int r = -1) {
      if(r < 0) r = N;
      eval(k, l, r);
      if(b <= l || r <= a) return;
      if(a <= l && r <= b) {
        lazy[k] += (r - l) * x;
        eval(k, l, r);
      } else {
        add(a, b, x, 2 * k + 1, l, (l + r) / 2);
        add(a, b, x, 2 * k + 2, (l + r) / 2, r);
        node[k] = node[2 * k + 1] + node[2 * k + 2];
      }
    }

    ll getSum(int a, int b, int k = 0, int l = 0, int r = -1) {
      if (r < 0) r = N;
      eval(k, l, r);
      if (b <= l || r <= a) return 0;
      if (a <= l && r <= b) return node[k];
      ll vl = getSum(a, b, 2 * k + 1, l, (l + r) / 2);
      ll vr = getSum(a, b, 2 * k + 2, (l + r) / 2, r);
      return vl + vr;
    }
  
    void dis() {
      int ans = 1;
      int id = 0;
      while (1) {
        rep (i, ans) cout << (i ? " " : "") << node[id], id++;
        cout << endl;
        if (ans == N) return;
        ans *= 2;
      }
    }
  
    void dis_lazy() {
      int ans = 1;
      int id = 0;
      while (1) {
        rep (i, ans) cout << (i ? " " : "") << lazy[id], id++;
        cout << endl;
        if (ans == N) return;
        ans *= 2;
      }
    }
};
