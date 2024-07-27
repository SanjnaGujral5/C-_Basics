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
    if((a+b) > c && (a + c) > b && (b + c) > a){
        cout<<"it can be sides of triangle";
    } else{
        cout<<"it can't br sides of tiangle";
    }
   


    
}