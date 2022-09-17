#pragma once
#include<iostream>
//#include"bubbleSort.h"
/*#include"heapSort.h"
#include"insertSort.h"
#include"mergeSort.h"

#include"selectSort.h"
#include"shellSort.h"*/
#include"../include/quickSort.h"
int main()
{
    vector<int> arr{3,9,5,6,1,8,0};
    quickSort1(arr, 0, arr.size() - 1);
    for (auto x : arr) {
        cout << x <<endl;
    }
}