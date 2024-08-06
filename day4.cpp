class Solution {
public:
    int minimumPushes(string word) 
    {
        vector<int> map(26,0);
        for (char c:word)
        {
            map[c-'a']+=1;
        }
        sort(map.begin(),map.end(),greater<>());
        int cost = 0,i = 8;
        for(int c:map)
        {
            cost += c * (i++/8);
        }
        return cost;
    }
};