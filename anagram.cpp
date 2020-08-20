#include<bits/stdc++.h>

using namespace std;

int main()
{
	int test;
	cin>>test;
	
	while(test--)
	{
		string s1,s2;
		cin>>s1>>s2;
		
		vector<int> vec(26,0);
   	 int cnt=0;
    for(int i=0;i<s1.length();i++)
    {
        int ele = int(s1[i])-97;
        vec[ele]++;
    }
    for(int i=0;i<s2.length();i++)
    {
        int ele = int(s2[i])-97;
        vec[ele]++;
    }

    for(int i=0;i<26;i++)
    {
        if(vec[i]==1)
            cnt++;
    }
    for(int i=0;i<26;i++)
    {
        cout<<char(i+97)<<"  :"<<vec[i]<<endl;
    }
    
    cout<<cnt<<endl;
	}
	return 0;
}
