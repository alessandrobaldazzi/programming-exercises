class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++)
        {
            mp[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (mp.contains(nums2[i]) && mp[nums2[i]] > 0)
            {
                mp[nums2[i]]--;
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};