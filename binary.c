#include<stdio.h>
int binary(int arr[],int key,int size){
     int start=0;
     int end=size-1;
     while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        else if(arr[mid]>key){
            end=mid-1;
        }

     }
  return -1;

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int key=8;
    int start=0;
    int size =9;
    int end=size-1;
    int idx=binary(arr[9],key,size);
    if(idx=-1){
        printf("element not found");
    }
    else
        printf("element is found at index:%d",idx) ;
    return 0;    

}