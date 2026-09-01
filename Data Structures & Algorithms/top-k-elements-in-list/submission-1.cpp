class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int num:nums){
            umap[num]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        

        for(auto &entry:umap){
          bucket[entry.second].push_back(entry.first);
        }
                vector<int>ans;
        for(int i=nums.size();i>=0;i++){
            for(int num: bucket[i]){
                ans.push_back(num);
                     if(nums.size()==k){
                        return ans;
                     }
            }
          return ans;
          }

        
    }
};
