#include<iostream>
using namespace std;
int CalAge(int);
int main()
{
	int year;

	for(int i=1;i<=3;i++)
	{
		cout<<"Enter Year "<<i<<" : ";
		cin>>year;
		
		int age=CalAge(year);
		cout<<"Age "<<i<<" : "<<age<<endl; 
	}

	cout<<endl<<"Thank you"<<endl;

	return 0;
}
int CalAge(int year)
{
	int age=0;

	age=2563-year;

	return(age);
}