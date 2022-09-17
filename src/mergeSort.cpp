#include"../include/mergeSort.h"

void mergeSort(vector<int> &arr, int start, int end)
{
    int mid = (end - start) / 2 + start;
    vector<int> leftArr(arr.begin() + start, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + end + 1);
    mergeSort(leftArr, start, mid);
    mergeSort(rightArr, mid + 1, end);
    vector<int> res(arr);
    int k = start;
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    while (start1 <= end1 && start2 <= end2) {
        res[k++] = leftArr[start1] < rightArr[start2] ? leftArr[start1++] : rightArr[start2];
    }
    while (start1 <= end1) {
        res[k++] = leftArr[start1];
    }
    while (start2 <= end2) {
        res[k++] = leftArr[start2];
    }
    for (int i = 0; i < k; ++i) {
        arr[i] = res[i];
    }
}