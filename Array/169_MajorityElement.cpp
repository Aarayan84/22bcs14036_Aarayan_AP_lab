class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        int max=0;
        for(auto i :nums){
            hash[i]++;
        }
        for(auto i:hash){
            if(i.second>max){
                max=+i.second;

            }
        }
        for(auto i:hash){
            if(i.second==max){
                return i.first;
            }
        }
      return 0;
    }
};
