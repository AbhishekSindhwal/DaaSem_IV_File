#include<bits/stdc++.h>
using namespace std;
int merge(int ar[],int l,int mid,int h,int& count){
    int c[h-l+1];
    int s=0;
    int k=0,i=l,j=mid+1;
    while(i<=mid && j<=h){
        count++;
        if(ar[i]<=ar[j]){
            c[k++]=ar[i];
            i++;
        }
        else{
            c[k++]=ar[j];
            j++;
            s=s+(mid+1-i);
        }
    }
    if(i<=mid){
        while(i<=mid){
            c[k++]=ar[i++];
        }
    }
    else{
        while(j<=h){
            c[k++]=ar[j++];
        }
    }
    k=0;
    for(int i=l;i<=mid;i++){
        ar[i]=c[k++];
    }
    for(int i=mid+1;i<=h;i++){
        ar[i]=c[k++];
    }

    return s;
}
int MergeSort(int ar[],int l,int h,int& count){
    int in=0;
    if(l<h){
        int mid=(l+h)/2;
        in+=MergeSort(ar,l,mid,count);
        in+=MergeSort(ar,mid+1,h,count);
        in+=merge(ar,l,mid,h,count);
    }
    return in;
}
void Display(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
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
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        cout<<"Unsorted array: ";
        Display(ar,n);
        int count=0,s=0;
        s=MergeSort(ar,0,n-1,count);
        cout<<"Sorted array: ";        
        Display(ar,n);
        cout<<"Comaparison: "<<count<<" , Inversion count: "<<s<<endl;
    }
}
