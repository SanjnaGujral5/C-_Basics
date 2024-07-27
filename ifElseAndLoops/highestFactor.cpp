#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    int hf = 1;
    
// for(int i=1; i<num; i++){
//     if(num % i == 0){
//        hf = i;
       
//     }
    
//     }
//      cout<<hf;

for(int i=num/2; i>=1; i--){
    if(num%i==0){
        cout<<i<<" ";
        break;
    }
}
   
}