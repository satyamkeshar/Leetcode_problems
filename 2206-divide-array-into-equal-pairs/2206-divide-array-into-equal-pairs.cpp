class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> umap;
        
        for(int i =0; i<nums.size(); i++)
        {
            umap[nums[i]]++;
        }
        
        for(auto it: umap)
        {
            if(it.second %2 != 0)
            {
                return 0;
            }
        }
        return 1;
    }
};