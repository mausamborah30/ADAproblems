#include <iostream>
using namespace std;
void merge_sort(int a[],int first,int mid,int last);
void merge(int a[],int first,int last){
    int mid;
    if(first<last){
        mid=(first+last)/2;
        merge(a,first,mid);
        merge(a,mid+1,last);
        merge_sort(a,first,mid,last);
    }
}
void merge_sort(int a[],int first,int mid,int last){
    int i,j,k,b[50];
    i=first;
    j=mid+1;
    k=first;
    while(i<=mid && j<=last){
        if(a[i]<=a[j])
             b[k++]=a[i++];
        else
             b[k++]=a[j++];
    }
    if(i>mid){
        while(j<=last)
             b[k++]=a[j++];
    }
    else{
        while(i<=mid){
            b[k++]=a[i++];
        }
    }
    //cout<<"print maadi\n";
    for(i=first;i<=last;i++){
         a[i]=b[i];
    }
    
}

int main() {
     int n;
    cout<<"Enter size\n";
    cin>>n;
    int a[n],i,j;
    cout<<"enter array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge(a,0,n-1);
    cout<<"after merge sort\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
