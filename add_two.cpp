#include<iostream>
using namespace std;
class addition
{
	private :
		int a;
		int b;
	public :
		int add(int a,int b)
		{
			int c;
			c=a+b;
			return c;
		}		
};
int main()
{
	int x,y,z;
	cout<<"ENTER THE 1ST NUMBER :";
	cin>>x;
	cout<<"ENTER THE 2ND NUMBER :";
	cin>>y;
	addition t;
	z=t.add(x,y);
	cout<<"ADDITION BETWEEN GIVEN TWO NUMBERS :"<<z;
}