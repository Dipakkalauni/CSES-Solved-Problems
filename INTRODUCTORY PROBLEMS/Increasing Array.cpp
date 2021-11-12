#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n;
 cin >> n;
 
  int arr[n];

 for(int i=0; i<n; i++){

     cin >> arr[i];

 }
 
    long long sum = 0;
    int temp = 0;

for(int i=1; i<n; i++){
 
    if(arr[i]<arr[i-1]){
 
          temp = (arr[i-1]*1LL-arr[i]*1LL); 
          sum += temp;
          arr[i] += temp;
 
    }
}
 
    cout << sum << endl;
 
}