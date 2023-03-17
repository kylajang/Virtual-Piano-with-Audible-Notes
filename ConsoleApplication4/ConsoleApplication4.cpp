#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
// using a constant to play each note a specific length of time
const int NOTE_LENGTH = 200;
    
    // Color changes and positions for the black keys
    class WhiteKeys
    {
    public:
        // function to find where the cursor is
        void gotoxy(int column, int line)
        {
            COORD coord;
            coord.X = column;
            coord.Y = line;
            SetConsoleCursorPosition(
                GetStdHandle(STD_OUTPUT_HANDLE),
                coord
            );
        }
        // Position of the C note
        void ColorBackground_C(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 22; i <= 32; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the D note
        void ColorBackground_D(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 39; i <= 49; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the E note
        void ColorBackground_E(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 56; i <= 66; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the F note
        void ColorBackground_F(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 73; i <= 83; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the G note
        void ColorBackground_G(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 90; i <= 100; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the A note
        void ColorBackground_A(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 107; i <= 117; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the B note
        void ColorBackground_B(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 125; i <= 135; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the higher C note
        void ColorBackground_CHigh(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 141; i <= 151; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the D note
        void ColorBackground_DHigh(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 158; i <= 168; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the higher E note
        void ColorBackground_EHigh(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 175; i <= 185; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the higher F note
        void ColorBackground_FHigh(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 192; i <= 202; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the higher G note
        void ColorBackground_GHigh(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);
            for (int i = 195; i <= 205; i++)
            {
                for (int j = 35; j <= 48; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
    };

    // Color changes and positions for the black keys
    class BlackKeys
    {
    public:
        // function to find where the cursor is
        void gotoxy(int column, int line)
        {
            COORD coord;
            coord.X = column;
            coord.Y = line;
            SetConsoleCursorPosition(
                GetStdHandle(STD_OUTPUT_HANDLE),
                coord
            );
        }
        // Position of the C sharp note
        void ColorBackground_CSharp(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 31; i <= 41; i++)
            {
                for (int j = 18; j <= 31; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the D sharp note
        void ColorBackground_DSharp(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 48; i <= 58; i++)
            {
                for (int j = 18; j <= 31; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the F sharp note
        void ColorBackground_FSharp(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 82; i <= 92; i++)
            {
                for (int j = 18; j <= 31; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the G sharp note
        void ColorBackground_GSharp(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 100; i <= 109; i++)
            {
                for (int j = 18; j <= 31; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the A sharp note
        void ColorBackground_ASharp(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 119; i <= 127; i++)
            {
                for (int j = 18; j <= 31; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the higher C sharp note
        void ColorBackground_CSharpHigh(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 150; i <= 160; i++)
            {
                for (int j = 18; j <= 31; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
        // Position of the higher D sharp note
        void ColorBackground_DSharpHigh(int color)
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, color);

            for (int i = 169; i <= 179; i++)
            {
                for (int j = 18; j <= 31; j++)
                {
                    gotoxy(i, j);
                    cout << char(219);
                }
            }
        }
    };
    
    // Class to store the LoadNotes and PlayNotes Functions
    class Piano 
    {
    private:
        string notes;
 
    public:

        // Function to load the notes and piano i wrote in a text file
        void LoadNotes(string notesTextFile)
        {
            // Declaring my variables
            char note;
            int counter = 0;
            int value;

            // Opening and loading the piano image
            ifstream pianoImageInput;
            pianoImageInput.open("C:\\temp\\piano.txt");
            // loading the piano ascii
            while (!pianoImageInput.eof())
            {
                pianoImageInput >> value;
                cout << char(value);
                counter++;
                // Setting the borders of the piano ascii image
                if (counter == 210)
                {
                    cout << endl;
                    counter = 0;
                }
            }
            // Closing the image of the piano after its loaded
            pianoImageInput.close();

            // Opening the file that stores the notes to play
            ifstream notesInput;
            notesInput.open(notesTextFile);
            // bool to check if the file can be opened
            if (!notesInput.is_open()) 
            {
                // If the file can't be opened, it prints an error message to the user
                cout << "Error: Cannot open file" << notesTextFile << endl;
                return;
            }
            while (notesInput.get(note)) 
            {
                // to play the next note
                notes += note;
            }
            // Closing the file containing the notes
            notesInput.close();
        }

        // function to play the piano notes
        void PlayNotes()
        {
            // Objects to access the class that changes the color of the notes
            WhiteKeys white;
            BlackKeys black;

            for (const auto& note : notes) {
                // White Keys
                if (note == 'a') {
                    Beep(261, NOTE_LENGTH);
                    white.ColorBackground_C(14);    // Changing the color to yellow when note is played
                    Sleep(500);
                    white.ColorBackground_C(0);     // Changing the color back to it's original color after it's played
                    Sleep(500);
                }
                if (note == 's') {
                    Beep(293, NOTE_LENGTH);
                    white.ColorBackground_D(14);
                    Sleep(500);
                    white.ColorBackground_D(0);
                    Sleep(500);
                }
                if (note == 'd') {
                    Beep(329, NOTE_LENGTH);
                    white.ColorBackground_E(14);
                    Sleep(500);
                    white.ColorBackground_E(0);
                    Sleep(500);
                }
                if (note == 'f') {
                    Beep(349, NOTE_LENGTH);
                    white.ColorBackground_F(14);
                    Sleep(500);
                    white.ColorBackground_F(0);
                    Sleep(500);
                }
                if (note == 'g') {
                    Beep(392, NOTE_LENGTH);
                    white.ColorBackground_G(14);
                    Sleep(500);
                    white.ColorBackground_G(0);
                    Sleep(500);
                }
                if (note == 'h') {
                    Beep(440, NOTE_LENGTH);
                    white.ColorBackground_A(14);
                    Sleep(500);
                    white.ColorBackground_A(0);
                    Sleep(500);
                }
                if (note == 'j') {
                    Beep(493, NOTE_LENGTH);
                    white.ColorBackground_B(14);
                    Sleep(500);
                    white.ColorBackground_B(0);
                    Sleep(500);
                }
                if (note == 'k') {
                    Beep(523, NOTE_LENGTH);
                    white.ColorBackground_CHigh(14);
                    Sleep(500);
                    white.ColorBackground_CHigh(0);
                    Sleep(500);
                }
                if (note == 'l') {
                    Beep(587, NOTE_LENGTH);
                    white.ColorBackground_DHigh(14);
                    Sleep(500);
                    white.ColorBackground_DHigh(0);
                    Sleep(500);
                }
                if (note == ';') {
                    Beep(659, NOTE_LENGTH);
                    white.ColorBackground_EHigh(14);
                    Sleep(500);
                    white.ColorBackground_EHigh(0);
                    Sleep(500);
                }
                if (note == '\'') {
                    Beep(698, NOTE_LENGTH);
                    white.ColorBackground_FHigh(14);
                    Sleep(500);
                    white.ColorBackground_FHigh(0);
                    Sleep(500);
                }
                if (note == '\\') {
                    Beep(784, NOTE_LENGTH);
                    white.ColorBackground_GHigh(14);
                    Sleep(500);
                    white.ColorBackground_GHigh(0);
                    Sleep(500);
                }
                //rebemol mibemol solbemol labemol sibemol rebemol mibemol solbemol
                // Black Keys
                if (note == 'w') {
                    Beep(277, NOTE_LENGTH);
                    black.ColorBackground_CSharp(14);
                    Sleep(500);
                    black.ColorBackground_CSharp(7);
                    Sleep(500);
                }
                if (note == 'e') {
                    Beep(311, NOTE_LENGTH);
                    black.ColorBackground_DSharp(14);
                    Sleep(500);
                    black.ColorBackground_DSharp(7);
                    Sleep(500);
                }
                if (note == 't') {
                    Beep(370, NOTE_LENGTH);
                    black.ColorBackground_FSharp(14);
                    Sleep(500);
                    black.ColorBackground_FSharp(7);
                    Sleep(500);
                }
                if (note == 'y') {
                    Beep(415, NOTE_LENGTH);
                    black.ColorBackground_GSharp(14);
                    Sleep(500);
                    black.ColorBackground_GSharp(7);
                    Sleep(500);
                }
                if (note == 'u') {
                    Beep(466, NOTE_LENGTH);
                    black.ColorBackground_ASharp(14);
                    Sleep(500);
                    black.ColorBackground_ASharp(7);
                    Sleep(500);
                }
                if (note == 'o') {
                    Beep(554, NOTE_LENGTH);
                    black.ColorBackground_CSharpHigh(14);
                    Sleep(500);
                    black.ColorBackground_CSharpHigh(7);
                    Sleep(500);
                }
                if (note == 'p') {
                    Beep(622, NOTE_LENGTH);
                    black.ColorBackground_DSharpHigh(14);
                    Sleep(500);
                    black.ColorBackground_DSharpHigh(7);
                    Sleep(500);
                }
            }
        }
    };      

    // To remove the blinking cursor in the console
    void ShowConsoleCursor(bool showFlag)
    {
        HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

        CONSOLE_CURSOR_INFO     cursorInfo;

        GetConsoleCursorInfo(out, &cursorInfo);
        cursorInfo.bVisible = showFlag; // set the cursor visibility
        SetConsoleCursorInfo(out, &cursorInfo);
    }

    // Main function to test my code
    void main()
    {
        // Creating an object to access the piano class
        Piano mypiano;
        // Accessing the LoadNotes function to open the mypiano.txt
        mypiano.LoadNotes("c:\\temp\\mynotes.txt");
        // Accessing the PlayNotes function to play notes from the mypiano.txt file
        mypiano.PlayNotes();
    }