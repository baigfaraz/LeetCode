#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

int sumOfLeftLeaves(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int sum = 0;

    

    return sum;
}

int main()
{

    node *root = new node{3,
                          new node{15, nullptr, nullptr},
                          new node{5, new node{9, nullptr, nullptr}, new node{7, nullptr, nullptr}}};

    int leftLeavesSum = sumOfLeftLeaves(root);
    cout << "Sum of left leaves: " << leftLeavesSum << endl;

    return 0;
}
