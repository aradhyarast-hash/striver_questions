#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(), totalbreak = 0;
        
        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i+1]){
               totalbreak++;
            }
        }
        if(nums[n-1] > nums[0] && totalbreak > 0) return false;
        if(totalbreak == 1 || totalbreak == 0){
            return true;
        }
       return false; 
    }
};
int main(){
    //1 for true
    //0 for false
   vector<int> arr = {3, 4, 5, 1, 2};   
    Solution sol;
    cout << sol.check(arr) << endl;
   return 0;
}