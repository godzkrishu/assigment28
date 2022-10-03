/* Create a Coordinate class for 3 variables x,y
 and z and overload comma operator
such that when you write c3 = (c1 , c2 )
 then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
 class Coordinate 
 {
     int x, y, z;
      public:
      Coordinate():x(0), y(0),z(0) {}
      Coordinate(int a, int b, int c):x(a),y(b),z(c){}
      Coordinate( const Coordinate &c):x(c.x),y(c.y), z(c.z)
      { cout<<" copy const called"<<endl;}
      friend Coordinate operator,(Coordinate c1, Coordinate i2 );
      void display()
      {
        cout<<" x="<<x<<" y="<<y<<" z="<<z<<endl;
      }
      
 };
  Coordinate operator,(Coordinate c1, Coordinate c2 )// always the last object of argument is assigned in LHS
  {
    cout<<" (,) operator called "<<endl;
       return c2;
    
    /*OR YOU CAN USE THIS 
     Coordinate temp;
     temp.x=c2.x;
     temp.y=c2.y;
     temp.z=c2.z;
    return temp;// only LAST object of argument is assigned in LHS
    */

  }
   int main()
   {
    Coordinate c1(5,6,3),c2(8,5,2), c3, c4;
    c3=(c1, c2);
    c3.display();
    c4=(c3, c1);
     c4.display();
     
   }

