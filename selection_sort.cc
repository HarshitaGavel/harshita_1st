#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    int i,j;
    for( i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }

        }
        if(min!=i){
          int  temp=arr[i];
          arr[i]=arr[min];
          arr[min]=temp;

        }

    }

}

int main(){

    int n,i;
    cout<<"Enter the no of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   selection_sort(arr,n);
    cout<<"The sorted order of element is:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}