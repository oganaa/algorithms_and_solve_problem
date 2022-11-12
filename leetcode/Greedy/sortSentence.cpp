class Solution {
public:
    string sortSentence(string s) {
       istringstream iss (s);
        vector<pair<int,string>> vec;
        string val;
        while(iss>>val){
            vec.push_back(
                {
                    val[val.size()-1]-'0',val.substr(0,val.size()-1)
                }
            );
        }
        sort(vec.begin(),vec.end());
        string answer;
        for(int i = 0;i<vec.size();i++){
            answer = answer + vec[i].second + " ";
        }
        return answer.substr(0,answer.size()-1);
    }
};