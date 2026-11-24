class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
          std::unordered_map<int, int> indicies;
          for(int i = 0; i < nums.size(); i++)
          {
            int difference = target- nums[i];
            auto it = indicies.find(difference);
            if(it != indicies.end())
            {
                return {it->second, i};
            }
                else 
            {
                indicies.insert({nums[i], i});
            }
          }
          return {};
    }
};
