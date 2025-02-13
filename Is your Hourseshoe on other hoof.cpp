#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
  int Arr[4], i, count=0;
 for(int i=0; i<4; i++){
    cin>>Arr[i];
 }
sort(Arr, Arr+4);
for (i=0; i<3; i++){
    if (Arr[i]==Arr[i+1]){
        count++;
    }
}
cout<<count;
}
