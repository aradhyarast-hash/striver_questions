#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

//union of two sorted arrays.
void unionArrays(int arr1[], int arr2[], int n, int m, vector<int> &unionvector){
    unordered_map <int,int> mp;

    for(int a = 0; a < n; a++){
        mp[arr1[a]]++;
    }
    for(int b = 0; b < m; b++){
        mp[arr2[b]]++;
    }

    int index = 0;
    for(auto &i: mp){
        unionvector.push_back(i.first);
    }
    sort(unionvector.begin(),unionvector.end());
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int sz1 = sizeof(arr1)/sizeof(arr1[0]);
    int sz2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> unionvector;

    unionArrays(arr1, arr2, sz1, sz2, unionvector);
    
    cout << "Union of the two arrays is: ";
    for(int i = 0; i < unionvector.size(); i++){
        cout << unionvector[i] << " ";
    }
   return 0;
}