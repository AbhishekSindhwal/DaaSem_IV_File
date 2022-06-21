#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int ar[],int n){
    int count=0,s=0;
    for(int i=0;i<n-1;i++){
        int mn=ar[i], k=i;
        for(int j=i+1;j<n;j++){
            count++;
            if(mn > ar[j]){
                k=j;
                mn=ar[j];
            }
        }
        s++;
        swap(ar[k],ar[i]);
    }
    cout<<"Comparision:: "<<count<<"\nSwaps:: "<<s<<endl;
}
void Display(int ar[],int n){
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        SelectionSort(ar,n);
        Display(ar,n);
    }
}
