class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int k=0;
            for(int j=0;j<nums.size();j++){
                k+=(nums[j]&1);
                nums[j]>>=1;
            }
            ans+=((k%3)<<i);
        }
        return ans;
    }
};