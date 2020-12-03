/* 素数判定、素因数分解、約数列挙 */

const ll MAX_N=100010;
vector<bool> sieve_of_eratosthenes() {
  vector<bool> isPrime(MAX_N + 1, true);
  /* isPrime[1] = false; */
  for (ll i = 2; i <= MAX_N; i++) {
    if (isPrime[i]) {
      for (ll j = 2 * i; j <= MAX_N; j += i) {
        isPrime[j] = false;
      }
    }
  }
  return isPrime;
}

vector<pint> prime_factorize(ll n) {
  vector<pint> ans;
  for (ll p = 2; p <= sqrt(n); p++) {
    if (n % p != 0) continue;
    ll cnt = 0;
    while (n % p == 0) {
      n /= p;
      cnt++;
    }
    ans.push_back(pint(p, cnt));
  }
  if (n != 1) ans.push_back(pint(n, 1));
  return ans;
}

vector<ll> divisor(ll n) {
  // O(√n)
  vector<ll> ans;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ans.push_back(i);
      if (i * i != n) ans.push_back(n / i);
    }
  }
  sort(ALL(ans));
  return ans;
}
