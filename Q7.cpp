#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int ar[],int n){
    int count=0,c=0;
    for(int i=1;i<n;i++){
        int b=ar[i], j=i-1;
        while(j>=0 && ar[j] > b){
            count++;
            ar[j+1]=ar[j];
            j--;
            c++;
        }
        c++;
        ar[j+1]=b;
    }
    cout<<"Comaparision:: "<<count<<"\nSwaps:: "<<c<<endl;
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
        InsertionSort(ar,n);
        Display(ar,n);
    }
}
