#include<iostream>
using namespace std;
int bubble(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr[n];

}
int main(){
    int n,i;
    cout<<"Enter the no of element"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=bubble(arr,n);
    cout<<"The sorted order of element is:"<<"\n"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}