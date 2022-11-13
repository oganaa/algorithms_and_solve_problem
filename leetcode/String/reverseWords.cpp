class Solution {
public:
    string reverseWords(string s) {
        string result ;
        for(int i =0;i<s.size();i++){
            result.push_back(s[i]);
            while(result.back()&&result.back()==s[i+1]&&result.back()==' '){
                i++;
            }
        }
        if(result[0]==' '){
            result = result.substr(1,result.size());
        }
        if(result[result.size()-1]==' '){
            result = result.substr(0,result.size()-1);
        }
        vector<string> answer;
        string word; 
        istringstream ss(result);

        while (ss >> word)
        {
            answer.push_back(word);
        }
        cout<<answer.size();
        string basestr;
        for(int i = 0;i<answer.size();i++){
            basestr = basestr + answer[answer.size()-1-i] +' ';
        }
        // cout<<basestr;
        basestr = basestr.substr(0,basestr.size()-1);
        
        return basestr;
    }
};