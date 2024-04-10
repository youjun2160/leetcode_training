//
// Created by YUAN on 2024/4/10.
//


//记忆化搜索
class Solution {
public:
    int calculate(int a, string s, vector<int>& memo){
        if(a >= s.size())
            return 1;
        if(s[a] == '0')
            return 0;
        if(memo[a] != -1){
            return memo[a];
        }

        memo[a] = calculate(a + 1, s, memo);
        if(a + 1 < s.size() && ((s[a] - '0') * 10 + (s[a + 1] - '0')) <= 26)
            memo[a] += calculate(a + 2, s, memo);

        return memo[a];
    }

    int numDecodings(string s) {
        vector<int> memo(s.size(), -1);
        return calculate(0, s, memo);
    }
};

//动态规划
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= n; i++){
            if(s[i - 1] != '0'){
                dp[i] += dp[i - 1];
            }
            if(i > 1 && s[i - 2] != '0' && ((s[i - 2] - '0') * 10 + (s[i - 1] - '0') <= 26)){
                dp[i] += dp[i - 2];
            }
        }
        return dp[n];
    }
};