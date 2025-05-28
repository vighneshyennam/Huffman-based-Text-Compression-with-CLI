#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

// Huffman tree node
struct Node {
    char character;
    int freq;
    Node *l, *r;

    Node(char c, int f) : character(c), freq(f), l(nullptr), r(nullptr) {}
};

// Comparator for priority queue
struct Compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

// Function prototypes
Node* buildHuffmanTree(const unordered_map<char,int>& freqMap);
void generateCodes(Node* root, string code, unordered_map<char,string>& huffmanCodes);
void freeTree(Node* root);

#endif
