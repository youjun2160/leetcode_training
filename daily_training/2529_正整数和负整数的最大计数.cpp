//
// Created by YUAN on 2024/4/9.
//

//二分法
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = ranges::lower_bound(nums, 0) - nums.begin();
        int pos = nums.end() - ranges::upper_bound(nums, 0);
        return max(neg, pos);
    }
};

//lower_bound函数返回一个迭代器，指向在有序序列中大于或等于特定值的第一个元素。
//upper_bound函数返回一个迭代器，指向在有序序列中大于特定值的第一个元素。