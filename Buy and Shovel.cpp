#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int money, coin, count=0, result=0;
cin>>money>>coin;
while(true){
    count++;
    result= money*count;
    if (result%10==0 || result%10==coin){
        break;
    }
}
cout<<count<<endl;
}
