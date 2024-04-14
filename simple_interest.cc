#include<iostream>
using namespace std;

float simple_interest(int ,int,int);

int main(){
    int p,t;
    int r;

    cout<<"Enter principal amount :";
    cin>>p;

    cout<<"Enter rate of interest :";
    cin>>r;

    cout<<"Enter time :";
    cin>>t;

    cout<<"The simple interest is :"<<simple_interest(p,r,t);

    return 0;  
}

float simple_interest(int Pr,int R ,int T){

    return (Pr*R*T)/100;
}