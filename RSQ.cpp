//Range Sum Query 一点加算、区間和

struct SegmentTree {
  private:
    ll N; //2の冪乗
    vector<ll> node;

  public:
    SegmentTree(vector<ll> V) {
      N = 1;
      while (N < V.size()) N *= 2;
      node.resize(2 * N - 1, 0);
      rep (i, V.size()) node[i + N - 1] = V[i];
      for (ll i = N - 2; i >= 0; i--) node[i] = node[2 * i + 1] + node[2 * i + 2];
    }

    void add(ll ind, ll val) {
      ind += N - 1;
      node[ind] += val;
      while (ind > 0) {
        ind = (ind - 1) / 2;
        node[ind] = node[2 * ind + 1] + node[2 * ind + 2];
      }
    }

    ll getSum(ll a, ll b, ll k = 0, ll l = 0, ll r = -1) { //[a, b) [l, r)
      if (r < 0) r = N;
      if (r <= a || b <= l) return 0;
      if (a <= l && r <= b) return node[k];
      ll vl = getSum(a, b, 2 * k + 1, l, (l + r) / 2);
      ll vr = getSum(a, b, 2 * k + 2, (l + r) / 2, r);
      return vl + vr;
    }
    
    void dis() {
      ll ans = 1;
      ll id = 0;
      while (1) {
        rep (i, ans) cout << (i ? " " : "") << node[id], id++;
        cout << endl;
        if (ans == N) return;
        ans *= 2;
      }
    }
};
