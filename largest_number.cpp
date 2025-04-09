#include<iostream>
#include<stdlib.h>
using namespace std;
class largest_number
{
	private:
			int n,i,big;
			int a[];
	public:
			//void input()
			//void biggest()
			largest_number(int a[], int n)
			{
				for(i=0;i<n;i++)
				{
					if	(a[i]>big)	
					{
						big=a[i];
					}
				}
			}
			//void display()
			largest_number(int a[])
			{
				cout<<"BIGGEST IS: "<<big;
			}			
};
int main()
{	
	//largest_number r;
	//r.input();
	//r.biggest();
	//r.display();em("cls");
	int n,i;
	cout<<"ENTER THE LENGTH OF ARRAY IN WHICH YOU WANT TO STORE:"<<endl;
		
				cin>>n;
				int a[n];
				cout<<"PLEASE ENTER THE VALUES OF ARRAY:"<<endl;
				for(i=0;i<n;i++)
				{
					cin>>a[i];
					
				}
	largest_number(a,n);
	largest_number(a);
}