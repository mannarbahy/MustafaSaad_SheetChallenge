// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
  int n,counter=0,j,i;     cin>>n;
  int arr[n],num[n];
  
  for(int i =0 ;i<n;i++)
  {
    	cin>>arr[i];
		cin>>num[i];
  }
  
   for(i=0; i< n; i++)
    {
        
        for(j=0; j < n; j++)
        {
		
            if(arr[i]==num[j])
            {
                counter++;
            }
        }
    }
    cout<<counter;

      return 0; 
}