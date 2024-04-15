#include <iostream>
using namespace std;

class compliment
{
    private :
        string s;
    public :
      void input(void);
      void  once_compli(void);
      void  twos_compli(void);
      void  display(void);
};
void compliment :: input(void)
{
    cout<<"Enter the binary number:";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'& s.at(i)!='1'){
             cout<<"Sorry,this is not a binary number";
             break;
        }
    
    }
    

}
 
void compliment ::once_compli(void)
{

    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
       else if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
       
    }
 
        

}
void compliment ::display(void)
{
    for(int i=0;i<s.length();i++)
    {
       cout<<"\n"<<s.at(i);
    }
}

int main()
 {
    compliment c;
    c.input();
    c.once_compli();
    c.display();
    
    return 0;
 }