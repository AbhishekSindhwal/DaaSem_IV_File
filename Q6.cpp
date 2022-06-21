#include<bits/stdc++.h>
using namespace std;
int FindSequenceCount(vector<int> v,int n,int key){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(v[i]-v[j])==key){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the Size of array: ";
        cin>>n;
        vector<int> v(n);
        cout<<"Enter array elements: ";
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int key;
        cout<<"Enter the key:: ";
        cin>>key;
        cout<<FindSequenceCount(v,n,key)<<endl;
    }
}
