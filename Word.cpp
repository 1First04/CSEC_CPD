#include<bits/stdc++.h>
using namespace std;
int main(){

  int i, capital=0, small=0;
  string s;
  cin>>s;
for (i=0; i<s.size(); i++){
  if (isupper(s[i]))
    capital++;

  else
    small++;
  }
 if (small>=capital){
    for (i=0; i<s.size(); i++){
        cout<<char(tolower(s[i]));
    }
 }
 else {
    for (i=0; i<s.size(); i++)
       cout<<char(toupper(s[i]));
 }

return 0;
}
