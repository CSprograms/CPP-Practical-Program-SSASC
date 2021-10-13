#include <iostream>
using namespace std;
class io
{
private:
    int value;
public:
    io( int );
    friend void print( const io obj );
};

io :: io( int ip )
{
 value = ip;
}

void print( const io obj )
{
    cout<<"The given value is "<<obj.value<<"."<<endl;
}

int main()
{
   io object(6);

   cout<<"Object : ";      print(object);

return 0;
}
