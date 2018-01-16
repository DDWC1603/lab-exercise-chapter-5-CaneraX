#include<iostream>
using namespace std;
double avg(double x,double y);
int main()
{
	double x=0.0;
	double y=0.0;
     
	cout<<"Enter first number"<<endl;
	cin>>x;
	cout<<"Enter second number"<<endl;
	cin>>y;
       cout<<avg(x,y);
     return 0;
}

double avg(double x,double y)
{
	double result;
    result=(x+y)/2;
	}
}
