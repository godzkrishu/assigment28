/*Create an Integer class that contains 
int x as an instance variable and overload
casting int() operator that will type
 cast your Integer class object to int data type.
*/
#include<iostream>
 using namespace std;
  class Integer
    {  int x;
     public:
     Integer(){}
     Integer( int a):x(a){}
      Integer( const Integer &a)
      { cout<<" copy const called"<<endl;
        x=a.x;
      }
       operator int() // type casting has no return tyepe , 
       //it automatically return the casting type data
       {  
        cout<<" int() operator called"<<endl;
         return x; /// here x is the int type data 
       }
      
        void display()
        {
            cout<<x<<" integer type data"<<endl;
        }
    };     
 int main()
 { 
    Integer i1(5);
    i1.display();
     int y;
     y=(int)i1; // type casting  integer-> int type data
      cout<<y<<" int type data";
 
    return 0;
 }
