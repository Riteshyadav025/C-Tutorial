#include<iostream>
using namespace std;
int main(){
  string s = "ritesh";
  cout<<s<<" "<<s.length()<<endl;
  // s = s + "yadav";
  s = "yadav" + s;
  cout<<s<<" "<<s.length()<<endl;

}