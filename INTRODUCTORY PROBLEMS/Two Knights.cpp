#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 long long t;

  cin >> t;
  
  for(long long n = 1; n<=t; n++){

  long long ans = ((n*n)*(n*n -1))/2 - 4*(n-1)*(n-2);
 
    cout << ans << endl;
  }
 
}