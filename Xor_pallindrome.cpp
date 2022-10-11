#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    string str2;
	    cin>>str;
	    
	    str2=str;
	   reverse(str.begin(),str.end());
	   int c=0;
	   for(int i=0;i<n/2;i++)
	   {
	       if(str[i]!=str2[i])
	          c++;
	   }
	   cout<<(c+1)/2<<endl;
	}
	return 0;
}
