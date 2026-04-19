class Solution {
public:
    int check1(char a){
        int c=a-'0';
        if(c<=26 &&c>=1) return 1;
        else return 0; 
    }
    int check2(char a,char b){
        if(a=='0') return 0;
        int c= 10*(a-'0')+(b-'0');
        if(c<=26 &&c>=1) return 1;
        else return 0; 
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n,0);
        if(s[0]!='0') dp[0]=1;
        if(n==1) return dp[0];
        if(dp[0]!=0){
            dp[1]=check2(s[0],s[1])+check1(s[1]);
    
        } 
        for(int i=2;i<n;i++){
            dp[i]=(check2(s[i-1],s[i])*dp[i-2])+(check1(s[i])*dp[i-1]);
        }
        return dp[n-1];

        
    }
};
