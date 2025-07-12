/*
Problem Link: https://codeforces.com/problemset/problem/99/A
Solve Link: https://codeforces.com/contest/99/submission/114711619
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	size_t n= s.find('.');
	
	if(s[n-1]=='9')
	{
		cout<<"GOTO Vasilisa.";
	}
		
	else
	{
		if(s[n+1]>='5')
		{
			s[n-1]+=1;
		}
		s.erase(s.begin()+n , s.end());		
			cout<<s<<endl;
	}
	
	return 0;
}