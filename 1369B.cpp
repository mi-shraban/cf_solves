/*
Problem Link: https://codeforces.com/problemset/problem/1369/B
Solve Link: https://codeforces.com/contest/1369/submission/115052080
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    short int t;
    cin>>t;
    
    while(t--)
    {
        int n, zero=0, one=0;
        cin>>n;
        
        string s;
        cin>>s;
        
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                zero++;
            else
                break;
        }
        
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='1')
                one++;
            else
                break;
        }
        
        if(one+zero==n)
            cout<<s<<"\n";
        else
        {
            string s1="";
            for(int i=0; i<zero; i++)
                s1+=(char)('0');
            
            s1+=(char)('0');
            
            for(int i=0; i<one; i++)
                s1+=(char)('1');

            cout<<s1<<"\n";
        }
    }
    
    return 0;
}