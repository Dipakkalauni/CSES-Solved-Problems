#include <bits/stdc++.h> 
using namespace std;
 
 
int main() {
  
  string s;
  cin >> s;
 
    int arr[26] = {0};
    int n = s.size();
 
   for(int i=0; i<n; i++){

         arr[s[i]-'A']++;

   }

         int flag = 0;
 
         string ans = "";
           
         int idx = -1;

       for(int i=0; i<26; i++){
 
        if(arr[i]>0 && arr[i]%2 != 0 && flag == 0){

            flag++;
            idx = i;

        }else if(arr[i]>0 && arr[i]%2!=0 && flag >0){

           cout << "NO SOLUTION" << endl;
           
           return 0;
        }
   }
  
   for(int i=0; i<26; i++){

      if(arr[i]>0 && i != idx){

          int rem = arr[i]/2;

          while(rem--){

             ans += char(i+'A');

          }
      }
   
   }
 
    if(idx != -1){

       int rem = arr[idx];

       while(rem--){

       ans += char(idx+'A');

       }
    }
 
   for(int i=25; i>=0; i--){

      if(arr[i]>0 && i!=idx){

         int rem = arr[i]/2;

         while(rem--){

            ans += char(i+'A');
            
         }
      }
   }
 
 
   cout << ans << endl;
   
}