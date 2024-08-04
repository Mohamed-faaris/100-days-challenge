#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

static const bool Booster = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return true;
}();


void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
class Solution {
public:
    void rev(vector<int>& nums,int r,int l)
    {
        while(r<l)
        {
            swap(nums[r++],nums[l--]);
        }
    }
    void rotate(vector<int>& nums, int k) 
    {
        k = k % nums.size();
        rev(nums,0,nums.size()-1);
        rev(nums,0,k-1);
        rev(nums,k,nums.size()-1);    
    }
};

