class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        bool valid = true;
        int n = matrix.size();
        for(int i = 0;i<matrix.size();i++){
            map<int,int> mp;
            for(int j = 0;j<matrix[i].size();j++){
                mp[matrix[i][j]]++;
            }   
            if(mp.size()!=n){
                return false;
            }
            mp.clear();
        }
        for(int i = 0;i<matrix.size();i++){
            map<int,int> mp;
            for(int j = 0;j<matrix[i].size();j++){
                mp[matrix[j][i]]++;
            }   
            if(mp.size()!=n){
                return false;
            }
            mp.clear();
        }
        return true;
    }
};