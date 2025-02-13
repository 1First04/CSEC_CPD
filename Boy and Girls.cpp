#include<iostream>
#include<string>
 using namespace std;
 int main(){
 int n, i, counter=0, j, unit=1;
 string Letters;
 cin>> Letters;
 n=Letters.size();
 for ( i=0; i<n;  i++){
        for(j=i+1; j<n; j++){
            if(Letters[i]== Letters[j]){
                unit= 0;
                break;
            }
        }
    if (unit){
        counter++;
    }
    unit=1;
 }
 (counter%2==0)? cout<<"CHAT WITH HER!"<<endl : cout<< "IGNORE HIM!"<<endl;
 }
