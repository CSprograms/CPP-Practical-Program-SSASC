#include <iostream>
using namespace std;
class io
{
private:
    int value;
public:
    io( int );
    friend class op;
};

class op
{
public:
    void print(const io obj);
};

io :: io( int ip )
{
 value = ip;
}

void op :: print( const io obj )
{
    cout<<"The given value is "<<obj.value<<"."<<endl;
}

int main()
{
   io object1(6);
   op object2;

   cout<<"Object : ";      object2.print(object1);

return 0;
}
