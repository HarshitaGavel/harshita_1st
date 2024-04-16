//merge sort using input from user

#include<iostream>        
using namespace std;
void merge(int arr[],int p,int mid,int r){
    int n1 = mid-p+1;
    int n2 = r-mid;
    int i,j,k;

    int a[n1], b[n2];
    for( i=0; i<n1; i++){
        a[i] = arr[p + i];            
    }
     for( j=0; j<n2; j++){
        b[j] = arr[mid +1 +j];              
    }
     i=0;
     j=0;
     k=p;

    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }

        while(i<n1){
            arr[k]=a[i];
            i++; k++;
        }
        while(j<n2){
            arr[k]=b[j];
            j++; k++;
        }

}
void merge_sort(int arr[],int p,int r){

    if(p<r){
        int mid = (p+r)/2;
        merge_sort(arr,p,mid);
        merge_sort(arr,mid+1,r);

        merge(arr,p,mid,r);

    }

}
int main (){
    int n;
    cout<<"enter the length of the array :";
    cin>>n;
    int arr[n];
    cout<<"enter the array element :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }

    return 0;

}