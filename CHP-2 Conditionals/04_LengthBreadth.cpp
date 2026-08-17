#include<iostream>
using namespace std;
int main(){
  int l;
  cout<<"Enter Length of rect :";
  cin>>l;
  int b;
  cout<<"Enter Breadth of rect :";
  cin>>b;
  int a = l*b;
  int p = 2*(l+b);
  if(a>p){
      cout<<"Area of rect greater than parameter ";
  }    
  else{
    cout<<"Parameter is greater than area of rect ";
  }
 
}  