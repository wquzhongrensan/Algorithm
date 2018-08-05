//
//  FindSameElementInArray.cpp
//  
//
//  Created by PanfuTech on 2018/8/5.
//

#include <stdio.h>

/**
 数组大少n+1  数组内值范围为 1 - n ,找出有重复的元素
 
 {2, 3, 5, 4, 3, 2, 6, 7}，那么对应的
 // 输出是重复的数字2或者3。
 */

int findSameInArray(const int* numbers, unsigned int length) {
    
    if(numbers == nullptr || length <= 0)
        return -1;
    
    int start = 1; //从第二个元素开始
    int end = length - 1;
    // 结束 大于等于 开始
    while (end >= start) {
        int middle = ((end - start) >> 1) + start;
        int count = countRange(numbers, length, start , middle);
        if (end == start) {
            if (count > 1) {
                return start;
            }else{
                break;
            }
        }
        if (count > (middle -start + 1)) {
            end = middle;
        }else{
            start = middle +1;
        }
    }
    return -1;
}

int countRange(const int* numbers, int length, int start, int end) {
    if (numbers == nullptr) {
        return 0;
    }
    
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (numbers[i] >= start && numbers[i] <= end) {
            ++count;
        }
    }
    
    return count;
}
