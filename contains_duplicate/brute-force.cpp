class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n-1;i++){ //this loop goes n times?
            int c_num=nums[i];
            for(int j=i+1;j<n;j++){ //this loop is--- for outer loop 1 this wud go n-1 n outer loop n-1 this wud go n-2 .. so on so (n-1)*(n-2)*...*1
                if(nums[j]==c_num){// so nw n*(n-1)/2
                    return true;
                }
            }
        }
        return false;

    }
};

// get a copy of each element in the vector and compare it with the original vector to see if there is a duplicate
// time complesity: O(n^2)
// space complexity: O(1) -- no additional data structure is used only loop variables are used so constant space


