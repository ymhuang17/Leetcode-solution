/* leetcode two sum */

/* Given an array of integers nums and an integer target, return
indices of the two numbers such that they add up to target. */

/* You may assume that each input would have exactly one solution,
and you may not use the same element twice. */

/* example 1:
input: nums = [2, 7, 11, 15], target = 9
output: [0, 1]
explanation: nums[0] + nums[1] == 9,
we return [0, 1]  */

/* example 2:
input: nums = [3, 3], target = 6
output: [0, 1] */

/* example 3:
input: nums = [3, 2, 4], target = 6
output: [1, 2] */



class Solution {
  public:
    vector<int> twosum(vector<int>& nums, int target) {
      unordered_map<int, int> m;
      vector<int> ret;
      for (int i = 0; i <= nums.size()-1; ++i) {
        if (m.find( target - nums[i] ) != m.end() ) {
          ret.push_back( m[target-nums[i] );
          ret.push_back( i );
        } else {
          m[nums[i]] = i;
        }
      }
    return ret;
}
      
