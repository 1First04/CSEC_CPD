#include<iostream>
using namespace std;
int main(){
int amount, i, count=0;
 cin>>amount;
 string value;
 cin>>value;
 for(i=0; i<amount; i++){
    if (value[i]==value[i+1] && i != amount-1){
        count++;
    }
 }
 cout<< count<<endl;
}
