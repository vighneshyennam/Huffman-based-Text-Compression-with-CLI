#include "../include/huffman.h"

string decompress(const string& encoded, Node* root) {
    string decoded = "";
    Node* curr = root;
    for (char bit : encoded) {
        if (bit == '0') curr = curr->l;
        else curr = curr->r;

        if (!curr->l && !curr->r) {
            decoded += curr->character;
            curr = root;
        }
    }
    return decoded;
}
