#include<iostream>
#include<stdlib.h>
using namespace std;
class largest_number
{
	private:
			int n,i,big=0;
			int a[];
	public:
			//void input()
			largest_number(int n,int a[])
			{
				cout<<"ENTER THE LENGTH OF ARRAY IN WHICH YOU WANT TO STORE:"<<endl;
				cin>>n;
				cout<<"PLEASE ENTER THE VALUES OF ARRAY:"<<endl;
				for(i=0;i<n;i++)
				{
					cin>>a[i];
				}
			}
			//void biggest()
			largest_number(int i)
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
			largest_number()
			{
				cout<<"THE BIGGEST NUMBER IS:"<<big;	
			}			
};
int main()
{	
	//largest_number r;
	//r.input();
	//r.biggest();
	//r.display();
	largest_number::largest_number(int m,int z[]){m=n, z[]=a[]};
	largest_number::largest_number(int e){e=i};
	largest_number::largest_number(int b){b=big};
	system("cls");
	cout << "The screen has been cleared!"; 
	return 0;	
}