#include<iostream>
using namespace std;

int main (){
    int n,i=0;
    cout<<"enter the total indexing no:\n";
    cin>>n;
    int arr[n];
   
    // while(i<n){
    //      cout<<"\nEnter array element :";
    //     cin>>arr[i];
    //     cout<<"\nyour array at index "<<i<<" is: "<<arr[i]<<endl;
    //     i++;
    // }
  
do{
        cout<<"\nEnter array element :";
        cin>>arr[i];
        
        i++;
}while(i<n);
for(i=0;i<n;i++){
cout<<"\nyour array at index "<<i<<" is: "<<arr[i];
}
return 0;
}
