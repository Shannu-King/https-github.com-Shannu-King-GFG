/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        vector<int>ans;
        q.push({root,0});
        while(!q.empty())
        {
            auto qq=q.front();
            auto node=q.front().first;
            int d=q.front().second;
            q.pop();
            if(mp.find(d)==mp.end())
            mp[d]=node->data;
            if(node->left)
            q.push({node->left,d-1});
            if(node->right)
            q.push({node->right,d+1});
        }
          for(auto x : mp)
        ans.push_back(x.second);

    return ans;
        
    }
};