#include<iostream>
#include<string>
using namespace std;
void main()
{
	cout<<"********************Homework********************\n";
	string name ;
	int salary , sale , com_percent , total ;

	cout<<"Enter Name \t\t: ";
	cin>>name;
	cout<<"Enter Salary \t\t: ";
	cin>>salary;
	cout<<"Enter Sale \t\t: ";
	cin>>sale;
	cout<<"Commission Percent \t: ";
	cin>>com_percent;

	cout<<"------------------------------------------------\n";
	cout<<"Your name = "<<name<<endl;

	total = salary + (sale*com_percent/100);
	cout<<"Total Revenue "<<total<<" Bath\n";
	cout<<"------------------------------------------------\n";

}