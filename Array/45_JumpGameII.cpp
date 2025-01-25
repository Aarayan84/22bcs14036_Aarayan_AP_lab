class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jumps=0,currentend=0,farthest=0;
        for(int i=0;i<n;i++){
            farthest=max(farthest,i+nums[i]);
            if(i==currentend){
                jumps++;
                currentend=farthest;
                if(currentend>=n-1){
                    break;
                }
            }
        }
        return jumps;
    }
};
