class Solution {
public:
    void countingSort(vector<int>& arr, int exp) {
        int n = arr.size();

        vector<int> output(n);
        int count[10] = {0};

        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10;
            count[digit]++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--) {
            int digit = (arr[i] / exp) % 10;

            output[count[digit] - 1] = arr[i];

            count[digit]--;
        }

        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }

    void radixSort(vector<int>& arr) {
        int maxElement = *max_element(arr.begin(), arr.end());

        for (long long exp = 1; maxElement / exp > 0; exp *= 10) {
            countingSort(arr, exp);
        }
    }
    int maximumGap(vector<int>& arr) {
        int n = arr.size();
        if (n < 2) {
            return 0;
        }
        vector<int> num = arr;
        radixSort(num);

        int a = INT_MIN;
        for (int i = 1; i < n; i++) {
            a = max(a, num[i] - num[i - 1]);
        }
        return a;
    }
};