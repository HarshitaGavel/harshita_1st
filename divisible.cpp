#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter two number (divisor no) :";
    cin>>n1>>n2;
    cout<<"Enter the no which you wants to check:";
    cin>>n3;
    
    if(n3%n1==0 and n3%n2==0){
        cout<<"The number is divisible by "<<n1<<" and "<<n2<<" both.";
    }
   
    if(n3%n1==0 ){
        cout<<"The number is divisible by "<<n1;
    }
    else if( n3%n2==0){
        cout<<"The number is divisible by "<<n2;
    }
     else{
        cout<<"The number is neither divisible by "<<n1<<" nor "<<n2;
    }
    


return 0;
}