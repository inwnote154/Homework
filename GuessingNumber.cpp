#include<iostream>
#include<time.h>
int Guess(int);
using namespace std;
int main()
{   
	cout<<"###Welcome to guessing number game###\n";
	cout<<"Secret number has been chosen\n";
	srand(time(NULL));
	int num=1+rand()%9;
	int Round=Guess(num);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is "<<num<<endl;
	cout<<"You made "<<Round<<" guesses"<<endl;
	system("pause");
	return 0;
}
int Guess(int num)
{
	int Num,round=1;
	do{
		cout<<"Guess the number (1 to 10) : ";
		cin>>Num;
		if(Num<num)
		{
			cout<<"The secret number is lower\n";
		}
		else if(Num>num)
		{
			cout<<"The secret number is higher\n";
		}
		else
			break;
		round+=1;
	}while(Num!=num);
	return(round);
}