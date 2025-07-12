/*
Problem Link: https://codeforces.com/problemset/problem/141/A
Solve Link: https://codeforces.com/contest/141/submission/112806173
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	string H, G, M, A;
	cin>>H>>G>>M;
	A=H+G;
	sort(A.begin(), A.end());
	sort(M.begin(), M.end());
	if(A==M)
		cout<<"YES";
	else cout<<"NO";

	return 0;
}