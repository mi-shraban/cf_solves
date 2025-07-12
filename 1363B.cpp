/*
Problem Link: https://codeforces.com/problemset/problem/1363/B
Solve Link: https://codeforces.com/contest/1363/submission/124001796
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		
		int n=s.size();
		
		int one=0, zero=0;
		
		for(int i=0; i<n; i++)
		{
			if(s[i]=='1')
				one++;
			else
				zero++;
		}
		
		int ans=min(one, zero);
		
		int cnt1=0, cnt0=0;
		
		for(int i=0; i<n; i++)
		{
			if(s[i]=='1')
				cnt1++;
			else
				cnt0++;
			
			ans=min(ans, zero+cnt1-cnt0);
			ans=min(ans, one+cnt0-cnt1);
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}