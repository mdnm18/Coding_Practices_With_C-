#include<iostream>
using namespace std;
class average
{
	int n,sum=0,i,count=1;
	float avg;
	int a[];
	public:
		void input()
		{
			cout<<"ENTER THE NUMBER OF DIGITS FOR DETERMINE IT'S AVERAGE : ";
			cin>>n;
			
		}
		void store()
		{
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void summation()
		{
			while(count<=n)
			{
				sum=sum+a[count];
				count++;
			}
		}
		void aver()
		{
			avg=float(sum)/float(n);
		}
		void display()
		{
			cout<<"AVERAGE OF IS : "<<avg;
		}
};
int main()
{
	average a;
	a.input();
	a.store();
	a.summation();
	a.aver();
	a.display();
}