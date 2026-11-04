class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numbers(nums.begin(),nums.end());
        int maxLength=0;
        for(int num:numbers){
            if(numbers.count(num-1) == 0){
                int currentNum=num;
                int length=1;
        while(numbers.count(currentNum+1)==1){
            currentNum=currentNum+1;
            length++;
        }
         maxLength= max (maxLength,length);
            }
        }
        return maxLength;
    }
};
