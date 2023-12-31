#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    map<int,int>mp;
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS: ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    
    //iterate in the map
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    cout<<"ENTER NUMBER OF ELEMENTS TO FIND COUNT: ";
    int q;
    cin>>q;
    cout<<"ENTER ALL ELEMENTS: ";
    while(q--){
        int k;
        cin>>k;
        cout<<"Count of "<<k<<" is: "<<mp[k]<<endl;
    }
    
}
