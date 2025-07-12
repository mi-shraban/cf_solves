/*
Problem Link: https://codeforces.com/problemset/problem/22/A
Solve Link: https://codeforces.com/contest/22/submission/131307185
 */

 #include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n, x=0, flag=0;
	cin>>n;

	int a[n];

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0; i<n; i++)
	{
		if(a[i]>a[0])
		{
			x=a[i];
			flag++;
			break;
		}
	}
	if(n==1 or flag==0)
		cout<<"NO\n";
	else
		cout<<x<<endl;
}

int main()
{
	fastio
	
	int t=1;
	//cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}