#include <iostream>
#include<iomanip>
using namespace std;

class Operand
{
    int operand1;
    int operand2;
public:

    Operand(int ope1, int ope2)
    {
        operand1 = ope1;
        operand2 = ope2;
    }

    int getOperand1( void )
    {
        return operand1;
    }

    int getOperand2( void )
    {
        return operand2;
    }
};

class Sum : public Operand
{
    int sum;
public:

    Sum( int ope1, int ope2 ) : Operand( ope1, ope2 )
    {
        sum = getOperand1() + getOperand2();
    }

    int getSum()
    {
        return sum;
    }
};

class Square : public Sum
{
    int square;
public:

    Square( int ope1, int ope2 ) : Sum( ope1, ope2 )
    {
        square = getSum() * getSum();
    }

    int getSquare()
    {
        return square;
    }
};

int main()
{
    Square object( 5, 10);

    cout<<"Operand1 : "<<object.getOperand1()<<endl;
    cout<<"Operand2 : "<<object.getOperand2()<<endl;
    cout<<"Sum : "<<object.getSum()<<endl;
    cout<<"(Sum)^2 : "<<object.getSquare()<<endl;

return 0;
}
