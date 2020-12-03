/* ランレングス圧縮 */

vector<pair<char, ll>> runlength(string s){
  ll x=1;
  vector<pair<char, ll>> p;
  if(s.size()==1){
    p.push_back(pair<char,ll>(s[0],1));
    return p;
  }
  rep(i,(ll)s.size()-1){
    if(s[i]==s[i+1]){
      x++;
      if(i==(ll)s.size()-2){
        p.push_back(pair<char,ll>(s[i],x));
      }
    }else{
      p.push_back(pair<char,ll>(s[i],x));
      x=1;
      if(i==(ll)s.size()-2){
        p.push_back(pair<char,ll>(s[s.size()-1],x));
      }
    }
  }
  return p;
}
