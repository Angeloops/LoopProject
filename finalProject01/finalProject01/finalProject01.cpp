
#include <iostream>
using namespace std;

int main()
{
    char iterate = 'Y';
        
    for (int i = 0; iterate != 'N'; i++)
    {
        char characterSet[10] = "";
        cin.getline(characterSet, 10);
        int tenLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64 + (int)characterSet[3] - 64 + (int)characterSet[4] - 64 + (int)characterSet[5] - 64 + (int)characterSet[6] + (int)characterSet[7] + (int)characterSet[8] + (int)characterSet[9];
        int nineLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64 + (int)characterSet[3] - 64 + (int)characterSet[4] - 64 + (int)characterSet[5] - 64 + (int)characterSet[6] + (int)characterSet[7] + (int)characterSet[8];
        int eightLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64 + (int)characterSet[3] - 64 + (int)characterSet[4] - 64 + (int)characterSet[5] - 64 + (int)characterSet[6] + (int)characterSet[7];
        int sevenLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64 + (int)characterSet[3] - 64 + (int)characterSet[4] - 64 + (int)characterSet[5] - 64 + (int)characterSet[6];
        int sixLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64 + (int)characterSet[3] - 64 + (int)characterSet[4] - 64 + (int)characterSet[5];
        int fiveLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64 + (int)characterSet[3] - 64 + (int)characterSet[4];
        int fourLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64 + (int)characterSet[3] - 64;
        int threeLetter = (int)characterSet[0] - 64 + (int)characterSet[1] - 64 + (int)characterSet[2] - 64;
        if (characterSet[2] > 0) {
            cout << characterSet << endl;
            cout << threeLetter;
        }
        else if (characterSet[3] > 0) {
            cout << characterSet << endl;
            cout << fourLetter;
        }
        else if (characterSet[4] > 0) {
            cout << characterSet << endl;
            cout << fiveLetter;
        }
        else if (characterSet[5] > 0) {
            cout << characterSet << endl;
            cout << sixLetter;
        }
        else if (characterSet[6] > 0) {
            cout << characterSet << endl;
            cout << sevenLetter;
        }
        else if (characterSet[7] > 0) {
            cout << characterSet << endl;
            cout << eightLetter;
        }
        else if (characterSet[8] > 0) {
            cout << characterSet << endl;
            cout << nineLetter;
        }
        else if (characterSet[9] > 0) {
            cout << characterSet << endl;
            cout << tenLetter;
        }
        cout << "\nwould you like to try again?[Y/N]: ";
        cin >> iterate;

    }
    
    return 0;
      
}


