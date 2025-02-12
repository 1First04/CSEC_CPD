#include<iostream>
using namespace std;
int main(){

int count=1, n, i;
cin>>n;
int Arr[n];
for(i=0; i<n; i++){
    cin>>Arr[i];
}
for (i=0; i<n-1; i++){
    if (Arr[i] != Arr[i+1]){
            count++;
    }
}
cout<<count;
return 0;
}
