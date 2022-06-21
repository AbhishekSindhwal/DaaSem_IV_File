#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=false;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]==v[i+1]){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<"NO"<<endl;

    }
    return 0;
}
