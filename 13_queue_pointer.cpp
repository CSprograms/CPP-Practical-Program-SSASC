#include<iostream>
using namespace std;
#define  SIZE 5

class queue
{
	int front,rear;
	int Q[SIZE];
public:
	queue();
	bool IsFull();
	bool IsEmpty();
	void enq();
	void deq();
	void display();
	void reArrange();
};

queue :: queue()
{
	front=0;
	rear=-1;
}

bool queue :: IsFull()
{
	if( rear == SIZE - 1 )
		return true;
	else
		return false;
}

bool queue :: IsEmpty()
{
	if( rear < front )
		return true;
	else
		return false;
}

void queue :: enq()
{
	if(IsFull())
		cout<<"Queue is Full."<<endl;
	else
    {
        cout<<"Enter a value to enq : ";
        cin>>Q[++rear];
    }

}

void queue :: deq()
{
	if(IsEmpty())
		cout<<"Queue is Empty."<<endl;
	else
	{
		cout<<"deq element : "<<Q[front++]<<endl;
		reArrange();
	}
}

void queue :: reArrange()
{
	if(IsEmpty())
	{
		front=0;
		rear=-1;
	}
	else
	{
		for( int loop = front; loop <= rear; ++loop)
			Q[loop-1]=Q[loop];

		front--;
		rear--;
	}
}

void queue :: display()
{
	if(IsEmpty())
		cout<<"Queue is Empty."<<endl;
	else
	{
		cout<<"\nQUEUE ELEMENTS : ";
		for( int loop = front; loop <= rear; ++loop)
			cout<<"\t"<<Q[loop];
        cout<<endl;
    }
}

int main()
{
	queue object;
	queue *ptr = &object;
	int choice;
	do
	{
		cout<<"1 - Enq"<<endl;
		cout<<"2 - Deq"<<endl;
		cout<<"3 - DISPLAY"<<endl;
		cout<<"4 - EXIT"<<endl;

		cout<<"Enter a choice : ";
		cin>>choice;

		switch(choice)
		{
        case 1:
            ptr->enq();
            break;
        case 2:
            ptr->deq();
            break;
        case 3:
            ptr->display();
            break;
        case 4:
            cout<<"Program Ends"<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
		}
    }while( choice != 4 );

return 0;
}