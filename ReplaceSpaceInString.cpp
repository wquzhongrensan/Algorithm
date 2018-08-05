//
//  ReplaceSpaceInString.cpp
//  
//
//  Created by PanfuTech on 2018/8/5.
//

#include <stdio.h>
#include <cstring>

/**
 用 %20 代替字符串中的空格
 we are nothing
 替换后： we%20are%20nothing
 */

// length  是字str数组的总容量 大于等于字符串的真实长度
void ReplaceSpaceInString(char str[], int length) {
    if (str == nullptr && length <= 0) {
        return;
    }
    
    int originalLength = 0;
    int numberOfSpace = 0;
    while(str[i] != '\0'){
        ++originalLength;
        
        if (str[i] == ' ') {
            ++numberOfSpace;
        }
        
        ++i;
        
    }
    
    // %20 表示一个空格多出 两个字符
    int newLength = originalLength + numberOfSpace * 2;
    
    // 表示放不下这个长度 则返回不作处理
    if(newLength > length)
        return;
    
    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    
    // 从后到前替换
    while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) {
        if (str[indexOfOriginal] == ' ') {
            str[indexOfNew--] ='0';
            str[indexOfNew--] = '2';
            str[indexOfNew--] = '%';
        } else {
            str[indexOfNew--] = str[indexOfOriginal];
        }
        --indexOfOriginal;
    }
}
