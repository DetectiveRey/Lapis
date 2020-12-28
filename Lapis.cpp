// inclue libraries
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <ctime>
using namespace std;

int main(){
    SetConsoleTitle("Lapis");

    // setting time
    time_t tt;
    struct tm * ti;

    time(&tt);
    ti = localtime(&tt);

    // Main
    string input;
    string fileName;

        // start
        cout << "This is Lapis, your information conservor.\n";
        cout << "Feel free to enter anything, and I will save it for you.\n";

        // stage 2
        cin >> input;
        cout << "Now, enter a file name.\n";

        // stage 3
        cin >> fileName; 
        ofstream File(fileName + ".txt");

        // write information
        File << asctime(ti) << endl << input;
        File.close();

        cout << "Your file named '" << fileName << ".txt' has been saved to the same folder as the file. Thank you for using me.\n";

    // close program
    system("pause");
}