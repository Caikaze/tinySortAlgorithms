#include"../include/selectSort.h"

void selectSort(vector<int> &arr)
{
    int len = arr.size();
    int minIndex;
    for (int i = 0; i < len; ++i) {
        minIndex = i;
        for (int j = i + 1; j < len; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}