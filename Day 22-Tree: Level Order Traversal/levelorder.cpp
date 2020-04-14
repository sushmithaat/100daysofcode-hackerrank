//Problem Link-https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
void my_level_order(Node* root, int lvl)
{
        if (!root)  
            return;
        if (lvl==0) 
            cout << root->data << " ";
        else
        {
            my_level_order(root->left, lvl-1);
            my_level_order(root->right, lvl-1);
        }
}
int get_height(Node* root)
{
        if (!root)  
            return -1;
        return max(get_height(root->left)+1, get_height(root->right)+1);
}    
void levelOrder(Node * root) 
{
        int  h = get_height(root);
        for (int i=0;i<=h;i++)
            my_level_order(root, i);
}
