//
//  SerializeBinaryTree.cpp
//  
//
//  Created by PanfuTech on 2018/8/12.
//

#include <stdio.h>
#include <iostream>

/**
 序列化二叉树
 就是将二叉树 从头节点 到 左节点 右节点这样打印
 */
serialize(BinaryTree *node, stream &stream) {
    if (node == nullptr) {
        stream << "$ ,";
        return ;
    }
    
    // 有值采取判断它的左右子节点
    stream << node->value + " ,";
    serialize(node->left, stream);
    serialize(node->right, stream);
    
}


//  反序列化 成 二叉树
deserializeBinaryTree(BinaryTree *node, stream &stream) {
    int number;
    if (ReadStream(stream, &number)) {
        // 构造每一个 节点
        *node = new BinaryTreeNode();
        (*node)->value = number;
        (*node)->left = nullptr;
        (*node)->right = nullptr;
        
        deserializeBinaryTree(&((*node)->left), stream);
        deserializeBinaryTree(&((*node)->right), stream);
    }
}
