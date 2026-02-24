#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right] != 0){
                nums[left] = nums[right];
                left++;
            }
        }
        while(nums.size()-left > 0){
            nums[left] = 0;
            left++;
        }
    }
};
int main(){
   vector <int> nums = {0, 1, 0, 3, 12};
    Solution sl;
   sl.moveZeroes(nums);
   for(int i = 0; i < nums.size(); i++){
       cout << nums[i] << " ";
   }
   return 0;
}