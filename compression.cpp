vector<ll> compress(vector<ll> &v) {
  ll N = v.size();
  vector<ll> vals;
  if (N == 0) return vals;
  rep (i, N) {
    rep (d, 2) {
      vals.push_back(v[i] + d);
    }
  }
  sort(ALL(vals));
  vals.erase(unique(ALL(vals)), vals.end());
  rep (i, N) v[i] = lower_bound(ALL(vals), v[i]) - vals.begin();
  return vals;
}

vector<ll> compress2(vector<ll> &v1, vector<ll> &v2) {
  vector<ll> vals;
  ll N = v1.size();
  if (N == 0) return vals;
  rep (i, N) {
    rep (d, 2) {
      vals.push_back(v1[i] + d);
      vals.push_back(v2[i] + d);
    }
  }
  sort(ALL(vals));
  vals.erase(unique(ALL(vals)), vals.end());
  rep (i, N) {
    v1[i] = lower_bound(ALL(vals), v1[i]) - vals.begin();
    v2[i] = lower_bound(ALL(vals), v2[i]) - vals.begin();
  }
  return vals;
}
