#include<iostream>
using namespace std;

int pow( int n, int x){
    if(x==0) return 1;
    
   return n *  pow(n, x-1);
}
int main(){
    int n;
    int x;
    cout<<"Enter n:";
    cin>>n;
    
    cout<<"Enter x:";
    cin>>x;
    cout<<pow(n, x)<<endl;
} 