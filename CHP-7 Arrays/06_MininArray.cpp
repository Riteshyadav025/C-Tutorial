#include<iostream>
using namespace std;
int main(){
  int arr[] = {-9,-3,-4,-2};
  int n = sizeof(arr)/4;
  int mn = arr[0];
  for(int i =0;i<n;i++){
    //  if(arr[i]<mn) mn = arr[i];
    mn = min(mn,arr[i]);
  }
  cout<<mn;
} 