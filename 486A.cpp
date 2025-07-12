/*
Problem Link: https://codeforces.com/problemset/problem/486/A
Solve Link: https://codeforces.com/contest/486/submission/112385421
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,ans1,ans2;
	cin>>n;
	ans1=n/2;
	ans2=((n-1)/2)-n;
	if(n%2==0)
		cout<<ans1;
	else cout<<ans2;
}