/* ダイクストラ法 */

const ll MAX_V = 100010; //頂点数
struct edge{
  ll to, cost;
};

vector<edge> graph[MAX_V];
ll dist[MAX_V];
ll pre[MAX_V];

void dijkstra(ll s){
  priority_queue<pint, vector<pint>, greater<pint>> que; //小さい順に格納
  fill(dist, dist + MAX_V, INF);
  fill(pre, pre + MAX_V, -1);
  dist[s] = 0;
  que.push(pint(0, s)); //pint(距離, 到着点)
  while(!que.empty()){
    auto p = que.top(); que.pop();
    ll v = p.second;
    if(dist[v] < p.first) continue;
    for(auto e: graph[v]){
      if(dist[e.to] > dist[v] + e.cost){
        dist[e.to] = dist[v] + e.cost;
        pre[e.to] = v;
        que.push(pint(dist[e.to], e.to));
      }
    }
  }
}

vector<ll> get_path(ll t) {
  vector<ll> path;
  for (ll cur = t; cur != -1; cur = pre[cur]) {
    path.push_back(cur);
  }
  reverse(ALL(path));
}
