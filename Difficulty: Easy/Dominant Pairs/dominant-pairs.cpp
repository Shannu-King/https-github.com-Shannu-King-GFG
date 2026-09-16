class Solution {
  public:
    int dominantPairs(vector<int> &arr) {
        // Code here
        int arraySize=arr.size();
        int dominantPair = 0;
        for(int i = 0; i < arraySize /2; i++)
        {
           arr[i] = floor((double)arr[i] / 5);
           // cout << arr[i] << endl;
        }
        sort( arr.begin(), arr.begin() + arraySize /2  );
        sort(arr.begin() + arraySize /2  , arr.end());
         for(int i = 0; i < arraySize /2; i++)
        {
           // arr[i] = arr[i] /5;
            //cout << arr[i] << endl;
        }
        for(int j=arraySize /2; j < arraySize; j++)
            {
                 //cout << arr[j] << endl;
            }
            int j = arraySize /2;
        for(int i = 0; i < arraySize /2 ; i++)
        {
            while(j < arraySize  && arr[i] >= arr[j])
            j++;
            dominantPair+=(j - arraySize/2);
           // cout<<dominatPair<<endl;
        }
        return dominantPair;
        
    }
};