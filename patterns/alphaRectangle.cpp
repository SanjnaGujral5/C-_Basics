#include<iostream>
using namespace std;
int main(){
    int n;
   int m;
    
     cout<<"enter rows:";
    cin>>n;
     cout<<"enter coloum:";
    cin>>m;
     for(int i=1; i<=n; i++){
        for(int j=1 ; j<=m; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<"\n";
     }
    
}