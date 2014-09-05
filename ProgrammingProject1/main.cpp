#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream theFile;
    cout << "fstream object defined...\n";

    theFile.open ("demofile.txt", ios::out);
    cout << "Attempting to open demofile.txt...\n";

    if (theFile.fail())
        cout << "File failed to open...\n";

    theFile << "Writing stuff to the file";

    theFile.close();
    cout << "demofile.txt closed...\n";
    return 0;
}

