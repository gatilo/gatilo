//
// Created by ashokpant on 9/18/16.
//

#include <iostream>
#include "server.hpp"

using namespace std;
using namespace gatilo;

int main(int argc, char *argv[]) {
    cout << "Gatilo server!" << endl;
    Server(8080, 4);
    cout << "done." << endl;
    return 0;
}