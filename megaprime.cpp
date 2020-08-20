#include<bits/stdc++.h>

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
	int first,last;
	cout<<"first   :";
	cin>>first;
	cout<<"last    :";
	cin>>last;
	vector<int> prime;
	vector<int> mega;
	for(int i=first;i<last;i++)
	{
		if(isprime(i))
		{	
			prime.push_back(i);
		}
	}
	cout<<"prime    :";
	for(int i=0;i<prime.size();i++)
	{
		cout<<prime[i]<<" ";
	}
	int ele;
	int store;
	for(int i=0;i<prime.size();i++)
	{	
		store = prime[i];
		int flag;
		while(prime[i])
		{
			flag=0;
			ele=  prime[i] %10;
			if(ele==2 || ele==3 ||ele==5 || ele==7){
				flag=1;
			}else{
				flag=0;
				break;
			}
			prime[i]/=10;
		}
		if(flag)
		{
			mega.push_back(store);
		}
	}
	cout<<endl;
	cout<<"mega    :";
	for(int i=0;i<mega.size();i++)
	{
		cout<<mega[i]<<" ";
	}
	int sum =0;
	cout<<endl;
	for(int i=0;i<mega.size();i++)
	{
		sum += mega[i];
	}
	cout<<"sum    :"<<sum<<endl;
	
		return 0;
}
