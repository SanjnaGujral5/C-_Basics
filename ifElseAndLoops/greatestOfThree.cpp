#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter side a:";
    cin>>a;
     cout<<"enter side b:";
    cin>>b;
     cout<<"enter side c:";
    cin>>c;
   if(a>b){
    if(a>c) {
        cout<<a<<" is gratest";

    }
    
   
   else{
    cout<<c<<" is gratest";
   }
   }
   else{
    if(b>c){
        cout<<b<<" is gratest";
    }
    else{
        cout<<c<<" is gratest";
    }
   }

   


    
}