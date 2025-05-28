#ifndef FILEIO_H
#define FILEIO_H

#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char,int> buildFrequencyTable(const string& filename);
string readFile(const string& filename);
void writeFile(const string& filename, const string& data);

#endif
