/*
#include<iostream>
using namespace std;
class summation
{
	private:
		int a,b,sum;
	public:
		void input()
		{
			cout<<"ENTER THE FIRST NUMBER : ";
			cin>>a;
			cout<<"ENTER THE SECOND NUMBER : ";
			cin>>b;
		}
		int add()
		{
			sum=a+b;
		}
		void display()
		{
			cout<<"THE SUMMATION BETWEEN"<<a<<" & "<<b<<" IS : "<<sum;
		}
};
int main()
{
	summation s;
	s.input();
	s.add();
	s.display();
}



