#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
 int main(){
 int n1, n2, i;
 string str1, str2;
 cin>> str1>>str2;
 for(i=0; i<str1.size(); i++){
    int n1=tolower(str1[i]);
    int n2=tolower(str2[i]);

   if (n1!=n2){
     if (n1<n2){
        cout<<-1<<endl;
        return 0;}
        else{
            cout<<1<<endl;
            return 0;
        }
     }
 }
 cout<<0<<endl;

 return 0;
 }
