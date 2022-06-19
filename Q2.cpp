#include<iostream>
using namespace std;
bool binarySearch(int ar[],int n,int key,int *c){
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        (*c)++;
        if(ar[mid]==key)return true;
        else if(ar[mid]<key)l=mid+1;
        else h=mid-1;
    }
    return false;

}
int main(){
    int n,key,noOfComaprison=0;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter key element:";
    cin>>key;
    if(binarySearch(ar,n,key,&noOfComaprison)){
        cout<<"Key is found."<<endl;
        cout<<"No. of comparisons: "<<noOfComaprison;
    }
    else{
        cout<<"Key not found.";
        cout<<"NO. of comaprisons: "<<noOfComaprison;
    }
    return 0;
}