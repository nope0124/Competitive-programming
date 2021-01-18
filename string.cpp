/* 文字列操作、回文判定 */

string toUpper(string s) {
  string ans = "";
  rep (i, s.size()) {
    if ('a' <= s[i] && s[i] <= 'z') ans += (char)s[i] - 32;
    else ans += s[i];
  }
  return ans;
}

string toLower(string s) {
  string ans = "";
  rep (i, s.size()) {
    if ('A' <= s[i] && s[i] <= 'Z') ans += (char)s[i] + 32;
    else ans += s[i];
  }
  return ans;
}

bool palindrome(string s) {
  bool flag = true;
  rep (i, s.size()) if (s[i] != s[s.size() - 1 - i]) flag = false;
  return flag;
}

/* Z-algorithm */

vector<ll> Zalgo(string S) {
    int N = (int)S.size();
    vector<ll> res(N);
    res[0] = N;
    int i = 1, j = 0;
    while (i < N) {
        while (i+j < N && S[j] == S[i+j]) ++j;
        res[i] = j;
        if (j == 0) {++i; continue;}
        int k = 1;
        while (i+k < N && k+res[k] < j) res[i+k] = res[k], ++k;
        i += k, j -= k;
    }
    return res;
}
