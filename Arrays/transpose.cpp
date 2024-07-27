#include<iostream>
using namespace std;


int main(){
   int arr1[4][2] = {{76,81}, {13,76}, {82,91}, {88,90}};   // four rows three columns
   int arr2[2][4];
   
  for(int i=0; i<4; i++){
    for(int j=0; j<2; j++){
        arr2[j][i] = arr1[i][j];
    
    }
   
  }
  for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

