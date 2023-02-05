  // author "Manar Bahy"

#include <bits/stdc++.h>

using namespace std;
 
 int main()
{  
          	ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
        	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
    int n;  cin >> n;
    string prev, curr = "";
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        prev = curr;
        cin >> curr;
        if(prev != curr) {
            cnt++;
        }
    }
    cout << cnt ;
 
     
      return 0; 
}