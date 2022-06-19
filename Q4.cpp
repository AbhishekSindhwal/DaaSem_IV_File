#include<iostream>
using namespace std;
int binarySearchLower(int ar[],int n,int key){
    int l=0,h=n-1;
    while(l<h){
        int mid=l+(h-l)/2;
        if(ar[mid]<key)   
        {
            l=mid+1;
        }
        else h=mid;
    }
    if(ar[l]==key)return l;
    return -1;
}
int binarySearchUpper(int ar[],int n,int key){
    int l=0,h=n-1;
    while(l<h-1){
       int mid=l+(h-l)/2;
        if(ar[mid]<=key)   
        {
            l=mid;
        }
        else h=mid-1;
    }
    if(ar[l]==key)return l;

    return -1;
}
int main(){
    int n,key,count=0;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter key element:";
    cin>>key;
    int l=binarySearchLower(ar,n,key);
    int u=binarySearchUpper(ar,n,key);
    if(l<u)
    {
        cout<<"No. of duplicates element: "<<u-l+1;
    }
    else if(l==-1)
    {
        cout<<"Element not found.";
    }
    else{
        cout<<"Only one occurance is present.";
    }
    return 0;
}