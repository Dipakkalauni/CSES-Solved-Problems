
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
   string s;
   cin >> s;
     
   int curr = 1;
   int max = 1;

for(int i=1; i<s.size(); i++){

      if(s[i]==s[i-1]){

            curr++;

      }else{

            curr = 1;

      }
 
      if(curr > max){

          max = curr;

      }
}
 
cout << max << endl;
 
}