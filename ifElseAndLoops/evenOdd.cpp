#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"enter num:";
    cin>>n;
    // if(n%2 == 0){
    //     cout<<"even";
    // } else{
    //     cout<<"odd";
    // }

    //by ternary operator
    (n%2 ==0) ? cout<<"even" : cout<<"odd";
}