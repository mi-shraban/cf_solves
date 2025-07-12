/*
Problem Link: https://codeforces.com/problemset/problem/546/A
Solve Link: https://codeforces.com/contest/546/submission/112463567
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,w,i,sum=0,ans;
	cin>>k>>n>>w;
	for(i=1; i<=w; i++)
	{
		sum+=i;
	}
	ans=(sum*k)-n;
	
	if(ans<0) cout<<"0";
	else cout<<ans<<endl;
}