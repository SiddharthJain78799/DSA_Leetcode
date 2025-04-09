class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;

        // 1st window
        for(int i=0;i<k;i++){
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        // from now on we will keep anaylzing our next windows
        for(int i=k;i<nums.size();i++){
            // before starting new window we are pushing front element of our previous window 
            ans.push_back(nums[dq.front()]);

            // removing elements which are not part of current window  
            while(dq.size()>0 && dq.front()<=i-k){
                dq.pop_front();
            }

            // remove the smaller values
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);

        return ans;
    }
};
