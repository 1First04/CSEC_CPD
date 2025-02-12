#include<iostream>
using namespace std;
int main(){
int n, i;
cin>>n;
int Arr[n];
for(i=0; i<n; i++){
    cin>>Arr[i];
}
int first=0, last=n-1, r1=0, r2=0, game=0, High=0;
while(first<=last){
    if(Arr[first]>=Arr[last]){
        High = Arr[first];
        first++; }
    else {
        High = Arr[last];
        last--;}

 (game%2==0)? r1+=High:r2+=High;

 game++;
}
cout<< r1<<" "<< r2<<endl;
return 0;}
