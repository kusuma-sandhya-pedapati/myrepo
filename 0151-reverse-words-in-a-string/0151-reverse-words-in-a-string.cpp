class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        vector<string> v;
        for(int i=0;i<s.length();i++){
            string x="";
            if(s[i]!=' ') { x+=s[i++];
            while(s[i]!=' '&& i<n){
                x+=s[i];
                i++;
           }

            v.push_back(x);
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            if(i!=0)  ans+=" ";
        }
        return ans;
    }
};