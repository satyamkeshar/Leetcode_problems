class Solution {
public:
    int missingNumber(vector<int>& nums) {
//        nums.push_back(INT_MAX);
//         sort(nums.begin(),nums.end());
        
        
//         for(int i =0 ; i<nums.size(); i++)
//         {
//             if(i!= nums[i])
//             {
//                 return i;
//             }
//         }
        
      
//         return 0;
        
        int expected = (nums.size()*(nums.size()+1))/2;
        int sum = 0;
        for(int i =0; i<nums.size(); i++)
        {
            sum += nums[i];
        }
    return expected - sum;;
    }
};