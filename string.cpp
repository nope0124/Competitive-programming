/* 文字列操作、回文判定 */

string Toupper(string s) {
  string ans = "";
  rep (i, s.size()) {
    if ('a' <= s[i] && s[i] <= 'z') ans += (char)s[i] - 32;
    else ans += s[i];
  }
  return ans;
}

string Tolower(string s) {
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
