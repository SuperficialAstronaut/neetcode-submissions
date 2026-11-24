class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        std::unordered_set<int> unique_nums;
        for(auto i : nums)
        {
           if(!unique_nums.insert(i).second)
           {
                return true;
           }
        }
         return false;
    }
};