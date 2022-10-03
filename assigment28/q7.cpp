/*7. Create an Integer class and overload
 logical not operator for that class*/
 #include<iostream>
  using namespace std;
   class Integer
    {  int a;
     public:
     Integer(){}
     Integer( int x):a(x){}
      Integer( const Integer &x)
      { cout<<" copy const called"<<endl;
        a=x.a;
      }
       Integer operator!()
       {  
        cout<<" !() operator called"<<endl;
         Integer temp;
           temp.a=-a;
            return temp;
       }
        void display()
        {
            cout<<a<<endl;
        }

    };
   int main()
   { Integer i1(5), i2;
      i2=!i1;
      i2.display();
    return 0;
   }