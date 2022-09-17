/*
冒泡排序(升序)的基本思想是每次都从头开始两两比较相邻的元素，将较大的元素换到后面
因此，每次都会有一个元素达到最终的排序位置，根据这个思路实现了如下代码
*/
#include"bubbleSort.h"

void bubbleSort(vector<int> &arr)
{
    int len = arr.size();
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (arr[j + 1] > arr[j]) {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}