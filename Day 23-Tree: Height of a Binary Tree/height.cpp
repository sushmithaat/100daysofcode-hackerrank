//Problem Link-https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

/*The tree node has data, left child and right child 
class Node 
{
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root)
    {
        // Write your code here.
        
        if(root!=NULL)
        {
            return max(height(root->left),height(root->right))+1;
        }
        else 
        {
            return -1;
        }
    }

