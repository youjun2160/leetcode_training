//
// Created by YUAN on 2024/4/3.
//


//这是c语言实现版本
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *buildTree(int *preorder, int *inorder,int start, int end, int *PIndex){
    if(start > end)
        return NULL;
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));

    newNode->val = preorder[*PIndex];
    (*PIndex)++;

    if(start == end){
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    int n;
    for(n = start; n <= end; n++){
        if(newNode->val == inorder[n])
            break;
    }

    newNode->left = buildTree(preorder, inorder, start, n-1, PIndex);
    newNode->right = buildTree(preorder, inorder, n+1, end, PIndex);
    return newNode;
}

struct TreeNode* deduceTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    int PIndex = 0;
    return buildTree(preorder, inorder, 0, inorderSize - 1, &PIndex);
}