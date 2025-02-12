#include<iostream>
#include<algorithm>
#include<string>
 using namespace std;
 int main(){
 int n, i;
 string Letters;
 cin>> Letters;
 sort(Letters.begin(), Letters.end());
 n=Letters.size();
 for ( i=0; i<n;  i++){

    if (Letters[i]== Letters[i+1]){
        n--;
    }
 }
 if (n%2==0)
    cout<<"CHAT WITH HER!"<<endl;

 else
    cout<< "IGNORE HIM!"<<endl;
 }
