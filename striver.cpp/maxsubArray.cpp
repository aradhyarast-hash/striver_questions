#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> maxsubarr;
        int maxsum = INT_MIN;
        int currentsum = 0, start = 0 , end = 0;
        for(int i = 0; i < nums.size(); i++){
            currentsum += nums[i];
            end++;
            maxsum = max(maxsum, currentsum);
            if(currentsum < 0){
                currentsum = 0;
                start = end;
            }
        }
        return maxsum;
    }
};
int main(){
   vector<int> array = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
   cout << sol.maxSubArray(array);
   return 0;
}