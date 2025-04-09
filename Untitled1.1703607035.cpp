#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void getdata (void);
		void display (void);
};
void person :: getdata (void)
{
	cout<<"ENTER YOUR NAME";
	cin>>name;
	cout<<"ENTER YOUR AGE";
	cin>>age;
}
void person :: display (void)
{
	cout<<"\n NAME :"<<name;
	cout<<"\n AGE :"<<age;
}
int main()
{
	person P;
	person getdata();
	person display();
	return 0;
}