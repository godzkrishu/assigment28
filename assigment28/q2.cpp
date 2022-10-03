/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/

#include<iostream>
using namespace std;
class  Complex
{int img, real;
    public:
    Complex()
    {   real=0;
        img=0;
    }
      Complex( int x, int y)
    {   real=x;
        img=y;
    }
     Complex(const Complex &s)
     {
        real=s.real;
        img=s.img;
     }
    
      
     void setdata( int real, int img)
     {  cout<<" setdata funtion is called"<<endl;
        
         this->real=real; // this is a pointer so we have to use-> operator to
         this->img=img;//  to acces the member funtion
     }
      void display()
      {
        cout<<real<<"+"<<img<<"i"<<endl;
      }


      

};
int main()
{  Complex c1(4,5), c2;
   c2.setdata(8,2);
    c1.display();
    c2.display();
   
    return 0;
}