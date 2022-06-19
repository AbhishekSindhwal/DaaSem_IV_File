#include<iostream>
using namespace std;
bool linearSearch(int ar[],int n,int key,int *c){
    for(int i=0;i<n;i++)
    {
        (*c)++;
        if(key==ar[i]){
            return true;
        }
    }
    return false;
}
int main()
{
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
    if(linearSearch(ar,n,key,&noOfComaprison)){
        cout<<"Key is found."<<endl;
        cout<<"No. of comparisons: "<<noOfComaprison;
    }
    else{
        cout<<"Key not found."<<endl;
        cout<<"NO. of comaprisons: "<<noOfComaprison;
    }
    return 0;
}