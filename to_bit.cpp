string to(ll N, ll base = 10) {
  string S;
  while (N) {
    S = to_string(N % base) + S;
    N /= base;
  }
  return S;
}
