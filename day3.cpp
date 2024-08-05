class Solution {
public:
    int climbStairs(int n) {
        int a = 0,b = 1,c = a + b;
        while(n--)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};