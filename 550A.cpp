/*
Problem Link: https://codeforces.com/problemset/problem/550/A
Solve Link: https://codeforces.com/contest/550/submission/189815624
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	string s;
	cin >> s;
	string ans = "YES";
	    
	int f1 = s.find("AB");
	int f2 = s.find("BA", f1+2);
	if (f2 == -1)
		f2 = s.find("BA");
	
	int diff = abs(f1-f2);
	if (diff < 2)
		f1 = s.find("AB", f2+2);
	
	diff = abs(f1-f2);
	
	if((f1 == -1 or f2 == -1) or diff < 2)
		ans = "NO";
	
	cout<<ans<<endl;
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