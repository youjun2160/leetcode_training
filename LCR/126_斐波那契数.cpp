//
// Created by YUAN on 2024/4/3.
//

//动态规划方法
class Solution {
public:
    int fib(int n) {
        if(n < 2)
            return n;
        vector<int> nums(n + 1, 0);
        nums[1] = 1;
        for(int i = 2; i <= n; i++){
            nums[i] = (nums[i - 1] + nums[i - 2]) % 1000000007;
        }
        return nums[n];
    }
};

//滚动数组空间优化
class Solution {
public:
    int fib(int n) {
        if(n < 2)
            return n;
        int a = 0, b = 1, c = 0;
        for(int i = 2; i <= n; i++){
            c = (a + b) % 1000000007;
            a = b;
            b = c;
        }
        return c;
    }
};


//递归解法
class Solution {
public:
    int fib(int n) {
        if(n < 2)
            return n;
        return (fib(n - 1) + fib(n - 2)) % 1000000007;
    }
};