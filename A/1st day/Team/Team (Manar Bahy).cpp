// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
      
  int n;  cin>>n;
  	 ll cnt =0;
  while (n--){
  	
  
   vector<int > a(3);
   for(int i = 0 ; i< 3 ; i++)
   {
   	cin>>a[i];
   }
  if(count(all(a), 1) <= 1) continue;
   cnt++;
  	
  }
    cout<<cnt;
 
 
 
     
      return 0; 
}