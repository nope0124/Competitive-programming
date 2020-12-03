/* Loopを求める */

ll get_loopstart(vector<ll> v, ll start) {
  ll n = v.size();
  vector<bool> reached(n, false);
  while (1) {
    if (reached[start]) break;
    reached[start] = true;
    start = v[start];
  }
  return start;
}


vector<ll> get_preloop(vector<ll> v, ll start, ll loopstart) {
  vector<ll> preloop;
  while (1) {
    if (start == loopstart) break;
    preloop.push_back(start);
    start = v[start];
  }
  return preloop;
}


vector<ll> get_loop(vector<ll> v, ll loopstart) {
  vector<ll> loop;
  ll start = loopstart;
  loop.push_back(loopstart);
  while (1) {
    if (v[loopstart] == start) break;
    loop.push_back(v[loopstart]);
    loopstart = v[loopstart];
  }
  return loop;
}
