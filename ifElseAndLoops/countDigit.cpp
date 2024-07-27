#include<iostream>
using namespace std;
int main(){
//  int n;
//  cout<<"Enter a number:";
//  cin>>n;
//     int count = 0;
   
    
// while(n!=0){
//     n = n/10;
//     count++;
    
   
// }
//  cout<<count;

int n;
 cout<<"Enter a number:";
 cin>>n;
   int sum = 0;
//    int product = 1;
   
    
while(n!=0){
    int ld = n%10;
    n = n/10;
    sum+=ld;
    // product*=ld;
}
cout<<sum;
// cout<<product;

    }
   
