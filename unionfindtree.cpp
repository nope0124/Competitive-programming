/* Union-Find木 */

struct UnionFind {
  private:
    vector<int> parent;
  
  public:
    UnionFind(int n) : parent(n, -1) { }
    void init(int n) { parent.assign(n, -1); }
 
    int root(int x) {
      if (parent[x] < 0) return x;
      else return parent[x] = root(parent[x]);
    }
 
    bool issame(int x, int y) {
      return root(x) == root(y);
    }
 
    void merge(int x, int y) {
      x = root(x);
      y = root(y);
      if (x == y) return;
      if (parent[x] > parent[y]) swap(x, y);
      parent[x] += parent[y]; // sizeを調整
      parent[y] = x; // 大きい木の根に小さい木をつける, yの親はx
    }
 
    int size(int x) {
      return -parent[root(x)];
    }
  
};
