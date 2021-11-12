#include <bits/stdc++.h> 
using namespace std;
 
 const long long mod = 1e9+7;
  int main() {
  
   int n;
   cin >> n;
 
   long long ans = 1;
 
   for(int i=1; i<=n; i++){

       ans = (ans % mod * 2 % mod) % mod;
   }
 
   cout << ans % mod << endl;
} 