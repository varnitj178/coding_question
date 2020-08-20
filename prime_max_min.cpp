#include<iostream>
#include<climits>

using namespace std;


bool isprime(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a[] = {44,87,3,12,2,5,8,10,11,97};
	int len = sizeof(a)/sizeof(a[0]);
	cout<<"LENGTH:"<<len<<endl;
	int min = INT_MAX;
	int max = INT_MIN;
	
	for(int i=0;i<len;i++)
	{
		if(isprime(a[i]))
		{
			if(min>a[i])
			{
				min=a[i];
			}
			if(max<a[i])
			{
				max= a[i];
			}
		}
	}
	if(min==INT_MAX){
		min =-1;
	}
	if(max==INT_MIN)
	{
		max=-1;
	}
	cout<<"MIN   :" <<min<<endl;
	cout<<"MAX:  :"<<max<<endl;
	return 0;
}
