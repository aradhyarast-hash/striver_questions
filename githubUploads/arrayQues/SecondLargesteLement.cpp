#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr){
        int largest = INT_MIN, second_largest = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > largest){
                second_largest = largest;
                largest = arr[i];
            }
            else if(arr[i]>second_largest && arr[i] < largest) second_largest = arr[i];
            else second_largest = arr[i];
        }
        return second_largest;
    }
};

int main(){
   vector<int> arr = {1, 2, 3, 4, 5};   
    Solution sol;
    cout << sol.getSecondLargest(arr) << endl;
   return 0;
}