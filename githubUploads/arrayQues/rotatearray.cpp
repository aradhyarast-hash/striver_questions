#include <iostream>
using namespace std;

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    int result[numsSize];
    int pointer = numsSize-k;
    for(int a = 0, i = pointer; a < k && i < numsSize; a++, i++){
        result[a] = nums[i];
    }
    for(int a = k, i = 0; i < pointer && a < numsSize; a++, i++){
        result[a] = nums[i];
    }
    for(int i = 0; i < numsSize; i++){
        nums[i] = result[i];
    }
}
int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int size = sizeof(array)/sizeof(array[0]);
    rotate(array, size, k);
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
   return 0;
}