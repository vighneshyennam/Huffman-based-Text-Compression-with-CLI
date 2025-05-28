#include "../include/fileio.h"
#include <fstream>
#include <iostream>

unordered_map<char,int> buildFrequencyTable(const string& filename) {
    unordered_map<char,int> freq;
    ifstream in(filename, ios::binary);
    char c;
    while (in.get(c)) {
        freq[c]++;
    }
    in.close();
    return freq;
}

string readFile(const string& filename) {
    ifstream in(filename, ios::binary);
    string content((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());
    in.close();
    return content;
}

void writeFile(const string& filename, const string& data) {
    ofstream out(filename, ios::binary);
    out << data;
    out.close();
}
