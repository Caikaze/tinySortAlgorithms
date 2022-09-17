#include"../include/shellSort.h"

void shellSort(vector<int> &arr)
{
    int len = arr.size();
    int gap = len / 2;
    for (; gap >= 1; gap /= 2) {
        for (int i = gap; i < len; ++i) {
            int j = i - gap;
            int temp = arr[i];
            while (j >= 0 && temp < arr[j]) {
                arr[j + gap] = arr[j];
                j -= gap;
            }
            arr[j + gap] = temp;
        }
    }
}