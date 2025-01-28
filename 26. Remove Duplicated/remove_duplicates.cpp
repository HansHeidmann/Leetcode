#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; 
        int p = 1; 
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};

/*

for testing 

int main() {
    Solution solution;
    
    vector<int> nums1 = {1, 1, 2};
    int newLength1 = solution.removeDuplicates(nums1);
    cout << "New length: " << newLength1 << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength1; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
*/