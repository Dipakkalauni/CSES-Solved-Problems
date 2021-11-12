#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n;
 cin >> n;
 
 if(n==2 || n==3){

   cout << "NO SOLUTION" << endl;

 }else if(n==4){

   cout << "3 1 4 2" << endl;

 }else if(n==1){

       cout << 1 << endl;

 } else{
 
       int i=2;

      while(i--){

           int j = n;

          while(j>0){

             cout << j << " ";

              j = j-2;
          }

          n--;
      }
  }
 
}