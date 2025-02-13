#include<iostream>
#include<string>
using namespace std;
int main(){
string a,b;
int i,j=0, k=1;
cin>>a>>b;
for(i=0; i<=b.size(); i++){
    if (b[i]==a[j]){
        k++;
        j++;
    }
}
cout<<k<<endl;
return 0;
}
