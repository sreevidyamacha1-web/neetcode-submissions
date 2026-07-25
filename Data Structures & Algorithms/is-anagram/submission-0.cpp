class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!= t.length()) {
            return false;
        }
        int FreqS[26]={0};
        int FreqT[26]={0};

        for(int i=0 ;i<s.length();i++){
            FreqS[s[i]-'a']++;
            FreqT[t[i]-'a']++;
        }
        for(int i=0; i<26;i++){
            if(FreqS[i]!=FreqT[i]){
                return false;
            }
        }
         return true;
        
    }
};
