// #include<iostream>

// using namespace std;


// int main(){
    
//    int arr[] = {4, 5, 8, 6};
   
//    int n = sizeof(arr)/4;  //integer is of four byte
//    int mx = INT32_MIN;
   
  
//    for(int i=0; i<n; i++){

//     mx = max(mx, arr[i]);
 
// }
// int smx = INT32_MIN;
   
  
//    for(int i=0; i<n; i++){
//     if(arr[i] != mx){
//          smx = max(smx, arr[i]);

//     }
//     cout<<smx;
//     return 0;

// }
// }

#include <iostream>
#include <algorithm> // For the max function
using namespace std;

int main() {
    int arr[] = {4, 5, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int mx = INT32_MIN;

    // Find the maximum element
    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
    }

    int smx = INT32_MIN;

    // Find the second maximum element
    for (int i = 0; i < n; i++) {
        if (arr[i] != mx) {
            smx = max(smx, arr[i]);
        }
    }

    // Print the second maximum element
    cout << smx << endl;

    return 0;
}
