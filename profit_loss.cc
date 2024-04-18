#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter the selling price of product:";
    cin>>sp;
    cout<<"Enter the cost price of product:";
    cin>>cp;
    if(sp>cp){
        cout<<"you made a profit of "<<(sp-cp);
    }
    else if(sp<cp) {
        cout<<"you suffered a loss of "<<(cp-sp);
    }
    else{
        cout<<"you nither made a profit nor loss";
    }

return 0;
}