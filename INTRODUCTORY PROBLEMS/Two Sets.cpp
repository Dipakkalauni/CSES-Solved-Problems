#include <bits/stdc++.h>
using namespace std;
 
int main() {

   long long n;
    cin >> n;
 
   long long sum = (n *(n+1))/2;
 
     unordered_set<long long> s1;
     unordered_set<long long> s2;
 
   if(sum%2==0){
 
       cout << "YES" << endl;
 
         long long req = sum/2;

       for(long long i=n; i>=1; i--){
 
           if(req-i >= 0){
               
                req -= i;
                s1.insert(i);
   
           }else{

               s2.insert(i);
           }
 
       }
 
      
 
       cout << s1.size() << endl;
 
        for(auto ele : s1){

            cout << ele << " ";
        }
 
        cout << endl;
 
        cout << s2.size() << endl;
        
        for(auto ele: s2){

            cout << ele << " ";

        }
 
   }else{

       cout << "NO" << endl;

   }
}