#include<iostream>
using namespace std;


void swap(int *x,int *y){
    int temp=*x;
   *x=*y;
    *y=temp;

}
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
     
    cout<<"\nEnter the value of b:";
    cin>>b;
    cout<<"\nThe value before swapping :"<<"\nThe value of a is "<<a<<"\nThe value of b is "<<b;
    swap(&a,&b);
    cout<<"\nThe value after swapping :"<<"\nThe value of a is "<<a<<"\nThe value of b is "<<b;

    return 0;
}