#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter Marks :";
  cin>>n;
  if(n>=80 and n<=100){
    cout<<"very Good";
  }
  else if(n>=61){
    cout<<"Good";
  }
  else if(n>=41){
    cout<<"Average";
  }
  else{
    cout<<"fail";
  }
  
}