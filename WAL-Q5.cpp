class Solution {
     int traverseAndSum(Node* root) {
        if (!root) return 0;
        int lst = traverseAndSum(root->left);
        int rst = traverseAndSum(root->right);
        int tmp = root->data;
        if (lst == 0 && rst == 0) root->data = 0;
        else root->data = lst + rst;
        return tmp + lst + rst;
    }
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
         traverseAndSum(node);// Your code here
    }
};