#include <iostream>
using namespace std;


//we would need to use hashmaps here 

int longestSubarraySum0(int arr[], int size){
    int start = 0, end = 0, sum = 0, maxlen = 0;
    while(end >= start && end < size){
        sum += arr[end];
        while(sum > 0){
            sum -= arr[start];
            start++;
        }
        if(sum == 0){
            maxlen = max(maxlen, end-start+1);
        }
        end++;
    }
    return maxlen;
}
int main(){
   int array[] = {9, -3, 3, -1, 6, -5};
   int size = sizeof(array) / sizeof(array[0]);
   cout << longestSubarraySum0(array, size) << endl;
   return 0;
}