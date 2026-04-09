#include <iostream>
#include <vector>
using namespace std;
// function for the linear searching.
int linearSearch(vector<int> &v, int targetval){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == targetval){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {23,56,1,1,5,8,9,10,3,11,89,45,67,34,12,90,78,56,43,21,34};
    int target;
    cout <<"Enter the target element: ";
    cin >> target;
    cout << linearSearch(vec, target) << endl;
    
    
   return 0;
}