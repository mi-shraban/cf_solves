/*
Problem Link: https://codeforces.com/problemset/problem/996/A
Solve Link: https://codeforces.com/contest/996/submission/113542770
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans=0;
	int a[]={1,5,10,20,100};
	
	while(cin>>n)
	{
		
		for(int i=4; i>=0; i--)
		{
			if(n>=a[i])
			{
				ans+=n/a[i];
				
				if(n%a[i]==0)
					break;
				else
					n-=((n/a[i])*a[i]);
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}