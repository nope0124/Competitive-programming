/* Union-Find木 */

struct UnionFind {
    vector<ll> par;
    
    UnionFind(ll n) : par(n, -1) { }
    void init(ll n) { par.assign(n, -1); }
    
    ll root(ll x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
   

    bool issame(ll x, ll y) {
        return root(x) == root(y);
    }
    
    bool merge(ll x, ll y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    ll size(ll x) {
        return -par[root(x)];
    }
};
