// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
       // 	  ll t=1;
//	   cin>>t;
	//      while(t--)
//{
      string a,b,A="",B="";    cin>>a>>b;
      
       ll cnt=0;
   for(int i = 0 ; i < a.size();i++)
  {
	if(a[i]>=97)   a[i]-=32;
   
    if(b[i]>=97)   b[i]-=32;
 
 
    if(a[i]>b[i])
   {
	cnt=1;
    break;
   }
  else if(a[i]<b[i])
   {
	cnt=-1;
    break;
   }
   }
   cout<<cnt<<"\n";
 
 
//}
     
      return 0; 
}