#include "../include/huffman.h"

Node* buildHuffmanTree(const unordered_map<char,int>& freqMap) {
    priority_queue<Node*, vector<Node*>, Compare> minHeap;

    for (auto pair : freqMap) {
        minHeap.push(new Node(pair.first, pair.second));
    }

    while (minHeap.size() > 1) {
        Node* left = minHeap.top(); minHeap.pop();
        Node* right = minHeap.top(); minHeap.pop();

        Node* merged = new Node('$', left->freq + right->freq);
        merged->l = left;
        merged->r = right;
        minHeap.push(merged);
    }

    return minHeap.top();
}

void generateCodes(Node* root, string code, unordered_map<char,string>& huffmanCodes) {
    if (!root) return;
    if (!root->l && !root->r) {
        huffmanCodes[root->character] = code;
    }
    generateCodes(root->l, code + "0", huffmanCodes);
    generateCodes(root->r, code + "1", huffmanCodes);
}

void freeTree(Node* root) {
    if (!root) return;
    freeTree(root->l);
    freeTree(root->r);
    delete root;
}
