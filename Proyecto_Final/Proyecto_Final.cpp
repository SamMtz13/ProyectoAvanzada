#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "BookData.h"

using namespace std;

int main() {
    ofstream outBook{ "book.dat", ios::out | ios::binary };
    if (!outBook) {
        cerr << "File Couldn't be opened" << endl;
        exit(EXIT_FAILURE);
    }
    BookData blankBook();
    for (int i{ 0 }; i < 100; i++) {
        outBook.write(
            reinterpret_cast< const char* >(&blankBook), sizeof(BookData));
    }


}
