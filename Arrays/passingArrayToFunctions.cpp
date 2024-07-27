#include<iostream>
using namespace std;
// void change(int x){
//     x = 8;
// }


// int main(){
//    int x = 4;
//    cout<<x<<"\n";
//    change(x);  //pass by value
//    cout<<x<<"\n";
// }

void change(int x[]){
    x[0] = 8;
}


int main(){
   int arr[3] = {1, 2, 3};
   for(int i=0; i<=2; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   change(arr);  //pass by refrence
    for(int i=0; i<=2; i++){
    cout<<arr[i]<<" ";
   }
}