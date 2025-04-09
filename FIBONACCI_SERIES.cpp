#include<iostream>
using namespace std;
class fibonacci
{
	int n,i,a,b,c;
	public:
		void input()
		{
			cout<<"ENTER THE NUMBER OF ITEMS YOU WANT TO NEED IN YOUR FIBONACCI SERIES :";
			cin>>n;
		}
		void fibo()
		{
			a=0;
			b=1;
			cout<<a<<endl<<b<<endl;
			for(i=2;i<n;i++)
			{
				c=a+b;
				cout<<c<<endl;
				a=b;
				b=c;
			}
		}
};
int main()
{
	fibonacci f;
	f.input();
	f.fibo();
	return 0;
}