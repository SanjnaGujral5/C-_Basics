#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    int x = 1;
    
     cout<<"enter rows:";
    cin>>n;
     cout<<"enter coloum:";
    cin>>m;
     for(int i=1; i<=n; i++){
        for(int j=x ; j<=i; j++){
            cout<<2*j-1<<" ";
           
            
        }
        cout<<"\n";
     }
    
}