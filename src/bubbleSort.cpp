#include"bubbleSort.h"

void bubbleSort(vector<int> &arr)
{
    int len = arr.size();
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}