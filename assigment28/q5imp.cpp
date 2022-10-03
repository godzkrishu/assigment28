/* Create a student class and overload new and delete operators outside the class */
#include<iostream>
#include<strings.h>
using namespace std;
 class student 
 { int id;
  string name;
  public:
  student(){}
   student( int x, string name)
   {
    cout<<" pc called"<<endl;
    this->id=x;
     this->name=name;
   }
    void display()
    {
        cout<<id<<"\t"<<name<<endl;
    }
 static void* operator new( size_t size);
  static void operator delete( void *p);

 };
 void* student::operator new( size_t size) // size-t is a new data type which specify the no of byte
{ // void * is data type becouse DMA has no return type
    cout<<" outside new operator is called"<<endl;
   void *p= ::operator new(size); // ::operator treate size as the argument (int id, char )
    return p;
}
  void student::operator delete( void *p)
 {
    cout<<"delete operator is called"<<endl;
    free(p);
 }
 
 
  int main()
  { 
    student *s1=new student(1020,"krishna"); //this is method for dynamic memory allocation
  // in above line 1st object of student is created by para constructer and the size of 
  //object is then passed to new operator
    s1->display();
    delete s1;
    return 0;
  }