class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer(nums.size(),1);
        int leftProduct=1;
        for(int i=0;i<nums.size();i++){
        answer[i] *=leftProduct;
        leftProduct *=nums[i];
        }
        int rightProduct=1;
        for(int i=nums.size()-1;i>=0;i--){
            answer[i] *=rightProduct;
            rightProduct*=nums[i];
        }
        return answer;
    }
};
