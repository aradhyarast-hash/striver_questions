#include <iostream>
#include <unordered_map>
using namespace std;

//Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.

int subarraySum0(int arr[], int size){
    //hashmap and prefix sum used
    unordered_map<int, int> mp;
    int sum = 0, maximumlen = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
        if(sum == 0){
            maximumlen = i + 1;
        }
        if(mp.find(sum) != mp.end()){
            maximumlen = max(maximumlen, i-mp[sum]);
        }
        else{
            mp[sum] = i;
        }
    }
    return maximumlen;
}
    
int main(){

    int arr[] = {6,-2,2,-8,1,7,4,-10};
    int arr1[] = {1,2,3,-6,4,5};
    int sz1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << subarraySum0(arr1, sz1) << endl;
    int sz = sizeof(arr)/sizeof(arr[0]);
    cout << subarraySum0(arr, sz) << endl;
   return 0;
}