class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

int n = nums.size();
unordered_map<int,int> hashMap;
for(int i=0;i<n;i++){
    int x = target - nums[i];
    if(hashMap.count(x)){
        return {hashMap[x],i};
    }
    hashMap[nums[i]] = i;
}
return {};
    }
};


// using hashmap , we itreate throughr array here we check if the target - current element is present in hashmap(takes o(1) time)
// if it is present we return the index of the current element and the index of the element in the hashmap
// if it is not present we add the current element to the hashmap
// time complexity: O(n) because we are iterating through the array only once

