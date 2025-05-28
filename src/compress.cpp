#include "../include/huffman.h"
#include "../include/fileio.h"
#include <bitset>

string compress(const string& input, unordered_map<char,string>& huffmanCodes) {
    string compressed = "";
    for (char c : input) {
        compressed += huffmanCodes[c];
    }
    return compressed;
}
