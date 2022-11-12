class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int n = s.size();
        int j = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='I'){
                ans.push_back(j);
                j++;
            }else{
                ans.push_back(n);
                n--;
            }
        }  ans.push_back(j);
        return ans;
    }
};