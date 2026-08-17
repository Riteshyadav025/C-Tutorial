#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter Num :";
  cin>>n;
  if(n>=0){
      cout<<n;
  }    
  else{ // n<0
     cout<<-n;
  } 
  
  // if you want you change n into its absolute value
  // if(n<0) n = -n;
  // cout<<n;
}  