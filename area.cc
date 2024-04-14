//Area of CIRCLE,RECTANGLE,TRAINGLE and SQUARE using function

#include<iostream>
using namespace std;

float area_circle(float r){
    return (3.14*r*r);

}
float area_rectangle(int l,int b){
    return (l*b);

}
float area_traingle(int l,int b){
    return (0.5*l*b);

}
float area_square(int s){
    return (s*s);

}


int main(){
    int l,b,s;
    float r;
    
    cout<<"Enter the length :";
    cin>>l;
    cout<<"Enter the breath :";
    cin>>b;
    cout<<"Enter the side :";
    cin>>s;
    cout<<"Enter the radius :";
    cin>>r;

    cout<<"The area of circle is :"<< area_circle (r)<<endl;
    cout<<"The area of rectangle is :"<< area_rectangle( l, b) <<endl;
    cout<<"The area of trangle is :"<< area_traingle( l, b) <<endl;
    cout<<"The area of square is :"<<  area_square( s) <<endl;
    
return 0;

}