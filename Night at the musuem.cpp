#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
 string given;
 cin>> given;
 int i, first=97, last=0;

 for(i=0; i<given.size(); i++){

  int total= abs(given[i]-first);
  if (total<=13){
    last+=total;
    }
    else{
        last+=(26-total);
    }
    first=given[i];
 }
cout<<last<<endl;
}
