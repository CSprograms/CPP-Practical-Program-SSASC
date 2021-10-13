#include <iostream>
using namespace std;
class io
{
private:
    int value;
    static int total;
public:
    io( int );
    void print( void );
    static void static_print( void );
};

io :: io( int ip )
{
 value = ip;
 total += value;
}

void io :: print( void )
{
    cout<<"The given value is "<<value<<"."<<endl;
}

void io :: static_print( void )
{
    cout<<"\nThe total of given value is "<<total<<"."<<endl;
}

int io :: total;

int main()
{
   io object1[5] = { 0, 1, 2, 3, 4 };
   io object2[5] = { 10, 11, 12, 13, 14 };

   cout<<"\nObject1 :"<<endl;
   for(int i=0; 5 > i; i++)
    object1[i].print();

   cout<<"\nObject2 :"<<endl;
   for(io obj : object2)
    obj.print();

   io::static_print();          // object1[4].static_print();

return 0;
}
