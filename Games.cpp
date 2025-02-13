#include<iostream>
using namespace std;
int main(){
 int a, i, j, count=0;
 cin>>a;
 int m[a], n[a];
 for (i=0; i<a; i++){
    cin>>m[i];
    cin>>n[i];
 }
 for(i=0; i<a; i++){
    for(j=0; j<a; j++){

     if (m[i]==n[j]){
        count++;
     }
    }
}
 cout<<count;
}
