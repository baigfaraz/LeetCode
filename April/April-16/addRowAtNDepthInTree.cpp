#include <iostream>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *helper(TreeNode *root, int val, int depth, int currdepth)
{
    if (depth == 1)
    {
        TreeNode *new_root = new TreeNode(val);
        new_root->left = root;
        new_root->right = nullptr;
        return new_root;
    }

    if (!root)
    {
        return nullptr;
    }

    if (currdepth == depth - 1)
    {
        TreeNode *leftman = root->left;
        TreeNode *rightman = root->right;

        root->left = new TreeNode(val);
        root->left->left = leftman;
        root->left->right = nullptr;

        root->right = new TreeNode(val);
        root->right->left = nullptr;
        root->right->right = rightman;

        return root;
    }

    root->left = helper(root->left, val, depth, currdepth + 1);
    root->right = helper(root->right, val, depth, currdepth + 1);

    return root;
}

TreeNode *addOneRow(TreeNode *root, int val, int depth)
{
    return helper(root, val, depth, 1);
}

void printTree(TreeNode *root)
{
    if (!root)
        return;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; ++i)
        {
            TreeNode *node = q.front();
            q.pop();
            cout << node->val << " ";
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        cout << endl;
    }
}

int main()
{

    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(1);
    root->right->left = new TreeNode(5);

    int val = 7;
    int depth = 2;
    TreeNode *modified_root = addOneRow(root, val, depth);

    printTree(modified_root);

    return 0;
}
