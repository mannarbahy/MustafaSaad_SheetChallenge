// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
            int a , b; cin>>a>>b;
     // ll a = 0 , d = 0;
    ll cnt=0;
	 do{
	   cnt++;
	   a*=3 , b *=2;
	   
	 }while (a<=b);
	  
    cout<<cnt;
 
 
     
      return 0; 
}