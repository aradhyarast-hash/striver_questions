#include <iostream>
#include <climits>
#include <vector>
using namespace std;


int main(){
    vector<int> arr = {3, 1, 4, 2, 5,6,7,8,9,10};
    int smallest = INT_MAX, second_smallest = INT_MAX, largest = INT_MIN, second_largest = INT_MIN;
    for(int i=0; i < arr.size(); i++){
        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] != smallest){
            second_smallest =  arr[i];
        }

        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i] < largest){
            second_largest = arr[i];
        }
   }
   cout << "the second smallest element is: " << second_smallest << endl;
   cout << "the second largest element is: " << second_largest << endl;

   return 0;
}