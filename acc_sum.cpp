/* 累積和 */

vector<ll> acc_sum(vector<ll> v, ll ind = 0, bool rev = false) {
  ll n = v.size();
  if (rev) reverse(ALL(v));
  if (ind == 0) {
    vector<ll> ans(n + 1, 0);
    rep(i, n) ans[i + 1] = ans[i] + v[i];
    if (rev) reverse(ALL(ans));
    return ans;
  } else if (ind == 1) {
    vector<ll> ans(n, 0);
    rep(i, n) {
      if (i == 0) ans[i] = v[i];
      else ans[i] = ans[i - 1] + v[i];
    }
    if (rev) reverse(ALL(ans));
    return ans;
  }
  vector<ll> ans(n, INF);
  return ans;
}

vector<vector<ll>> two_acc_sum(vector<vector<ll>> v){
  ll h=v.size();
  ll w=v[0].size();
  vector<vector<ll>> ans(h+1,vector<ll>(w+1,0));
  rep(i,h) rep(j,w) ans[i+1][j+1]=ans[i][j+1]+ans[i+1][j]-ans[i][j]+v[i][j];
  return ans;
}
/* 空の配列でRE */
