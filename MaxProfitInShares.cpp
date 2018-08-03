//
//  MaxProfitInShares.cpp
//  
//
//  Created by duoyi on 2018/8/3.
//

#include <stdio.h>

/**
 股票买卖中 的最大利润
 { 9, 11, 8, 5, 7, 12, 16, 14 }
 
 5 买入。    16卖出。即为最大利润 11
 */

int MaxProfit(const int* numbers, unsigned length) {
    if (numbers == nullptr && length < 2) {
        return 0;
    }
    int min = numbers[0];
    int maxProfit = numbers[1] - min;
    
    for (int i = 2; i < length; ++i) {
        if (numbers[i-1] < min) {
            min = numbers[i - 1];
        }
        
        int currentProfit = numbers[i] - mins;
        if (currentProfit > maxProfit) {
            maxProfit = currentProfit;
        }
    }
    
    return maxProfit;
}
