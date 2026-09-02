#include<iostream>
using namespace std;
int main(){
  int x = 12;
  int y = 45;
  cout<<x<<" "<<y<<endl;
  //Method-1
  // int temp = x;
  // x = y;
  // y = temp;
  // cout<<x<<" "<<y<<endl;

  //Method-2
  x = x+y;
  y = x-y;
  x = x-y;
  cout<<x<<" "<<y<<endl;

}