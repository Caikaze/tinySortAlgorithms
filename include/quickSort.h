#pragma once
#include<vector>
using namespace std;
void quickSort1(vector<int> &arr, int begin, int end);

void quickSort2(vector<int> &arr, int begin, int end);
void quickSort1(vector<int>& arr, int begin, int end)
{
    if (begin >= end) {
        return;
    }
    int i = begin;
    int j = end;
    int temp = arr[begin];
    while (i < j) {
        while (i < j && arr[j] >= temp) --j;
        arr[i] = arr[j];
        while (i < j && arr[i] <= temp) ++i;
        arr[j] = arr[i];
    }
    arr[i] = temp;
    quickSort1(arr, begin, i - 1);
    quickSort1(arr, i + 1, end);
}

void quickSort2(vector<int> &arr, int begin, int end)
{
    if (begin >= end) {
        return;
    }
    int i = begin;
    int j = end;
    int temp = arr[begin];
    while (i < j) {
        while (i < j && arr[j] >= temp) --j;
        while (i < j && arr[i] <= temp) ++i;
        swap(arr[i], arr[j]);
    }
    arr[begin] = arr[i];
    arr[i] = temp;
    quickSort1(arr, begin, i - 1);
    quickSort1(arr, i + 1, end);
}