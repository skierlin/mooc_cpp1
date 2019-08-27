#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        while(l < r){
            if(numbers[l] + numbers[r] == target)
                return {l+1,r+1};
            else
                numbers[l] + numbers[r] < target? l++: r--;
        }
        return {0, 0};
    }
};

int main(){
    Solution temp;
    vector<int> nums{2, 7, 11, 15};
    int target = 18;
    vector<int> result;
    result = temp.twoSum(nums,target);
    cout << result.at(0) << " " << result.at(1) << endl;
    return 0;
}
