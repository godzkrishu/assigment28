/*Create a complex class and overload assignment operator for that class*/
 #include<iostream>
 using namespace std;
 class Complex
 {
    int img, real;
    public:
    Complex():real(0), img(0){}
    Complex( int x, int y):real(x), img(y){}
    Complex( const Complex &C) //copy constructor
    {cout<<" cp contructor called"<<endl;
        real=C.real;
        img=C.img;  
    }
  Complex operator=( const Complex &C)
  { 
    cout<<"assigment operator called"<<endl;
     real=C.real;
        img=C.img; 
}

  friend ostream& operator<<( ostream &out, Complex C);
 };
  ostream& operator<<( ostream &out, Complex C)
  { cout<<" << operator called"<<endl;
    out<<C.real<<" +"<<C.img<<"i"<<endl;
     return out;
  }
 
  int main()
  { Complex c1(5,6), c2(8,6), c3;
   Complex c4=c1;
    cout<<c1<<c2<<c3<<c4;


    return 0;
  }