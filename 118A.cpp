/*
Problem Link: https://codeforces.com/problemset/problem/118/A
Solve Link: https://codeforces.com/contest/118/submission/109679013
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,sv;
	cin>>s;
	int x=s.length();
	for(int i=0;i<x;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='y'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='Y'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			continue;
		}
		else{
			sv+='.';
			sv+=towlower(s[i]);
		}
	}
	cout<<sv<<endl;
}