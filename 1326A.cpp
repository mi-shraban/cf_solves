/*
Problem Link: https://codeforces.com/problemset/problem/1326/A
Solve Link: https://codeforces.com/contest/1326/submission/118284088
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	if(n==1)
	{
		cout<<"-1\n";
		return;
	}
	cout<<"2";
	
	for(int i= 0; i<n-1; i++)
        cout << "3";
    cout << "\n";	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}