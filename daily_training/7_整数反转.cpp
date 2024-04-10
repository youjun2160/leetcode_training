//
// Created by YUAN on 2024/4/9.
//
class Solution {
public:
    int reverse(int x) {
        int rs = 0;
        while(x != 0){
            if (rs < INT_MIN / 10 || rs > INT_MAX / 10) {
                return 0;
            }
            rs *= 10;
            rs += x % 10;
            x /= 10;
        }
        return rs;
    }
};