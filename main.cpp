// BitTest - initialize two vars and output the
//           results of applying the ~, &, | and ^
//           operations

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int numargs, char* args[])
{
    // set output format to hex
    cout.unsetf(cout.dec);
    cout.setf(cout.hex);

    // init two args
    int arg1 = 0x78ABCDEF;
    int arg2 = 0x12345678;

    // perform each op in turn
    // unary NOT
    cout << " arg1 = 0x" << arg1 << endl;
    cout << "~arg1 = 0x" << ~arg1 << "\n" << endl;
    cout << " arg2 = 0x" << arg2 << endl;
    cout << "~arg2 = 0x" << ~arg2 << "\n" << endl;

    // binary ops
    cout << "  0x" << arg1 << "\n"
         << "& 0x" << arg2 << "\n"
         << "  ----------" << "\n"
         << "  0x" << (arg1 & arg2) << "\n"
         << endl;

    cout << "  0x" << arg1 << "\n"
         << "| 0x" << arg2 << "\n"
         << "  ----------" << "\n"
         << "  0x" << (arg1 | arg2) << "\n"
         << endl;

    cout << "  0x" << arg1 << "\n"
         << "^ 0x" << arg2 << "\n"
         << "  ----------" << "\n"
         << "  0x" << (arg1 ^ arg2) << "\n"
         << endl;

    // wait for user...
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
