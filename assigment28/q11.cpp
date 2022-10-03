/*Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function*/
#include<iostream>
 using namespace std;
 class Marks
{ int marks;
  public:
  Marks( int x):marks(x){}
 Marks* operator->()  // overloading arrow operator 
   {
    return this ;// this is the returning pointer of the ->
   }
  void print()
  {
     cout<<" marks is "<<marks<<endl;
  }

};
 int main()
{ 
    Marks m1(5),m2(10);
    m1->print();// here ->take printf() and return its adress  to m1 and m1 type cast 
    // its adress to marks type (Marks*)
return 0;
}