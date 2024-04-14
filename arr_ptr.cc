#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"enter the total indexing no:\n";
    cin>>n;
    int arr[n];


    do{
        cout<<"\nEnter array element :";
        cin>>arr[i];
        
        i++;
}while(i<n);
for(i=0;i<n;i++){
cout<<"\nyour array at index "<<i<<" is: "<<arr[i]<<endl;
}
int *m=arr;


for(i=0;i<n;i++){
    cout<<"value at array "<<"is"<< m << "  value of array:"<<*(m+i)<<endl;
    
   cout<<"\n\nyour array address at index "<<i<<" is: "<<&arr[i]<<" \nusing m:"<<*m<<endl;
}


return 0;

}