// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
         string s;  cin>>s ;
    ll cnt=0;
   sort(s.begin(),s.end());
   for(int i = 0 ; i < s.size() ; i++){
    	if(s[i]==s[i-1])
		{
			continue;
		}
	
          cnt++;
	}
   if(cnt % 2==0) cout<<"CHAT WITH HER!";
   else  cout<<"IGNORE HIM!";
 
 
     
      return 0; 
}