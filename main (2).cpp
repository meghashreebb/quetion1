#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--)
	{
	    int b,flag=1;
	    cin>>b;
	    string s[b];
	    for(int i=0;i<b;i++)
	    cin>>s[i];
	    for(int i=0;i<b-1;i++)
	    {
	        if(s[i]==s[i + 1] && s[i]=="cookie" || s[b-1]=="cookie")
	        flag=0;
	        
	    }
	    if(b==1 && s[0]=="cookie")
	    flag=0;
	    if(flag==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}