#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

static const bool Booster = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return true;
}();

class Solution {
public:
    vector<int> map(vector<int> src)
    {
        vector<int> m(1001,0);
        for(int s:src)
        {
            m[s]+=1;
        }
        return m;
    }
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        for(int i = 0; i<target.size(); i++)
        {
            if(arr[i] != target[i]) return false;
        }
        return true;
    }
};