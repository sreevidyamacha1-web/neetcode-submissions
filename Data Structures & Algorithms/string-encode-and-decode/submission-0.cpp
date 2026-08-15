class Solution {
public:

    string encode(vector<string>& strs) {
        string ans ="";
        for(string s: strs){
            ans += to_string(s.length())+ '#' + s;
            
        }
        return ans;
    }
        
    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i < s.length()){
            string length="";
        
      while(s[i]!='#'){
        length += s[i];
        i++;
      }  
        
      int len= stoi(length);
      i++;
      string word=s.substr(i,len);
      ans.push_back(word);
      i += len;

    }
    return ans;
}

};