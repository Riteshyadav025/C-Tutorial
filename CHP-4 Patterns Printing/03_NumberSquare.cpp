#include<iostream>
using namespace std;
int main(){
  // rectangle banna hai 
  // rows -> m, cols -> 5
  int n;
  cout<<"Enter side of square : ";
  cin>>n;
 for(int i=1;i<=n;i++){  // rows = m
    for(int j=1;j<=n;j++){ // cols = n
       cout<<j<<" ";   
  }
    cout<<endl;
}
}