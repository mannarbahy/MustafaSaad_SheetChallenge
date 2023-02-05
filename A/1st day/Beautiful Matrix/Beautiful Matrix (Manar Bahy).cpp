// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
    int res =0;
  for(int i = 0 ; i < 5 ; i++){
  	for(int j = 0 ; j < 5 ; j++){
  		
  		  int cnt;
            cin>>cnt;
            if (cnt==1)
            res=abs(i-2)+abs(j-2);
	  }	
  }
  cout<<res;
 
 
     
      return 0; 
}