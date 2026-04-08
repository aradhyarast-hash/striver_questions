#include <iostream>
#include <climits>         //header file for using extreme limits of the number system like INT_MAX & INT_MIN....

using namespace std;

int leastSubarraySumK(int arr[], int sz, int k){
   int start = 0, end = 0, sum = 0, minlength = INT_MAX;
   while(end >= start && end < sz){
      sum += arr[end];
      while(sum >= k){
         minlength= min(minlength, end-start+1);
         sum -= arr[start];
         start++;
      }
      end++;
   }
   return minlength;
}
int main(){
   
   int array[] = {1, 2, 3, 4, 5};
   int k = 9;
   int sz = sizeof(array)/sizeof(array[0]);
   cout << leastSubarraySumK(array, sz, k) << endl;
   return 0;
}