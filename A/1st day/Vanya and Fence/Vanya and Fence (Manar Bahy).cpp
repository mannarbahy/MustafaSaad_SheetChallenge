// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
        int n , h ; cin>>n>>h;
    int a[n];
    ll cnt =0;
    
    for(int i = 0 ; i < n ; i++){
    	
    	cin>>a[i];
    	if(a[i] < h)  cnt++;
    	else if(a[i]== h) cnt++;
    	else cnt+=2;
    	
	}
    cout<<cnt;
 
 
     
      return 0; 
}