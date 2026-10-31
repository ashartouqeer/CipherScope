
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string ciphertext;

    int letterCounts[26] = {0};
    char letters[26];

    int totalLetters = 0;
    int choice;

    cout << "============================================\n";
    cout << "       CIPHERSCOPE - CYBER SECURITY TOOL\n";
    cout << "============================================\n";

    cout << "\nEnter the encrypted text:\n";
    getline(cin, ciphertext);

    // Convert lowercase letters to uppercase
    // and calculate letter frequencies

    for (int i = 0; i < ciphertext.length(); i++) {

        char ch = ciphertext[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }

        if (ch >= 'A' && ch <= 'Z') {

            int index = ch - 'A';

            letterCounts[index]++;
            totalLetters++;
        }
    }

    cout << "\nChoose an analysis method:\n";
    cout << "1. Letter Frequency Analysis\n";
    cout << "2. Caesar Cipher Brute Force\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    // OPTION 1: FREQUENCY ANALYSIS

    if (choice == 1) {

        if (totalLetters == 0) {

            cout << "\nNo alphabetic characters found!\n";

        } else {

            // Store alphabet letters

            for (int i = 0; i < 26; i++) {
                letters[i] = 'A' + i;
            }

            // Sort letters according to frequency

            for (int i = 0; i < 25; i++) {

                for (int j = i + 1; j < 26; j++) {

                    if (letterCounts[j] > letterCounts[i]) {

                        int temp = letterCounts[i];
                        letterCounts[i] = letterCounts[j];
                        letterCounts[j] = temp;

                        char tempLetter = letters[i];
                        letters[i] = letters[j];
                        letters[j] = tempLetter;
                    }
                }
            }

            cout << "\n============================================\n";
            cout << "       LETTER FREQUENCY ANALYSIS\n";
            cout << "============================================\n";

            cout << fixed << setprecision(2);

            for (int i = 0; i < 26; i++) {

                if (letterCounts[i] > 0) {

                    double percentage =
                        (double)letterCounts[i] / totalLetters * 100;

                    cout << "Letter [" << letters[i] << "] "
                         << "Count: " << letterCounts[i]
                         << " | Frequency: " << percentage << "% ";

                    cout << "[";

                    for (int j = 0; j < (int)percentage; j++) {
                        cout << "#";
                    }

                    cout << "]\n";
                }
            }

            cout << "\nTotal letters analyzed: " << totalLetters << endl;

            cout << "\nCryptanalysis Strategy:\n";
            cout << "Compare frequent ciphertext letters with\n";
            cout << "common English letters such as E, T and A.\n";
        }
    }

    // OPTION 2: CAESAR CIPHER BRUTE FORCE

    else if (choice == 2) {

        cout << "\n============================================\n";
        cout << "        CAESAR CIPHER BRUTE FORCE\n";
        cout << "============================================\n";

        for (int shift = 0; shift < 26; shift++) {

            cout << "\nShift " << shift << ": ";

            for (int i = 0; i < ciphertext.length(); i++) {

                char ch = ciphertext[i];

                if (ch >= 'a' && ch <= 'z') {
                    ch = ch - 32;
                }

                if (ch >= 'A' && ch <= 'Z') {

                    char decrypted =
                        'A' + (ch - 'A' - shift + 26) % 26;

                    cout << decrypted;

                } else {

                    cout << ch;
                }
            }

            cout << endl;
        }
    }

    else {

        cout << "\nInvalid choice!\n";
    }

    cout << "\n============================================\n";
    cout << "          ANALYSIS COMPLETED\n";
    cout << "============================================\n";

    return 0;
}
