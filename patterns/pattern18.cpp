#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i =0;i<=n;i++){
       for(char ch='E'-i;ch<='E';ch++){
        cout<<ch<<" ";
       }
      cout<<endl;
    }
    }
void print2(int n){
    for(int i =0;i<=n;i++){
        for(int j =5-i;j<=5;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
    print2(n);
}