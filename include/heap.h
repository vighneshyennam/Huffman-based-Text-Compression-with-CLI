#ifndef HEAP_H
#define HEAP_H

#include "huffman.h"

// Structure for Min-Heap
struct MinHeap {
    int size;
    vector<Node*> array;
};

// Create a Min-Heap
MinHeap* createMinHeap(int capacity);

// Heapify at index i
void heapify(MinHeap* minHeap, int i);

// Check if heap has only one element
bool isSizeOne(MinHeap* minHeap);

// Extract minimum node from heap
Node* extractMin(MinHeap* minHeap);

// Insert a new node into heap
void insertMinHeap(MinHeap* minHeap, Node* node);

// Build heap from current array
void buildMinHeap(MinHeap* minHeap);

#endif
