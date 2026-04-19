#include <iostream>
#include <vector>
using namespace std;

int missingNo(vector<int> &v){
    int sum = 0, idealsum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    for(int i = 0; i <= v.size(); i++){
        idealsum += i;
    }
    return idealsum-sum;
    
}

int main(){

    vector<int> v = {0,1,2,3,4,5,6,7,8,10};
   cout <<"the number missing is: "<< missingNo(v) << endl;
   return 0;
}