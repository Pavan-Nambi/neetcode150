class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        for(int i =0 ; i<n-1 ;i++){
            for(int j =i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }

            }
        }
        return {};
    }
};


// we just go through each element in arrya n check if there is anthr elemeent tht when can be added get to target
// o(n^2)- time complexity
