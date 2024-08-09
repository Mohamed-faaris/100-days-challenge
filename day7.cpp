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
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int a = 0;
        for(auto n:nums)
        {
            if(!c) a = n; 
            c += (a==n)?1:-1;
        }
        return a;
    }
};
