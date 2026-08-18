class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry=0;
        while(a.size() || b.size() || carry){
            int sum=0;
            int x=0,y=0;
            if(a.size()){
                x=a.back()=='1';
                a.pop_back();
            }
            if(b.size()){
                y=b.back()=='1';
                b.pop_back();
            }
            sum=(x+y+carry)%2;
            carry=(x+y+carry)/2;
            res+=(sum==1)?'1':'0';
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};