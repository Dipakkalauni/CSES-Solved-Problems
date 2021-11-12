#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int t;
 cin >> t;
 
 while(t--){

     long long y, x;

      cin >> y >> x;
 
       long long num = 0;   

      if(x<=y){

          if(y%2==0){

             num = (y*y)-(x-1);
 
          }else{

              num = ((y-1)*(y-1))+1 + (x-1);

          }
         }else{

          if(x%2==0){

              num = (x*x) - (x-1) - (x-y);

          }else{

              num = ((x-1)*(x-1))+ 1 + (x-1) + (x-y);

          }
      }
 
      cout << num << endl;
 }
 
}