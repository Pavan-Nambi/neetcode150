class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> hashSet;
    for(int num:nums){
        if(hashSet.count(num)>0){
        return true;
    }
    hashSet.insert(num);

    }
    return false;

    }
};

// using hash set
// time complexity: O(n)
// because we are iterating through the vector once, hashset operations like insert and search takes constant time
// space complexity: O(n)
// because we are using a hash set to store the elements in the worst case scenario hash set will store all eelements so O(n) space
