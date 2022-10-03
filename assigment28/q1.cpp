/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
 using namespace std;
 class Complex
 {
    int img, real;
    public:
    Complex()
    {   real=0;
        img=0;
    }
    Complex( int x, int y)
    {   real=x;
        img=y;
    }
    Complex( const Complex &C)
    {
        real=C.real;
        img=C.img;  
    }
    friend istream& operator>>( istream &in, Complex &c);
    friend ostream& operator<<( ostream &out, Complex &c);

 };
istream& operator>>( istream &in, Complex &c)
{ 
     cout<<" >> operator called "<<endl;
    cin>>c.real>>c.img;
    return in;
}
ostream& operator<<( ostream &out, Complex &c)
{ 
     cout<<" << operator called "<<endl;
    cout<<c.real<<" +"<<c.img<<"i"<<endl;
    return out;
}



  int  main()
  { Complex c1(5,6), c2, c3;
   cin>>c2;
   cin>>c3;
    cout<<c1<<c2<<c3;

    return 0;
  }