class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        
        int sum = 0;
        int l =0;
        int count = 0;
        for(int i = 0;i<n;i++){
        
            if(s[i]=='L') sum ++;
            else sum--;
            
            if(sum==0){
                count++;
            }
        }
        return count;
    }
