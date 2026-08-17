class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         string res;
         int n=max(word1.size(),word2.size());
         for(int i=0;i<n;i++){
            if(word1.size()>i) res.push_back(word1[i]);
            if(word2.size()>i) res.push_back(word2[i]);
         }
         return res;
    }
};