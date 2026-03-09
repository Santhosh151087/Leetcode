class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i = 0;
        int j = i+1;
        int len = nums.size();
        int k = nums.size()-1;
        sort(nums.begin() , nums.end());
        while(i<j && i<k && j<len && i<len && k<len && i>=0 && j>=0 && k>=0){
            int sum = nums[i] + nums[j] +nums[k];
            if(sum == 0){
                if(i!=j && j!=k && k!=i)
                ans.push_back({nums[i] , nums[j] , nums[k]});
                 int cur = nums[j];
                while( j<len && cur==nums[j]){
                    j++;
                }
                 cur = nums[k];
                while(k>=0 && cur==nums[k]){
                    k--;
                }
            }
            else if(sum<0){
                int cur = nums[j];
                while( j<len && cur==nums[j]){
                    j++;
                }
            }
            else if(sum>0){
                int cur = nums[k];
                while(k>=0 && cur==nums[k]){
                    k--;
                }
            }
            if(j>=k){
                int cur = nums[i];
                while(i<len && cur==nums[i]){
                    i++;
                }
                j = i+1;
                k = len -1 ;
            }
           
        }
        return ans;
    }
};
