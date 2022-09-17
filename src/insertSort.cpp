#include"../include/insertSort.h"

void insertSort(vector<int> &arr)
{
    int len = arr.size();
    for (int i = 1; i < len; ++i) {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }
}