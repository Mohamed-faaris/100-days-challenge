class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        std::unordered_map<string,vector<string>> map;
        for(string str:strs){
            map[hashkey(str)].push_back(str);
        }
        for(auto v:map){
            result.push_back(v.second);
        }
        return result;
    }

    string hashkey(string s){
        vector<int> count(26,0);
        string key;
        for(int c:s){
            count[c-'a']++;
        }
        for(int c:count){
            key+='|'+to_string(c);
        }
        return key;
    }
};