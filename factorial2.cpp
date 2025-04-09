#include<iostream>
using namespace std;
class factorial
{
	int n,f=1,i;
	public:
		void input()
		{
			cout<<"ENTER A NUMBER TO SEE ITS FACTORIAL NUMBER : ";
			cin>>n;
		}
		int facto()
		{
			for(i=1;i<=n;i++)
			{
				f*=i;
			}
		}
		void display()
		{
			cout<<"THE FACTORIAL OF "<<n<<" IS : "<<f;
		}
};
int main()
{
	factorial r;
	r.input();
	r.facto();
	r.display();
}
