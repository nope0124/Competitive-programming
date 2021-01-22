vector<ll> graph[200010];
 
pint dfs(ll v, ll p, ll cost) {
  pint ans;
  ans.first = v;
  ans.second = cost;
  for (auto c: graph[v]) {
    if (c == p) continue;
    pint p = dfs(c, v, cost + 1);
    if (p.second > ans.second) {
      ans.second = p.second;
      ans.first = p.first;
    }
  }
  return ans;
}
 
ll get_diameter() {
  pint p = dfs(0, -1, 0);
  pint q = dfs(p.first, -1, 0);
  return q.second;
}
