class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(string a:strs){
            if (s.size()==0) return "";
            string b="";
            for(int i=0;i<min(s.size(),a.size());i++){
                if(s[i]!=a[i]) break;
                else b+=s[i]; 
            }
            s=b;
        }
        return s;
    }
};