class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet;
        for (unsigned n : nums) {
            if (hashSet.contains(n)) return true;
            hashSet.insert(n);            
        }
        return false;
    }
};