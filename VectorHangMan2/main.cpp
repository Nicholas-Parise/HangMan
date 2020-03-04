#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
#include <vector>
#include <fstream>

using namespace std;

void letters(string &answer,vector <string> &charic,vector <string> &wrongchar,int &wrong) {

    int j =0;
    char input;

    cout<<endl;
    cout << "Enter letter: ";
    cin>>input;


    for (int i = 0; i<answer.length(); i++) {

        if((answer.at(i) == 'A' && input == 'A') || (answer.at(i) == 'A' && input == 'a') || (answer.at(i) == 'a' && input == 'A')|| (answer.at(i) == 'a' && input == 'a')) {

            charic[i] = "A";

        } else if((answer.at(i) != 'A' && input == 'A') || (answer.at(i) != 'A' && input == 'a') || (answer.at(i) != 'a' && input == 'A') || (answer.at(i) != 'a' && input == 'a')) {
            j++;

            if(j == answer.length()) {
                wrong++;


                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "A";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'B' && input == 'B') || (answer.at(i) == 'B' && input == 'b') || (answer.at(i) == 'b' && input == 'B') || (answer.at(i) == 'b' && input == 'b')) {

            charic[i] = "B";

        } else if((answer.at(i) != 'B' && input == 'B') || (answer.at(i) != 'B' && input == 'b') || (answer.at(i) != 'b' && input == 'B') || (answer.at(i) != 'b' && input == 'b')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "B";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'C' && input == 'C') || (answer.at(i) == 'C' && input == 'c') || (answer.at(i) == 'c' && input == 'C') || (answer.at(i) == 'c' && input == 'c')) {

            charic[i] = "C";

        } else if((answer.at(i) != 'C' && input == 'C') || (answer.at(i) != 'C' && input == 'c') || (answer.at(i) != 'c' && input == 'C') || (answer.at(i) != 'c' && input == 'c')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "C";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'D' && input == 'D') || (answer.at(i) == 'D' && input == 'd') || (answer.at(i) == 'd' && input == 'D') || (answer.at(i) == 'd' && input == 'd')) {

            charic[i] = "D";

        } else if((answer.at(i) != 'D' && input == 'D') || (answer.at(i) != 'D' && input == 'd') || (answer.at(i) != 'd' && input == 'D') || (answer.at(i) != 'd' && input == 'd')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "D";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'E' && input == 'E') || (answer.at(i) == 'E' && input == 'e') || (answer.at(i) == 'e' && input == 'E') || (answer.at(i) == 'e' && input == 'e')) {

            charic[i] = "E";

        } else if((answer.at(i) != 'E' && input == 'E') || (answer.at(i) != 'E' && input == 'e') || (answer.at(i) != 'e' && input == 'E') || (answer.at(i) != 'e' && input == 'e')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "E";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'F' && input == 'F') || (answer.at(i) == 'F' && input == 'f') || (answer.at(i) == 'f' && input == 'F') || (answer.at(i) == 'f' && input == 'f')) {

            charic[i] = "F";

        } else if((answer.at(i) != 'F' && input == 'F') || (answer.at(i) != 'F' && input == 'f') || (answer.at(i) != 'f' && input == 'F') || (answer.at(i) != 'f' && input == 'f')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "F";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'G' && input == 'G') || (answer.at(i) == 'G' && input == 'g') || (answer.at(i) == 'g' && input == 'G') || (answer.at(i) == 'g' && input == 'g')) {

            charic[i] = "G";

        } else if((answer.at(i) != 'G' && input == 'G') || (answer.at(i) != 'G' && input == 'g') || (answer.at(i) != 'g' && input == 'G') || (answer.at(i) != 'g' && input == 'g')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "G";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'H' && input == 'H') || (answer.at(i) == 'H' && input == 'h') || (answer.at(i) == 'h' && input == 'H') || (answer.at(i) == 'h' && input == 'h')) {

            charic[i] = "H";

        } else if((answer.at(i) != 'H' && input == 'H') || (answer.at(i) != 'H' && input == 'h') || (answer.at(i) != 'h' && input == 'H') || (answer.at(i) != 'h' && input == 'h')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "H";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'I' && input == 'I') || (answer.at(i) == 'I' && input == 'i') || (answer.at(i) == 'i' && input == 'I') || (answer.at(i) == 'i' && input == 'i')) {

            charic[i] = "I";

        } else if((answer.at(i) != 'I' && input == 'I') || (answer.at(i) != 'I' && input == 'i') || (answer.at(i) != 'i' && input == 'I') || (answer.at(i) != 'i' && input == 'i')) {
            j++;
            if(j == answer.length()) {
                wrong++;


                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "I";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'J' && input == 'J') || (answer.at(i) == 'J' && input == 'j') || (answer.at(i) == 'j' && input == 'J') || (answer.at(i) == 'j' && input == 'j')) {

            charic[i] = "J";

        } else if((answer.at(i) != 'J' && input == 'J') || (answer.at(i) != 'J' && input == 'j') || (answer.at(i) != 'j' && input == 'J') || (answer.at(i) != 'j' && input == 'j')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "J";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'K' && input == 'K') || (answer.at(i) == 'K' && input == 'k') || (answer.at(i) == 'k' && input == 'K') || (answer.at(i) == 'k' && input == 'k')) {

            charic[i] = "K";

        } else if((answer.at(i) != 'K' && input == 'K') || (answer.at(i) != 'K' && input == 'k') || (answer.at(i) != 'k' && input == 'K') || (answer.at(i) != 'k' && input == 'k')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "K";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'L' && input == 'L') || (answer.at(i) == 'L' && input == 'l') || (answer.at(i) == 'l' && input == 'L') || (answer.at(i) == 'l' && input == 'l')) {

            charic[i] = "L";

        } else if((answer.at(i) != 'L' && input == 'L') || (answer.at(i) != 'L' && input == 'l') || (answer.at(i) != 'l' && input == 'L') || (answer.at(i) != 'l' && input == 'l')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "L";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'M' && input == 'M') || (answer.at(i) == 'M' && input == 'm') || (answer.at(i) == 'm' && input == 'M') || (answer.at(i) == 'm' && input == 'm')) {

            charic[i] = "M";

        } else if((answer.at(i) != 'M' && input == 'M') || (answer.at(i) != 'M' && input == 'm') || (answer.at(i) != 'm' && input == 'M') || (answer.at(i) != 'm' && input == 'm')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "M";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'N' && input == 'N') || (answer.at(i) == 'N' && input == 'n') || (answer.at(i) == 'n' && input == 'N') || (answer.at(i) == 'n' && input == 'n')) {

            charic[i] = "N";

        } else if((answer.at(i) != 'N' && input == 'N') || (answer.at(i) != 'N' && input == 'n') || (answer.at(i) != 'n' && input == 'N') || (answer.at(i) != 'n' && input == 'n')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "N";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'O' && input == 'O') || (answer.at(i) == 'O' && input == 'o') || (answer.at(i) == 'o' && input == 'O') || (answer.at(i) == 'o' && input == 'o')) {

            charic[i] = "O";

        } else if((answer.at(i) != 'O' && input == 'O') || (answer.at(i) != 'O' && input == 'o') || (answer.at(i) != 'o' && input == 'O') || (answer.at(i) != 'o' && input == 'o')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "O";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'P' && input == 'P') || (answer.at(i) == 'P' && input == 'p') || (answer.at(i) == 'p' && input == 'P') || (answer.at(i) == 'p' && input == 'p')) {

            charic[i] = "P";

        } else if((answer.at(i) != 'P' && input == 'P') || (answer.at(i) != 'P' && input == 'p') || (answer.at(i) != 'p' && input == 'P') || (answer.at(i) != 'p' && input == 'p')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "P";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'Q' && input == 'Q') || (answer.at(i) == 'Q' && input == 'q') || (answer.at(i) == 'q' && input == 'Q') || (answer.at(i) == 'q' && input == 'q')) {

            charic[i] = "Q";

        } else if((answer.at(i) != 'Q' && input == 'Q') || (answer.at(i) != 'Q' && input == 'q') || (answer.at(i) != 'q' && input == 'Q') || (answer.at(i) != 'q' && input == 'q')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "Q";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'R' && input == 'R') || (answer.at(i) == 'R' && input == 'r') || (answer.at(i) == 'r' && input == 'R') || (answer.at(i) == 'r' && input == 'r')) {

            charic[i] = "R";

        } else if((answer.at(i) != 'R' && input == 'R') || (answer.at(i) != 'R' && input == 'r') || (answer.at(i) != 'r' && input == 'R') || (answer.at(i) != 'r' && input == 'r')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "R";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'S' && input == 'S') || (answer.at(i) == 'S' && input == 's') || (answer.at(i) == 's' && input == 'S') || (answer.at(i) == 's' && input == 's')) {

            charic[i] = "S";

        } else if((answer.at(i) != 'S' && input == 'S') || (answer.at(i) != 'S' && input == 's') || (answer.at(i) != 's' && input == 'S') || (answer.at(i) != 's' && input == 's')) {
            j++;
            if(j == answer.length()) {
                wrong++;

                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "S";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'T' && input == 'T') || (answer.at(i) == 'T' && input == 't') || (answer.at(i) == 't' && input == 'T') || (answer.at(i) == 't' && input == 't')) {

            charic[i] = "T";

        } else if((answer.at(i) != 'T' && input == 'T') || (answer.at(i) != 'T' && input == 't') || (answer.at(i) != 't' && input == 'T') || (answer.at(i) != 't' && input == 't')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "T";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'U' && input == 'U') || (answer.at(i) == 'U' && input == 'u') || (answer.at(i) == 'u' && input == 'U') || (answer.at(i) == 'u' && input == 'u')) {

            charic[i] = "U";

        } else if((answer.at(i) != 'U' && input == 'U') || (answer.at(i) != 'U' && input == 'u') || (answer.at(i) != 'u' && input == 'U') || (answer.at(i) != 'u' && input == 'U')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "U";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'V' && input == 'V') || (answer.at(i) == 'V' && input == 'v') || (answer.at(i) == 'v' && input == 'V') || (answer.at(i) == 'v' && input == 'v')) {

            charic[i] = "V";

        } else if((answer.at(i) != 'V' && input == 'V') || (answer.at(i) != 'V' && input == 'v') || (answer.at(i) != 'v' && input == 'V') || (answer.at(i) != 'v' && input == 'V')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "V";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'W' && input == 'W') || (answer.at(i) == 'W' && input == 'w') || (answer.at(i) == 'w' && input == 'W') || (answer.at(i) == 'w' && input == 'w')) {

            charic[i] = "W";

        } else if((answer.at(i) != 'W' && input == 'W') || (answer.at(i) != 'W' && input == 'w') || (answer.at(i) != 'w' && input == 'W') || (answer.at(i) != 'w' && input == 'w')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "W";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'X' && input == 'X') || (answer.at(i) == 'X' && input == 'x') || (answer.at(i) == 'x' && input == 'X') || (answer.at(i) == 'x' && input == 'x')) {

            charic[i] = "X";

        } else if((answer.at(i) != 'X' && input == 'X') || (answer.at(i) != 'X' && input == 'x') || (answer.at(i) != 'x' && input == 'X') || (answer.at(i) != 'x' && input == 'x')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "X";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'Y' && input == 'Y') || (answer.at(i) == 'Y' && input == 'y') || (answer.at(i) == 'y' && input == 'Y') || (answer.at(i) == 'y' && input == 'y')) {

            charic[i] = "Y";

        } else if((answer.at(i) != 'Y' && input == 'Y') || (answer.at(i) != 'Y' && input == 'y') || (answer.at(i) != 'y' && input == 'Y') || (answer.at(i) != 'y' && input == 'y')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "Y";
                        break;
                    }
                }
            }
        }

        if((answer.at(i) == 'Z' && input == 'Z') || (answer.at(i) == 'Z' && input == 'z') || (answer.at(i) == 'z' && input == 'Z') || (answer.at(i) == 'z' && input == 'z')) {

            charic[i] = "Z";

        } else if((answer.at(i) != 'Z' && input == 'Z') || (answer.at(i) != 'Z' && input == 'z') || (answer.at(i) != 'z' && input == 'Z') || (answer.at(i) != 'z' && input == 'z')) {
            j++;
            if(j == answer.length()) {
                wrong++;
                for(int k = 0; k<6; k++) {

                    if(wrongchar[k] == "?") {
                        wrongchar[k] = "Z";
                        break;
                    }
                }
            }
        }
    }
}

void RandomWord(string &answer,vector <int> &already_played,vector <string> &charic,vector <string> &text) {

    int randomW = 0;
    int overide = 0;
    bool once = false;

    do {
        once = false;
        randomW = rand()%(text.size()-1);

        for(int i = 0; i<already_played.size(); i++) {

            if(randomW == already_played[i]) {

                once = true;
            }
        }

        if(once == true) {
            overide++;

            if(overide>20) {
                once = false;
            }
        }

    } while(once == true);


    answer = text[randomW];

    already_played.push_back(randomW);

    charic.resize(answer.length());
}

void print (string &answer,int &wrong,vector <string> &charic,vector <string> &wrongchar) {

    if(wrong >=0) {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
    }

    if(wrong == 0) {

        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
    }
    if(wrong == 1) {
        cout<<"    |      0     "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
    }
    if(wrong == 2) {
        cout<<"    |      0     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |            "<<endl;
    }
    if(wrong == 3) {
        cout<<"    |      0     "<<endl;
        cout<<"    |      |-    "<<endl;
        cout<<"    |            "<<endl;
    }
    if(wrong == 4) {
        cout<<"    |      0     "<<endl;
        cout<<"    |     -|-    "<<endl;
        cout<<"    |            "<<endl;
    }
    if(wrong == 5) {
        cout<<"    |      0     "<<endl;
        cout<<"    |     -|-    "<<endl;
        cout<<"    |     /      "<<endl;
    }
    if(wrong == 6) {
        cout<<"    |      0     "<<endl;
        cout<<"    |     -|-    "<<endl;
        cout<<"    |     / \\   "<<endl;
    }

    if(wrong >=0) {
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }

    cout<<endl;
    cout<<"wrong letters :"<<endl;
    cout<<endl;

    for(int i = 0; i<wrongchar.size(); i++) {

        cout<<wrongchar[i]<<"  ";
    }

    cout<<endl;
    cout<<endl;

    cout<<"The Answer:"<<endl;
    cout<<endl;

    for(int i = 0; i<charic.size(); i++) {
        cout<<charic[i]<<" ";
    }
}

void resetGame(int &wrong,vector <string> &charic,vector <string> &wrongchar) {

    char YNEND;

    cout<<"Endless mode? (Y/N): ";
    cin>>YNEND;

    if(YNEND == 'Y'|| YNEND == 'y') {
        wrong = -1000;
    } else {

        wrong = 0;
        cout<<"Good endless just spoils the fun"<<endl;
    }

    for(int i = 0; i<charic.size(); i++) {
        charic[i] = "_";
    }
    for(int i = 0; i<wrongchar.size(); i++) {
        wrongchar[i] = "?";
    }
}

int main() {

    vector <string> charic;
    vector <string> wrongchar (6);
    vector <string> text(1);
    vector <int> already_played(1);
    already_played[0] = -1;

    string answer;

    char YN;

    int wrong = 0;
    int show_wrong = 0;
    int index = 0;

    bool won = false;

    srand (time(NULL));

//// pushing all the words in Words.txt into a vector

    ifstream readFile;
    readFile.open("Assets/Words.txt");

    if(readFile.is_open()) {

        while(!readFile.eof()) {

            readFile >> text[index];

            if(text[index]!="0") {
                text.resize(text.size()+1);
                index++;
            }
        }
    }
    readFile.close();


////////

    cout<<"\t\t\tWelcome to Hangman!"<<endl;
    cout<<endl;
    cout<<"The goal is to figure out the secret word, by entering letters below"<<endl;
    cout<<"If a letter is incorrect the letter will not fill a space below"<<endl;
    cout<<"With every wrong answer, another body part is added"<<endl;
    cout<<"If the man is hanged before you figure out the answer YOU LOSE!"<<endl;
    cout<<endl;

    RandomWord(answer,already_played,charic,text);
    resetGame(wrong,charic,wrongchar);

    do {

        do {
            print (answer,wrong,charic,wrongchar);

            letters(answer,charic,wrongchar,wrong);

            system("CLS");

            won = true;

            for(int i = 0; i< charic.size(); i++) {

                if(charic[i] == "_") {
                    won = false;
                }
            }

        } while(wrong < 6 && won == false);

        if(won == true) {

            if(wrong == 5)
                show_wrong = 1;
            else if(wrong == 4)
                show_wrong = 2;
            else if(wrong == 3)
                show_wrong = 3;
            else if(wrong == 2)
                show_wrong = 4;
            else if(wrong == 1)
                show_wrong = 5;
            else if(wrong == 0)
                show_wrong = 6;

            print (answer,wrong,charic,wrongchar);

            cin.ignore();
            cin.clear();

            cout<<endl;
            cout<<endl;
            cout<<"YOU WIN!"<<endl;
            cout<<endl;

            if(wrong >=0) {
                cout<<"you had "<<show_wrong<<" guesses remaining"<<endl;
            }
            if(wrong<0) {
                cout<<"you had an infinite amount of guesses remaining"<<endl;
            }
            cout<<endl;
            cout<<"Do you want to play again? (Y/N): ";
            cin>>YN;
        }

        if(wrong == 6) {

            print (answer,wrong,charic,wrongchar);

            cin.ignore();
            cin.clear();

            cout<<endl;
            cout<<"you lose! the word was "<<answer<<endl;
            cout<<endl;
            cout<<"Do you want to play again? (Y/N): ";
            cin>>YN;
        }

        if(YN== 'Y'|| YN== 'y') {
            system("CLS");

            RandomWord(answer,already_played,charic,text);
            resetGame(wrong,charic,wrongchar);

            show_wrong = 0;
            won = false;
        }


    } while(YN== 'Y'|| YN== 'y');

    return 0;
}
