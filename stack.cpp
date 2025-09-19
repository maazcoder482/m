#include <iostream>
using namespace std;
#define MAX 7
int stack[MAX];
int tos=-1;
void push()
{
	int data;
	if(tos==MAX-1)
	{
		cout<<"Stack is overflowed"<<endl;		
	}
	else
	{
		cout<<"Enter the elements"<<endl;
		cin>>data;
		tos++;
		stack[tos]=data;
	}
	cout<<endl;
}
void pop()
{
	if(tos==-1)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		cout<<stack[tos];
		tos--;
	}
	cout<<endl;
		
}
void display()
{
	if(tos>=0)
	{
		cout<<endl;
		cout<<"The elements are"<<endl;
		cout<<endl;
		for(int i=tos;i>=0;i--)
		{
			cout<<stack[i]<<" ";
		}
	}
	else
	{
		cout<<"no element is entered"<<endl;
	}
	cout<<endl;
}
void count()
{
	int a;
	a=tos+1;
	cout<<"The total elements are"<<" "<<a;
	cout<<endl;
}
void peak()
{
	int p;
	p=stack[tos];
	cout<<"The peak element is"<<" "<<p;
	cout<<endl;
}
int main()
{
	int ch;
	cout<<"1 push the elements"<<endl;
	cout<<"2 pop the elements"<<endl;
	cout<<"3 display the elements"<<endl;
	cout<<"4 count the elements"<<endl;
	cout<<"5 peak element"<<endl;
	cout<<"6 exit the programe"<<endl;
	
	while(1)
	{
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: count();
			break;
			case 5: peak();
			break;
			case 6: exit(1);
			break;
			default:
				cout<<"invalid choice"<<endl;
		}		
		
	}
}















