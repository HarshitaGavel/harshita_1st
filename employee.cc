#include <iostream>
using namespace std;
class employee{
     
     private:
        int a,b,c;

    public:
         int e,d;
         void putdata(int a1,int b1,int c1) ;
         void getdata(){
            cout<<"the value of a is:"<<a<<endl;
            cout<<"the value of b is:"<<b<<endl;
            cout<<"the value of c is:"<<c<<endl;
            cout<<"the value of d is:"<<d<<endl;
            cout<<"the value of e is:"<<e<<endl;
           
         }   



};

void employee :: putdata(int a1,int b1,int c1){
a=a1;
b=b1;
c=c1;
}
int main(){
employee ram;
    ram.d = 68;
    ram.e= 50;
    ram.putdata(4,8,7);
    ram.getdata();

    return 0;
}