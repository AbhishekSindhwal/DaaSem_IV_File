#include<iostream>
using namespace std;
bool linearSearch(int ar[],int s,int e,int key ,int *c){
    for(int i=s;i<e;i++)
    {
        (*c)++;
        if(ar[i]==key)return true;
    }
    return false;
}
bool jumpSearch(int ar[],int n,int key,int *c){
    if(ar[0]==key)return true;
    int i=1;
    while(ar[i]<key){
        if(ar[i]==key)return true;
        i=i*2;
        (*c)++;
    }
    if(i>n)i=n;
    if(linearSearch(ar,i/2,n,key,c)){
        return true;
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
    if(jumpSearch(ar,n,key,&noOfComaprison)){
        cout<<"Key is found."<<endl;
        cout<<"No. of comparisons: "<<noOfComaprison;
    }
    else{
        cout<<"Key not found."<<endl;
        cout<<"NO. of comaprisons: "<<noOfComaprison;
    }
    return 0;
}