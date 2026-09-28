/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int* result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;
    struct TreeNode* stack[100];
    int top = -1;
    struct TreeNode* curr = root;
    while (curr != NULL || top != -1) {
        while (curr != NULL) {
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
    
        result[(*returnSize)++] = curr->val;
        curr = curr->right;
    }

    return result;
}
