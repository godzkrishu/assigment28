/*Overload subscript operator [] that will be useful 
when we want to check for an index
out of bound.*/
 #include<iostream>
  using namespace std;
  class array
  {
     int a[100];
     const int size=100;
      public:
       array(){}
       array( int x, int index) // using initialiser
       { if(index>size)
            {
                cout<<" array index is out of bound exeption";
                 exit(0);
            }
        a[index]=x;
       }
      int  operator[]( int index)
      {
        if(index>size)
            {
                cout<<" array index is out of bound exeption";
                 exit(0);
            }
           return a[index]; 

      }
      void display( int index)
      {
        cout<<a[index]<<" is the value at that point";
      }

  };
  
   int main()
   { array a1(5,10); //  value 5 at 10th place
     cout<<a1[10]<<endl;
      return 0;
   }
