#include<iostream>
using namespace std;
int main(){
    int n1;
    char op;
    int n2;
    cout<<"enter side n1:";
    cin>>n1;
     cout<<"enter side op:";
    cin>>op;
     cout<<"enter side n2:";
    cin>>n2;
    switch (op)
    {
    case '+':
    cout<<n1+n2;
        break;
        case '-':
    cout<<n1-n2;
        break;
        case '*':
    cout<<n1*n2;
        break;
        case '/':
    cout<<n1/n2;
        break;
    
    default:
    cout<<"invalid operator";
        break;
    }
   
}