class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        int left = 0, right = nums.size()-1;
        map<int, vector<int> > indices; //map that stores indices of all elements
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            indices[*it].push_back(left++);
        } 
        sort(nums.begin(), nums.end()); //sort vector
        left = 0;
        while (left < right) { //two pointers method
            int currentSum = nums[left] + nums[right];

            if (currentSum == target) {
                if (nums[left] != nums[right]) {
                    result[0] = indices[nums[left]][0];
                    result[1] = indices[nums[right]][0];
                } 
                else {
                    result[0] = indices[nums[left]][0];
                    result[1] = indices[nums[left]][1];
            }
                return result;
            } 
            else if (currentSum < target) left++; 
            else right--; 
        }

        return nums; //total complexity O(nlogn)
    }
};