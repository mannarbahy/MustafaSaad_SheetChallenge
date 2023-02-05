// author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
  
  	string  w;	cin>>w;

	ll a = 0, b = 0;
	for(int i = 0; i < w.size(); i++)
	{
		if(w[i] > 90)		a++;
		else	b++;
		
	}
	if(b > a)
	{
		for(int i = 0; i < w.size(); i++)
			if(w[i] > 90)
				w[i] -= 32;
	}
	else
	{
		for(int i = 0; i < w.size(); i++)
			if(w[i] <= 90)
				w[i] += 32;
	}
     cout<<w;
      return 0; 
}