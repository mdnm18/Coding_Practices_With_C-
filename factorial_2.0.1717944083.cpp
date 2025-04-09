#include<iostream>
using namespace std;
class factorial
{
	int n,i,f=1;
	public:
		void input()
		{
			cout<<"ENTER THE NUMBER FOR DETERMINE ITS' FACTORIAL:";
			cin>>n;
		}
		int facto()
		{
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
		}
		void display()
		{
			cout<<"FACTORIAL OF "<<n<<" IS:"<<f;
		}
};
int main()
{
	factorial r;
	r.input();
	r.facto();
	r.display();
}