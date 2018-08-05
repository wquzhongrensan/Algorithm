//
//  FindInMatrix.cpp
//  
//
//  Created by PanfuTech on 2018/8/5.
//

/**
 在二维数组中查找 矩阵
 从左到右 递增
 从上倒下 递增
 */
#include <stdio.h>

int findInMatrix(const int* numbers, unsigned int rows , unsigned int colunms, int number) {
    bool found = false;

    // 从 右上角 开始查询 向下或 向左 查询
    if (numbers != nullptr && rows > 0 && columns > 0) {
        int row = 0;
        int coulmn = column - 1;
        while (row < rows && column >= 0) {
            if (numbers[row*columns+column] == number) {
                found = true;
                return number;

            }else if(numbers[row*columns+column] > number){
                column--;
            }else{
                row++;
            }
        }
    }
    return -1;
}
