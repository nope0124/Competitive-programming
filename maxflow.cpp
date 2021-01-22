/* 最大流 */

const ll MAX_V = 210;
struct edge{
  ll to, cost, pre;
};

vector<edge> graph[MAX_V];
vector<bool> reached(MAX_V, false);

void add_edge(ll a, ll b, ll c){
  graph[a].push_back(edge{b, c, (ll)graph[b].size()});
  graph[b].push_back(edge{a, c, (ll)graph[a].size() - 1});
}

ll get_flow(ll s, ll t, ll ans) { //sからtまでを再帰的に探索
  if (s == t) return ans;
  reached[s] = true;
  for (auto &c: graph[s]) {
    if (reached[c.to]) continue;
    if (c.cost <= 0) continue;
    chmin(ans, c.cost);
    ll flow = get_flow(c.to, t, ans);
    if (flow > 0) {
      c.cost -= flow;
      graph[c.to][c.pre].cost += flow;
      return flow;
    }
  }
  return 0;
}

ll max_flow(ll N){ //頂点数N
  ll ans = 0;
  while (1) {
    rep (i, MAX_V) reached[i] = false;
    ll flow = get_flow(0, N - 1, INF);
    if (flow == 0) break;
    ans += flow;
  }
  return ans;
}
