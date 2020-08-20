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
        vector<int> arr(26,0);
        for(int i=0;i<s1.length();i++)    
        {
            int ele = int(s1[i])-97;
            if(arr[ele]!=1)
				arr[ele]++;
			else
				continue;
        } 
        for(int i=0;i<s2.length();i++)    
        {
            int ele = int(s2[i])-97;
				arr[ele]++;
        } 
        for(int i=0;i<26;i++)
        {
        	cout<<char(i+97)<<"  :"<<arr[i]<<endl;
		}
        for(int i=0;i<26;i++)
        {
            if(arr[i]==1)
            {
                cout<<char(i+97);
            }
        } 
    }
	return 0;
}
