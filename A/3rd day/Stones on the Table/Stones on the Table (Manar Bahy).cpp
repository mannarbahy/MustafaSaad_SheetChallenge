// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
        int n; cin>>n;
     	string  s;		cin>>s;
 
	    long long cnt= 0;	
	for (int i = 0 ; i < n ; i++ )
    {
 
		if (s[i]==s[i+1]) cnt++;
	}
	
	cout<<cnt;

      return 0; 
}