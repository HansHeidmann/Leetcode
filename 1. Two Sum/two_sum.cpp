#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i=0; i<nums.size(); i++) {
            hashmap[nums[i]] = i; 
        }
        for (int i=0; i<nums.size(); i++) {
            int difference = target-nums[i];
            if (hashmap.find(difference) != hashmap.end()) {
                if (hashmap[difference] != i) {
                    return {hashmap[difference], i};
                }
            }
        }
        return {};
    }
};