class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> dis(256,-1);
        int maxlen=0,start=-1;
        for(int i=0;i<s.size();i++){
            if(dis[s[i]]>start){
                start=dis[s[i]];
            }
            dis[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
    return maxlen;}
};
