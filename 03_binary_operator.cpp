#include <iostream>
using namespace std;
class io
{
private:
    int value;
public:
    io( void );
    io( int );
    io (io *);
    void print(void);
    io operator-( void );
    io operator-(const  io ope2 );
};

io :: io()
{
    value = 0;
}

io :: io( int ip )
{
 value = ip;
}

io :: io( io *ip )
{
    value = ip->value;
}

void io :: print( void )
{
    cout<<"The given value is "<<value<<"."<<endl;
}

io io :: operator-( void )
{
    io temp;
    temp.value = - value;
    return temp;
}

io io :: operator-( const io ope2 )
{
    io temp;
    temp.value = value - ope2.value;
    return temp;
}

int main()
{
   io object1;
   io object2(6);
   io object3(object2);
   io object4;
   io object5;

   object4 = -object2;
   object5 = object2 - object4;

   cout<<"Object1 : ";      object1.print();
   cout<<"Object2 : ";      object2.print();
   cout<<"Object3 : ";      object3.print();
   cout<<"Object4 : ";      object4.print();
   cout<<"Object5 : ";      object5.print();

return 0;
}
