class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Store each number and its frequency
        vector<pair<int, int>> arr;

        for (auto it : freq) {
            arr.push_back({it.first, it.second});
        }

        // Sort by frequency, highest first
        sort(arr.begin(), arr.end(),
             [](pair<int, int> a, pair<int, int> b) {
                 return a.second > b.second;
             });

        // Take the first k numbers
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};