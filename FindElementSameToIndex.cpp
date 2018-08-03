//
//  FindElementSameToIndex.cpp
//  
//
//  Created by duoyi on 2018/8/3.
//

#include <stdio.h>

/**
 在一个 单调递增的 数组中(每个元素数值唯一) 找出 值与它的下标值一样的元素
 
 {-4, -2, 0, 3, 4, 6}
 */

int FindElementSameToIndex(const int* numbers, int length) {
    if (numbers == nullptr || length <= 0) {
        return -1;
    }
    int left = 0;
    int right = length - 1;
    while (left <= right) {
        int middle = left + ((right - left) >> 1);
        if (numbers[middle] == middle) {
            return middle;
        }
        if (numbers[middle] > middle) {
            right = middle - 1;
        }else{
            left = middle + 1;
        }
    }
    return -1;
}

