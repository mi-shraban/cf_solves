/*
Problem Link: https://codeforces.com/problemset/problem/144/A
Solve Link: https://codeforces.com/contest/144/submission/124972865
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
    int n;
    cin>>n;
    
    int a[n], mx=0, mn=101;
    int mxP=0, mnP=0;
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        
        if(a[i]>mx)
        {
            mx=a[i];
            mxP=i;            
        }
        if(a[i]<=mn)
        {
            mn=a[i];
            mnP=i;
    	}
	}
	if(mxP>mnP)
		mnP++;
	
	cout<< mxP+(n-1)-mnP<<"\n";
	
    return 0;
}