//
// Created by YUAN on 2024/4/2.
//

//这是c语言实现版本
int max(int a, int b){
    return a > b ? a : b;
}



int rob(int* nums, int numsSize){
    if(numsSize == 0)
        return 0;
    else if(numsSize == 1)
        return nums[0];
    else if(numsSize == 2)
        return max(nums[0], nums[1]);

    int dp[numsSize];
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for(int i = 2; i < numsSize; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    return dp[numsSize - 1];
}