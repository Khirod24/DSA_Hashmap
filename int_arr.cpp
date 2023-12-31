#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"ENTER THE NUMBER OF ELEMENTS: ";
  cin>>n;
  cout<<"ENTER ELEMENTS: ";
  int arr[n];
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }
  int hashmap[100]={0};
  for(int i=0; i<n; i++){
      hashmap[arr[i]]++;
  }
  int q;
  cin>>q;
  while(q--){
      int k;
      cin>>k;
      cout<<"Count of "<<k<<" is: "<<hashmap[k]<<endl;
  }
}
