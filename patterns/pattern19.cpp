#include<bits/stdc++.h>
using namespace std;
void print(int n){
   int init=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    for(int j=0;j<init;j++){
        cout<<" ";
    }
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
    init+=2;
   }
}


int main(){
    int n;
    cin>>n;
    print(n);
}