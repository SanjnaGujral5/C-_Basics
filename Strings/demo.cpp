#include<iostream>
using namespace std;


int main(){
   string s = "i am a developer";
//    cout<<"Enter a string : ";
// cin>>s;  by using this we cant print a sentance with space
// getline(cin,s); // so use this for sentances 

//    cout<<s;

int n = s.length();
for(int i=0; i<n; i++){
    cout<<s[i];
}


}