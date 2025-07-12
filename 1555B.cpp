/*
Problem Link: https://codeforces.com/problemset/problem/1555/B
Solve Link: https://codeforces.com/contest/1555/submission/125112764
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--)
	{
		int W, H;
		cin>>W>>H;
		int x1, x2, y1, y2;
		cin>>x1>>y1>>x2>>y2;
		int w, h;
		cin>>w>>h;
		
		int xD= (x2-x1)+w;
		int yD= (y2-y1)+h;
		
		if(xD>W and yD>H)
		{
			cout<<"-1\n";
			continue;
		}
		
		int ans= 10e8;
		
		if(xD<=W)
		{
			ans = min(ans, max(0, w-x1));
			ans = min(ans, max(0, x2-(W-w)));
		}
		if(yD<=H)
		{
			ans = min(ans, max(0, h-y1));
			ans = min(ans, max(0, y2-(H-h)));
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}