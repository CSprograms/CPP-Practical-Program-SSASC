#include<iostream.h>
using namespace std;
#define  SIZE 5

class stack
{
	int S[SIZE];
	int top;
public:
	stack();
	bool IsFull();
	bool IsEmpty();
	void push();
	void pop();
	void display();
};

stack :: stack()
{
    TOP = -1;
}

bool stack :: IsEmpty()
{
	if( -1 == TOP )
		return true;
	else
		return false;
}

bool stack :: IsFull()
{
	if( TOP == SIZE - 1 )
		return true;
	else
		return false;
}

void stack :: push()
{
	if(IsFull())
		cout<<"Stack is Full."<<endl;
	else
    {
        cout<<"Enter a value to push : ";
        cin>>S[++TOP];
    }
}

void stack :: pop()
{
	if(IsEmpty())
		cout<<"\nStack is Empty."<<endl;
	else
		cout<<"Popped Element : "<<S[TOP--];
}

void stack :: display()
{
	if(IsEmpty())
    {
        cout<<"Stack is Empty."<<endl;
    }
	else
	{
		cout<<"Stack Elements : "<<endl;
		for( int loop = TOP ; -1 < loop; --loop )
			cout<<<<S[loop]<<endl;
	}
}

int main()
{
	stack object;
	int choice;

	do
	{
		cout<<"1 - PUSH"<<endl;
		cout<<"2 - POP"<<endl;
		cout<<"3 - DISPLAY"<<endl;
		cout<<"4 - QUIT"<<endl;

		cout<<"Enter a choice : ";
		cin>>choice;

		switch(choice)
		{
        	case 1:
            		object.push();
            		break;
        	case 2:
           		 object.pop();
           		 break;
        	case 3:
          		  object.display();
           		 break;
      		case 4:
           		 cout<<"Program Ends"<<endl;
          		  break;
		default;
            		cout<<"Invalid Input"<<endl;
		}
    	}while( choice != 4 );
return 0;
}
