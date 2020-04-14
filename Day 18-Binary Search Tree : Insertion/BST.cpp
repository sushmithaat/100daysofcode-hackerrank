
//Problem Link-https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem

/*
Node is defined as 

class Node 
{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) 
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
  //answer
    Node * insert(Node * root, int data) 
    {
        if(root==NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if(data<=root->data)
            {
                cur=insert(root->left,data);
                root->left=cur;
            }
            else
            {
                cur=insert(root->right,data);
                root->right=cur;
            }
        }
        return root;
    }

