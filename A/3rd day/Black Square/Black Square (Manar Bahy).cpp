// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
     vector<long long > a(4);
 
	int c = 0;
 
    for(int i = 0 ; i < 4 && cin>>a[i];i++);
	string s;	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
			c += a[0];
		else if (s[i] == '2')
			c += a[1];
		else if (s[i] == '3')
			c += a[2];
		else if(s[i] == '4')
			c += a[3];
	}
	    cout << c;

      return 0; 
}