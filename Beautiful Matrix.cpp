#include<iostream>
#include<cmath>
 using namespace std;
 int main(){
  int i, j, a ,Arr[5][5];
  for(i=0; i<=4; i++){
     for (j=0;j<=4; j++){
        cin>>Arr[i][j];
       if (Arr[i][j]==1){
         a= abs(2-i)+abs(2-j);
      }
    }
  }

    cout<<a;
  return 0;
}
