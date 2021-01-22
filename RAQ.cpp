//Range Add Query 区間加算、一点取得

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
    }

    void add(ll a, ll b, ll val, ll k = 0, ll l = 0, ll r = -1) { //[a, b) [l, r)
      if (r < 0) r = N;
      if (r <= a || b <= l) return;
      if (a <= l && r <= b) {
        node[k] += val;
        return;
      }
      add(a, b, val, 2 * k + 1, l, (l + r) / 2);
      add(a, b, val, 2 * k + 2, (l + r) / 2, r);
      return;
    }

    ll get(ll ind) {
      ind += N - 1;
      ll ret = node[ind];
      while (ind > 0) {
        ind = (ind - 1) / 2;
        ret += node[ind];
      }
      return ret;
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
