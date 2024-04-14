#include<iostream>
using namespace std;

int leanear(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        
        if(arr[i]==key){
            return i;
            
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
    int idx=leanear(arr,size,key); 
    
       if(idx==-1){
        cout<<"\nthe element is NOT found"<<endl;
    }
    else{
        cout<<"\nthe element is found at index:"<<idx;
    }
    return 0;
}