/*
Problem Link: https://codeforces.com/problemset/problem/1680/A
Solve Link: https://codeforces.com/contest/1680/submission/157320492
*/

#include<bits/stdc++.h>
 
#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
 
using namespace std;
 
void solve()
{
	int l1, r1, l2, r2;
	cin>>l1>>r1>>l2>>r2;
 
	int ans = 0;
 
	if(l2 >= l1 and l2 <= r1)
		ans = l2;
	else if(l1 >= l2 and l1 <= r2)
		ans = l1;
	else
		ans = l1+l2;
 
	cout<<ans<<endl;
}
 
int main()
{
	int t=1;
	cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}