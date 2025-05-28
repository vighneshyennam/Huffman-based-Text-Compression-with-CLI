#include "../include/huffman.h"
#include "../include/fileio.h"
#include <iostream>
using namespace std;

extern string compress(const string&, unordered_map<char,string>&);
extern string decompress(const string&, Node*);

int main() {
    string inputFile = "../data/sample.txt";
    string compressedFile = "../data/compressed.txt";
    string decompressedFile = "../data/decompressed.txt";

    // Step 1: Build frequency table
    auto freqMap = buildFrequencyTable(inputFile);

    // Step 2: Build Huffman Tree
    Node* root = buildHuffmanTree(freqMap);

    // Step 3: Generate Huffman Codes
    unordered_map<char,string> huffmanCodes;
    generateCodes(root, "", huffmanCodes);

    // Step 4: Compress
    string text = readFile(inputFile);
    string encoded = compress(text, huffmanCodes);
    writeFile(compressedFile, encoded);

    // Step 5: Decompress
    string compressedText = readFile(compressedFile);
    string decoded = decompress(compressedText, root);
    writeFile(decompressedFile, decoded);

    cout << "✅ Compression and Decompression Completed!" << endl;

    freeTree(root);
    return 0;
}
