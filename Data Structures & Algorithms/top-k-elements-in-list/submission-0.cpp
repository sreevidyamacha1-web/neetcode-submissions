class Solution {
public:
static bool comparision(pair<int,int>a, pair<int,int>b)
         {
            return a.second>b.second ;
         }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int num:nums){
            umap[num]++;
        }
        vector <pair<int,int> >freq;
        for(auto &entry:umap){
            freq.push_back({entry.first,entry.second});
        }        
          
     sort(freq.begin(),freq.end(),comparision);
        vector <int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};
