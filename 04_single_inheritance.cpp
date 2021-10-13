#include <iostream>
using namespace std;

class operand
{
    int operand1;
    int operand2;
public:

    void setOperand( int ope1, int ope2 )
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

class sum : public operand
{
    int sum;
public:
    int getSum()
    {
        sum = getOperand1() + getOperand2();
        return sum;
    }
};

int main()
{
    sum object;

    object.setOperand( 5, 10 );

    cout<<"Operand1 : "<<object.getOperand1()<<endl;
    cout<<"Operand2 : "<<object.getOperand2()<<endl;
    cout<<"Sum : "<<object.getSum()<<endl;

return 0;
}
