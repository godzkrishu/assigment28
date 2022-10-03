/*Create a Distance class having 2 instance
 variable feet and inches. Also create
default constructor and parameterized 
constructor takes 2 variables . Now overload ()
function call operator that takes 3 
arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15*/
 #include<iostream>
  using namespace std;
  class Distance 
 { 
 float feet, inches;
 public:
 Distance():feet(0),inches(0){}
 Distance( float x, float y):feet(x),inches(y){}
 Distance(const Distance &d):feet(d.feet),inches(d.inches)
  { cout<<" copy constructor"<<endl;}
   
   Distance operator()( float a,float b, float c)//overloading ()funtion call
   { 
    cout<<" () funtion call operator called"<<endl;
    Distance D;
     D.feet = a + c + 5;
     D.inches = a+b + 15;
      return D;
   }
    void display()
    {
         cout<<feet<<"feet  "<<inches<<" inches"<<endl;
    }


 };
  int main()
 { 
    Distance d1(5,2),d2;
     d2=d1(8,5,2);
     d2.display();
return 0;
 }