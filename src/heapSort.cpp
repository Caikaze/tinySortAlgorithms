#include"../include/heapSort.h"

void heapBuild(vector<int> &arr, int start, int end)
{
    int dad = start;
    int son = 2 * start + 1;
    while (son <= end) {
        if (son + 1 <= end && arr[son] > arr[son + 1]) {
            ++son;
        }
        if (arr[dad] < arr[son]) {
            return;
        } else {
            swap(arr[dad], arr[son]);
            dad = son;
            son = 2 * dad + 1;
        }
    }
}

void heapSort(vector<int> &arr)
{
    int len = arr.size();
    for (int i = len / 2 - 1; i >= 0; --i) {
        heapBuild(arr, i, len - 1);
    }
    for (int i = len - 1; i >= 0; --i) {
        swap(arr[i], arr[0]);
        heapBuild(arr, 0, i - 1);
    }
}