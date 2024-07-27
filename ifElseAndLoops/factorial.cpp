#include<iostream>
using namespace std;
int main(){
    int num;
    int product = 1;
    cout<<"enter num:";
    cin>>num;

  for(int i=1; i<=num; i++){
    product *= i;
     cout<<product<<" "<<"\n";

  }
  cout<<product;

}