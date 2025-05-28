#include "../include/heap.h"
#include <algorithm>

MinHeap* createMinHeap(int capacity) {
    MinHeap* minHeap = new MinHeap;
    minHeap->size = 0;
    minHeap->array.resize(capacity);
    return minHeap;
}

void heapify(MinHeap* minHeap, int i) {
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest != i) {
        swap(minHeap->array[i], minHeap->array[smallest]);
        heapify(minHeap, smallest);
    }
}

bool isSizeOne(MinHeap* minHeap) {
    return (minHeap->size == 1);
}

Node* extractMin(MinHeap* minHeap) {
    Node* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    minHeap->size--;
    heapify(minHeap, 0);
    return temp;
}

void insertMinHeap(MinHeap* minHeap, Node* node) {
    minHeap->size++;
    int i = minHeap->size - 1;
    minHeap->array[i] = node;

    while (i && minHeap->array[i]->freq < minHeap->array[(i-1)/2]->freq) {
        swap(minHeap->array[i], minHeap->array[(i-1)/2]);
        i = (i-1)/2;
    }
}

void buildMinHeap(MinHeap* minHeap) {
    int n = minHeap->size - 1;
    for (int i = (n-1)/2; i >= 0; i--) {
        heapify(minHeap, i);
    }
}
