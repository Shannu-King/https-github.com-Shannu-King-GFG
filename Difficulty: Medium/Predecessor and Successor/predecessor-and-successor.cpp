/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void fun(Node* root, int key,vector<pair<Node*,int>>&res)
  {
      if(root==nullptr)
      return;
      fun(root->left,key,res);
          res.push_back({root,root->data});
      fun(root->right,key,res);
  }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<pair<Node*,int>>res;
        fun(root,key,res);
        Node * ans=nullptr;
        Node*ans1=nullptr;
        bool flag=true;
        for(int i=0;i<res.size();i++)
        {
            if(res[i].second<key)
            ans=res[i].first;
            if(res[i].second>key&&flag)
            {
                ans1=res[i].first;
                flag=false;
            }
        }
        return {ans,ans1};
    }
};