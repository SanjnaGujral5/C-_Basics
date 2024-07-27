#include<iostream>
using namespace std;


int main(){
    
   int arr[] = {1, 2, 3, 4, 5};
  for(int i=0; i<=4; i++){
    if(arr[i] %2 == 0){
        arr[i] = 2*arr[i];
    }
    else{
    arr[i] +=10;
  }
  cout<<arr[i]<<" ";
  } 
  

}