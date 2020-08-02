#include<iostream>
using namespace std;
void cal_quizz(float,float,float,float,float);
int main()
{
	float q1,q2,q3,midterm,final;
	cout<<"=============QUIZZES=============\n";
	cout<<"Enter first quizz  (10) : ";
	cin>>q1;
	cout<<"Enter second quizz (10) : ";
	cin>>q2;
	cout<<"Enter third quizz  (10) : ";
	cin>>q3;
	cout<<"============MID-TERM=============\n";
	cout<<"Enter mid term (40) : ";
	cin>>midterm;
	cout<<"==============FINAL==============\n";
	cout<<"Enter final (50) : ";
	cin>>final;
	cout<<"=================================\n";
	cal_quizz(q1,q2,q3,midterm,final);
	return 0;
}
void cal_quizz(float q1,float q2,float q3,float midterm,float final)
{
	float q_total;
	float total;
	q_total = (q1+q2+q3)/3;
	cout<<"Quizz Total : "<<q_total<<endl;
	cout<<"Mid term : "<<midterm<<endl;
	cout<<"Final : "<<final<<endl;
	total = q_total+midterm+final;
	cout<<"Total : "<<total<<endl;
	cout<<"Your score is "<<(total>=60?"PASS":"NOT PASS")<<endl;
}
