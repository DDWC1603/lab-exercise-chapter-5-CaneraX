#include<iostream>
using namespace std;
int sum();
int sum(int x,int y)
{
	int result;
	result = x+y;
	cout<<result;
	return x+y;

}

 int main()
 {
 	int x , y;
 	cin>>x;
 	cin>>y;
 	sum(x , y);
 	return 0;
 }
