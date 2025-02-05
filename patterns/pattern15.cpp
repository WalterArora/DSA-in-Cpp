#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        char ch ='A';
        for(int j=0;j<n-i-1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
    }