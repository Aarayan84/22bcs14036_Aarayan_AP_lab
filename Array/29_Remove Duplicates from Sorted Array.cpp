class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>hash;
       int n=nums.size();
        for(auto i:nums){
            hash[i]++;
        }
       
        nums.clear();
        int index=0;
        for(auto i:hash){
            nums.push_back(i.first);
        }
    return nums.size();}
};
