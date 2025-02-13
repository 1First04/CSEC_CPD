#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 int a, b;
 cin >> a>> b;
 string bef[6]={"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
 int larg_Value= max(a, b);
 cout<<bef[larg_Value-1]<<endl;
}
