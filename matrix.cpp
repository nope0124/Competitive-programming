

vector<vector<ll>> MATMUL(vector<vector<ll>> &A, vector<vector<ll>> &B, ll MOD) {
  vector<vector<ll>> ret(A.size(), vector<ll>(B[0].size(), 0));
  rep (i, A.size()) {
    rep (j, B[0].size()) {
      rep (k, B.size()) {
        ret[i][j] = (ret[i][j] + A[i][k] * B[k][j]) % MOD;
      }
    }
  }
  return ret;
}

vector<vector<ll>> MATPOW(vector<vector<ll>> A, ll K, ll MOD) {
  ll N = A.size();
  vector<vector<ll>> ret(N, vector<ll>(N, 0));
  rep (i, N) ret[i][i] = 1;
  while (K) {
    if (K & 1) ret = MATMUL(ret, A, MOD);
    A = MATMUL(A, A, MOD);
    K >>= 1;
  }
  return ret;
}
