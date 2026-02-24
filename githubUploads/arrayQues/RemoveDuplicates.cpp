#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0, right, n = nums.size();
        for(left = 0; left < nums.size(); left++){
            right = left+1;
            while(right < n){
                if(nums[left] == nums[right]){
                    nums.erase(nums.begin() + right);
                }
                else right++;
                n = nums.size();
            }
        }
        return n;
    }
};
int main(){
   vector<int> arr = {1, 1, 2};   
    Solution sol;
    cout << sol.removeDuplicates(arr) << endl;
   return 0;
}