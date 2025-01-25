class Solution {
public:
    vector<int> twoSum(vector<int>& ar, int target) {
        unordered_map<int, int> hash_map; 
        vector<int> result;              
        int n = ar.size();
        
        for (int i = 0; i < n; i++) {
            int complement = target - ar[i]; 
            if (hash_map.find(complement) != hash_map.end()) {
…
