#include<iostream>
using namespace std;
class Calculate
{
	int a,b,c,d;
	public :
		void sum();
	{
		c=a+b
		cout<<c
	}
		void multiply(); //expand this please    
} o;
int main()
{
	int ch;
	cout<<"Enter the choice u want to do \n1) SUM\n2) MULTIPLY;
	cin>>ch;
	switch(ch)
	{
		case 1: sum();
			break;

		case 2: multiply();
			break;

		default : cout<<"wrong choice";
	}
	return 0;
}
