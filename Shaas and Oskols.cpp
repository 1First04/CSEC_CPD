#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int Size, shaa,boxs,ad;
    cin>>Size;
    int Arr[Size];
    for (int i=0; i<Size; i++){
        cin>>Arr[i];
    }
    cin>>shaa;
    for(int i=0; i<shaa; i++){
        cin>>boxs>>ad;
        Arr[boxs-2]+=ad-1;
        Arr [boxs] += Arr[boxs-1]-ad;
        Arr[boxs-1]=0;
    }
    for (int i=0; i<Size; i++){
        cout<<Arr[i]<<endl;
    }
    }
