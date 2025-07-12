/*
Problem Link: https://codeforces.com/problemset/problem/363/A
Solve Link: https://codeforces.com/contest/363/submission/113543958
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, s1;
	cin>>s;
	for(int i= s.size()-1; i>=0; i--)
	{
		s1+=s[i];
	}
	
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]=='0') cout<<"O-|-OOOO\n";
		else if(s1[i]=='1') cout<<"O-|O-OOO\n";
		else if(s1[i]=='2') cout<<"O-|OO-OO\n";
		else if(s1[i]=='3') cout<<"O-|OOO-O\n";
		else if(s1[i]=='4') cout<<"O-|OOOO-\n";
		else if(s1[i]=='5') cout<<"-O|-OOOO\n";
		else if(s1[i]=='6') cout<<"-O|O-OOO\n";
		else if(s1[i]=='7') cout<<"-O|OO-OO\n";
		else if(s1[i]=='8') cout<<"-O|OOO-O\n";
		else if(s1[i]=='9') cout<<"-O|OOOO-\n";
	}
	
	return 0;	
}