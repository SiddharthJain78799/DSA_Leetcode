class Solution {
public:
    int search(vector<int>& nums, int t) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        while(low <= high)
        {
            
            int mid = (low + high)/2;
            if(nums[mid] == t) return mid;
            // Check for left sorted
            if(nums[low] <= nums[mid])
            {
                if(nums[low] <= t  && t < nums[mid])
                {
                    high = mid -1; 
                }
                else
                {
                    low = mid + 1;
                }
            }

            // Check for Right sorted
            else
            {
                if(nums[mid] < t && t <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            
        }
        return -1;
    }
};
