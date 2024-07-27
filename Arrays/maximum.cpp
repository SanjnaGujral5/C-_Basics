#include<iostream>
using namespace std;


int main(){
    
   int arr[] = {4, 5, 8, 6};
   int mx = arr[0];
   int n = sizeof(arr)/4;  //integer is of four byte
   
  
   for(int i=1; i<n; i++){
    // if(arr[i]>mx){
    //     mx = arr[i];
    // }
    mx = max(mx, arr[i]);
 
}
cout<<mx;

}