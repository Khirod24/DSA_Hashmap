#include<iostream>
using namespace std;
int main(){
  string s;
  cout<<"ENTER THE STRING: ";
  cin>>s;
  //int hashmap[100]={0};
  int hashmap[256]={0};
  for(int i=0; i<s.size(); i++){
      hashmap[s[i]]++;
  }
  int q;
  cin>>q;
  while(q--){
      char k;
      cin>>k;
      cout<<"Count of "<<k<<" is: "<<hashmap[k]<<endl;
  }
}
