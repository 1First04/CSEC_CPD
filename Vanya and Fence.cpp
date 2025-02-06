#include<bits/stdc++.h>
#include<iostream>
 using namespace std;
  int main(){
  int i, n, h;
  cin >> n >> h;
  int sum=0;
 while(n--){
  cin>>i;
  (i<=h)?sum=sum+1:sum=sum+2;
}
cout<<sum;
return 0;
}
