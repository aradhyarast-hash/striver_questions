#include <iostream>
using namespace std;


class findxor {

private:

    int xorcalcbackend(int num){
        if(num % 4 == 1) return 1;
        if(num % 4 == 2) return num + 1;
        if(num % 4 == 3) return 0;
        return num;
    }

public:
    int xorcalc(int left, int right){
        return xorcalcbackend(right) ^ xorcalcbackend(left-1);
    }
};
int main(){
    findxor solution;
    int l = 3, r = 5;
    int ans = solution.xorcalc(l, r);
    cout << "the xor of all the numbers in the range is " << ans;
    return 0;

}