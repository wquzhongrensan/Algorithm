//
//  PrintLinkReverse.cpp
//  
//
//  Created by PanfuTech on 2018/8/5.
//

#include <stdio.h>

/**
 给出一个链表的头节点  从尾到头打印改链表
 */

void PrintLinkListReverse(Node *pHead){
    if (pHead != nullptr) {
        if (pHead->next != nullptr) {
            PrintLinkListReverse(pHead->next)
        }
        printf("%d\t", pHead->next);
    }
}
