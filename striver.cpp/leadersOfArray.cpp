#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> leaders(vector<int> &arr){
    vector<int> answer;
    int max = arr[arr.size()-1];
    answer.push_back(max);
    for(int i =  arr.size()-2; i >= 0; i--){
        if(arr[i] > max){
            max = arr[i];
            answer.push_back(max);
        }
    }
    reverse(answer.begin(), answer.end());
    return answer;
}


int main(){
    vector<int> array = {16, 17, 10, 3, 5, 2};
    vector<int> ans = leaders(array);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

   return 0;
}