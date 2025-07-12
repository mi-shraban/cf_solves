/*
Problem Link: https://codeforces.com/problemset/problem/1093/B
Solve Link: https://codeforces.com/contest/1093/submission/115191866
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
	short int t;
	cin>>t;
	
	string s; 
	set<char> s1;
	
	while(t--)
	{
		cin>>s;
		
		sort(s.begin(), s.end());
		s1.clear();
		
		for(int i=0; i<s.size(); i++)
			s1.insert(s[i]);
			
		if(s1.size()==1)
			cout<<"-1"<<endl;
		
		else
			cout<<s<<endl;
	}
	return 0;
}