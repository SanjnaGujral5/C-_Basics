#include<iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    cout<<"enter num:";
    cin>>num;

    while(num!=0){
    int ld = num%10;
    num = num/10;
    cout<<ld;
    sum+=ld;
    
   
}
cout<<sum;

}