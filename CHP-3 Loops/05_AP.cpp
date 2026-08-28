#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter N: ";
  cin>>n;
  // 1 3 5 7 9..
  // for(int i=1;i<=2*n;i+=2){
  //   cout<<i<<" ";
  // }
     int a = 4;
     for(int i=1;i<=n;i++){
      cout<<a<<" ";
      a = a+3;
     }

}