//
// Created by YUAN on 2024/4/3.
//

//这是c语言实现版本
int max(int a, int b){
    return a > b ? a : b;
}

int robG(int *nums, int start, int end){
    int pre = 0;
    int cur = 0;

    for(int i = start; i <= end; i++){
        int temp = cur;
        cur = max((pre + nums[i]), cur);
        pre = temp;
    }

    return cur;
}

int rob(int* nums, int numsSize){
    if(numsSize == 1)
        return nums[0];

    return max(robG(nums, 0, numsSize - 2), robG(nums, 1, numsSize - 1));
}