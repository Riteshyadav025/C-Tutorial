#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "ritesh";
  cout<<s<<endl;
  int n = s.length(); // n=6
   int i = 0;
  int j = n/2 -1;
  while(i<j){
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
  }
  cout<<s<<endl;
}