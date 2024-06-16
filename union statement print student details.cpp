#include<iostream>
using namespace std;
union stu
{
	int roll;
	char name[120];
	float marks;
};
int main()
{
union stu s;
{
	cout<<"enter roll number:";
	cin>>s.roll;
	cout<<s.roll<<endl;
	cout<<"enter name number:";
	cin>>s.name;
	cout<<s.name<<endl;
	cout<<"enter marks:";
	cin>>s.marks;
	cout<<s.marks<<endl;
}
	return 0;
}
