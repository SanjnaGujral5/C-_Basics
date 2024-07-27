#include<iostream>
using namespace std;
int main(){
    int cp;
    int sp;
     cout<<"enter cp:";
    cin>>cp;
     cout<<"enter sp:";
     cin>>sp;
     if(cp == sp){
        cout<<"no profit no loss";
     }
     else if(cp < sp){
        cout<<"profit";
        int profit = sp - cp;
        cout<<profit;
     }
     else if(cp > sp){
        cout<<"loss";
        int loss = cp - sp;
        cout<<loss;
     }


    
}