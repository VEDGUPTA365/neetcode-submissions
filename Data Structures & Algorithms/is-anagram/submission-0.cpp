class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ss(26);
        vector<int>tt(26);
        for(auto i:s) ss[i-'a']++;
         for(auto i:t) tt[i-'a']++;
         return (ss==tt);
    }
};
