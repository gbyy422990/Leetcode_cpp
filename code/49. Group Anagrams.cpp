//
// Created by bin gao on 2019-10-03.
//

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for(auto str: strs){
            string key = str;
            sort(key.begin(), key.end());
            hash[key].push_back(str);
        }

        vector<vector<string>> res;
        for(auto item: hash) res.push_back(item.second);
        return res;
    }
};