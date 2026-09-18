/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 
*/

class Solution {
  public:
  void inorder(Node *root,vector<int>&distances)
  {
      if(root==nullptr)
      return ;
      inorder(root->left,distances);
     // cout<<root->data<<endl;
      distances.push_back(root->data);
       inorder(root->right,distances);
      
  }
    int absDiff(Node *root) {
        // code here
        vector <int> distances;
        inorder(root , distances);
        int minn=INT_MAX;
        sort(distances.begin(),distances.end());
        for(int i = 0; i < distances.size()-1; i++)
        {
            minn=min(minn,abs(distances[i]-distances[i+1]));
            //cout<<abs(distances[i]-distances[i+1])<<endl;
          
        }
          return minn;
    }
};