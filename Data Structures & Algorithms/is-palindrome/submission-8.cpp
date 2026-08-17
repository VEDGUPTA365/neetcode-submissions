class Solution {
public:
    bool isPalindrome(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if('A'<=s[i] && s[i]<='Z') s[j++]=s[i]+'a'-'A';
            else  if('a'<=s[i]&& s[i]<='z') s[j++]=s[i];
            else if('0'<=s[i] && s[i]<='9') s[j++]=s[i];
            else continue;
        }
        int l=0;
        int r=j-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
             l++;
             r--;
        }
        return true;

    }
};
