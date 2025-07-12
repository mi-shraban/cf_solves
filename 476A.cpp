/*
Problem Link: https://codeforces.com/problemset/problem/476/A
Solve Link: https://codeforces.com/contest/476/submission/117306679
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, ans;
	
	while(cin>>n>>m)
	{
		if(m>n)
			ans=-1;
		else
		{
			if(n%2==0)
				ans=n/2;
			else
				ans=(n/2)+1;
				
			while(ans%m!=0)
				ans++;
		}
		
		cout<<ans;
	}
	
	return 0;
}