class Solution {
public:

    long long merge(vector<int>& arr, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        vector<int> temp;
        long long count = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                count += (mid - i + 1);  
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        while (j <= right) {
            temp.push_back(arr[j]);
            j++;
        }

        for (int k = 0; k < temp.size(); k++) {
            arr[left + k] = temp[k];
        }

        return count;
    }

    long long mergeSort(vector<int>& arr, int left, int right) {
        if (left >= right)
            return 0;

        int mid = (left + right) / 2;

        long long count = 0;

        count += mergeSort(arr, left, mid);
        count += mergeSort(arr, mid + 1, right);
        count += merge(arr, left, mid, right);

        return count;
    }

    long long inversionCount(vector<int>& arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};
