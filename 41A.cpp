/*
Problem Link: https://codeforces.com/problemset/problem/41/A
Solve Link: https://codeforces.com/contest/41/submission/112360724
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	string S,S1;
	cin>>S>>S1;
	reverse(S.begin(), S.end());
	if(S1==S)
		cout<<"YES";
	else cout<<"NO"<<endl;
	return 0;
}