#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        if(arr.size() == 0) return 0;
        int maxnum = arr[0];
        for(int i = 0; i < arr.size(); i++){
            maxnum = max(maxnum, arr[i]);
        }
        return maxnum;
    }
};

int main(){
   vector<int> arr = {1, 2, 3, 4, 5};   
    Solution sol;
    cout << sol.largest(arr) << endl;     
   return 0;
}