#include<iostream>
using namespace std;
class summation
{
	int n,x,sum=0,f;
	public :
		void input()
		{
			cout<<"ENTER THE DIGIT FOR ITS' SUMMATION :";
			cin>>n;
			f=n;
		}
		void add()
		{
			while(n!=0)
			{
				x=n%10;
				sum=sum+x;
				n=n/10;
			}
		}
		void display()
		{
			cout<<"THE SUMMATION OF "<<f<<" IS :"<<sum;
		}		
};
int main()
{
	summation s;
	s.input();
	s.add();
	s.display();
}