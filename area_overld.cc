#include<iostream>
using namespace std;

float area(float rad){
  
  return 3.14*rad*rad;

}
int area(int len,int wid){

  return len*wid;

}
float area(int hei ,float base){

return 0.5*hei*base;

}

int main(){
    int l,w,h;
    float b,r;


    cout<<"Enter the length :";
    cin>>l;
    cout<<"Enter the width :";
    cin>>w;
     cout<<"Enter the heigth :";
    cin>>h;
    cout<<"Enter the base :";
    cin>>b;
    cout<<"Enter the radius :";
    cin>>r;
     
    cout<<"The area of circle is :"<<area(r)<<endl;
    cout<<"The area of rectangle is :"<<area(l,w)<<endl;
    cout<<"The area of traingle is :"<<area(h,b)<<endl;

return 0;

}