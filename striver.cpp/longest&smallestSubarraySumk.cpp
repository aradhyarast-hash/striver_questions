#include <iostream>
#include <climits> //header file for using extreme limits of the number system like INT_MAX & INT_MIN....
using namespace std;

// code is only valid for all positive integer containing arrays, if there are negative integers then we have to use hashmap to store the sum and index of the sum and then we can find the longest subarray with sum k in O(n) time complexity and O(n) space complexity,
// but here we are using two pointer approach which is only valid for all positive integer containing arrays and it has O(n) time complexity and O(1) space complexity.
int longestSubarraySumk(int arr[], int sz, int k)
{
    int start = 0, end = 0, sum = 0, maxlen = 0;
    while (end >= start && end < sz)
    {
        sum += arr[end];
        while (sum > k)
        {
            sum -= arr[start];
            start++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, end - start + 1);
        }
        end++;
    }
    return maxlen;
}

int leastSubarraySumK(int arr[], int sz, int k)
{
    int start = 0, end = 0, sum = 0, minlength = INT_MAX;
    while (end >= start && end < sz)
    {
        sum += arr[end];
        while (sum >= k)
        {
            minlength = min(minlength, end - start + 1);
            sum -= arr[start];
            start++;
        }
        end++;
    }
    return minlength;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int k = 3;
    cout << longestSubarraySumk(array, size, k) << endl;
    cout << leastSubarraySumK(array, size, k) << endl;

    return 0;
}