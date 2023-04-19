class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> arr;
        int max=0,mo;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>max){
                max=arr[nums[i]];
                mo=nums[i];
            }
        }
        return mo;
    }
};