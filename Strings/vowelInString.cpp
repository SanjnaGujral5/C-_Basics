#include<iostream>
using namespace std;


int main(){
    int count = 0;
   string s = "i am a developer";


int n = s.length();
for(int i=0; i<n; i++){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        count++;
    }
   
}
 cout<<count;


}