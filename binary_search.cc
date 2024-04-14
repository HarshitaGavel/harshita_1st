#include<iostream>
using namespace std;

int binary(int arr[],int size,int key){
    int low=0;
    int high=size+1;
    while(low<=size){
        int mid=(low+high)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;

        }
        else {
            high=mid-1;
        }
        
    }
    
 return -1;
}
int main (){
    int size;
    cout<<"enter the nomber of element:";
    cin>>size;
    int arr[size];
    cout<<"enter element of array:";
    for(int j=0;j<size;j++){
        cin>>arr[j];
       
    }
    int key;
    cout<<"enter searching element:";
    cin>>key;
    int idx=binary(arr,size,key);
    
       if(idx==-1){
        cout<<"\nthe element is NOT found"<<endl;
    }
    else{
        cout<<"\nthe element is found at index:"<<idx<<"[note the our indexing is start from 0]";
    }
    return 0;
}