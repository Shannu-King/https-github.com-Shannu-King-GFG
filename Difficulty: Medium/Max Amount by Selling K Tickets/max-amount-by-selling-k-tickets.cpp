class Solution {
  public:
    int maxAmount(vector<int>& arr, int k) {
        // code here
        priority_queue<int>pq;
        int mod=1e9+7;
        for(int i=0;i<arr.size();i++)
        pq.push(arr[i]);
       long long int s=0;
        while(k--)
        {
            if(pq.top()>0)
            s+=pq.top();
            int m=pq.top();
            m-=1;
            if(m<0)
            break;
            pq.pop();
            pq.push(m);
        }
        return s%(mod);
    }
};