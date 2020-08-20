#include<bits/stdc++.h>

using namespace std;

int main()

{
	int n;
	cout<<"enter the size of array   :";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array  : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum;
	cout<<"enter the sum   :";
	cin>>sum;
	set<int> st;
	
	for(int i=0;i<n;i++)
	{
		if(st.find(arr[i])!= st.end())
		{
			cout<<"( "<<sum-arr[i]<<" "<<arr[i]<<" "<<")"<<endl; 
		}else
		{
			st.insert(sum-arr[i]);
		}
	}
	return 0;
}
