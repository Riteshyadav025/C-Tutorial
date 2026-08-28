#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter N :";
  cin>>n;
  // 1,2,4,8,16...
  // 5,15,45...
  int a = 5;
  for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a = a*3;
  }

}