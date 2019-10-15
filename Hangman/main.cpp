#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>


using namespace std;

string answer;
int wrong;
int show_wrong;

string charic1, charic2, charic3, charic4, charic5, charic6, charic7, charic8;
string wrong1, wrong2, wrong3, wrong4, wrong5, wrong6;



void letters(string answer,char help)
{

    int j;
    j = 0;


    for (int i = 0; i<answer.length(); i++)
    {


        if(answer.at(i) == 'A' && help == 'A' || answer.at(i) == 'A' && help == 'a'|| answer.at(i) == 'a' && help == 'A'|| answer.at(i) == 'a' && help == 'a')
        {


            if(i == 0)
            {
                charic1 = "A";

            }
            else if(i == 1)
            {
                charic2 = "A";

            }
            else if(i == 2)
            {
                charic3 = "A";

            }
            else if(i == 3)
            {
                charic4 = "A";

            }
            else if(i == 4)
            {
                charic5 = "A";

            }
            else if(i == 5)
            {
                charic6 = "A";

            }
            else if(i == 6)
            {
                charic7 = "A";

            }
            else if(i == 7)
            {
                charic8 = "A";

            }

        }
        else  if(answer.at(i) != 'A' && help == 'A' || answer.at(i) != 'A' && help == 'a'|| answer.at(i) != 'a' && help == 'A'|| answer.at(i) != 'a' && help == 'a')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;


                if(wrong1 == "?")
                {

                    wrong1 = "A";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "A";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "A";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "A";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "A";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "A";
                }


            }
        }


        if(answer.at(i) == 'B' && help == 'B' || answer.at(i) == 'B' && help == 'b'|| answer.at(i) == 'b' && help == 'B'|| answer.at(i) == 'b' && help == 'b')
        {

            if(i == 0)
            {
                charic1 = "B";
            }
            else if(i == 1)
            {
                charic2 = "B";
            }
            else if(i == 2)
            {
                charic3 = "B";
            }
            else if(i == 3)
            {
                charic4 = "B";
            }
            else if(i == 4)
            {
                charic5 = "B";
            }
            else if(i == 5)
            {
                charic6 = "B";
            }
            else if(i == 6)
            {
                charic7 = "B";
            }
            else if(i == 7)
            {
                charic8 = "B";
            }


        }
        else if(answer.at(i) != 'B' && help == 'B' || answer.at(i) != 'B' && help == 'b'|| answer.at(i) != 'b' && help == 'B'|| answer.at(i) != 'b' && help == 'b')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "B";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "B";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "B";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "B";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "B";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "B";
                }


            }
        }


        if(answer.at(i) == 'C' && help == 'C' || answer.at(i) == 'C' && help == 'c'|| answer.at(i) == 'c' && help == 'C'|| answer.at(i) == 'c' && help == 'c')
        {

            if(i == 0)
            {
                charic1 = "C";
            }
            else if(i == 1)
            {
                charic2 = "C";
            }
            else if(i == 2)
            {
                charic3 = "C";
            }
            else if(i == 3)
            {
                charic4 = "C";
            }
            else if(i == 4)
            {
                charic5 = "C";
            }
            else if(i == 5)
            {
                charic6 = "C";
            }
            else if(i == 6)
            {
                charic7 = "C";
            }
            else if(i == 7)
            {
                charic8 = "C";
            }


        }
        else  if(answer.at(i) != 'C' && help == 'C' || answer.at(i) != 'C' && help == 'c'|| answer.at(i) != 'c' && help == 'C'|| answer.at(i) != 'c' && help == 'c')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "C";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "C";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "C";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "C";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "C";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "C";
                }


            }
        }


        if(answer.at(i) == 'D' && help == 'D' || answer.at(i) == 'D' && help == 'd'|| answer.at(i) == 'd' && help == 'D'|| answer.at(i) == 'd' && help == 'd')
        {

            if(i == 0)
            {
                charic1 = "D";
            }
            else if(i == 1)
            {
                charic2 = "D";
            }
            else if(i == 2)
            {
                charic3 = "D";
            }
            else if(i == 3)
            {
                charic4 = "D";
            }
            else if(i == 4)
            {
                charic5 = "D";
            }
            else if(i == 5)
            {
                charic6 = "D";
            }
            else if(i == 6)
            {
                charic7 = "D";
            }
            else if(i == 7)
            {
                charic8 = "D";
            }


        }
        else  if(answer.at(i) != 'D' && help == 'D' || answer.at(i) != 'D' && help == 'd'|| answer.at(i) != 'd' && help == 'D'|| answer.at(i) != 'd' && help == 'd')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "D";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "D";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "D";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "D";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "D";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "D";
                }


            }
        }


        if(answer.at(i) == 'E' && help == 'E' || answer.at(i) == 'E' && help == 'e'|| answer.at(i) == 'e' && help == 'E'|| answer.at(i) == 'e' && help == 'e')
        {

            if(i == 0)
            {
                charic1 = "E";
            }
            else if(i == 1)
            {
                charic2 = "E";
            }
            else if(i == 2)
            {
                charic3 = "E";
            }
            else if(i == 3)
            {
                charic4 = "E";
            }
            else if(i == 4)
            {
                charic5 = "E";
            }
            else if(i == 5)
            {
                charic6 = "E";
            }
            else if(i == 6)
            {
                charic7 = "E";
            }
            else if(i == 7)
            {
                charic8 = "E";
            }

        }
        else  if(answer.at(i) != 'E' && help == 'E' || answer.at(i) != 'E' && help == 'e'|| answer.at(i) != 'e' && help == 'E'|| answer.at(i) != 'e' && help == 'e')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "E";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "E";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "E";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "E";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "E";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "E";
                }

            }
        }

        if(answer.at(i) == 'F' && help == 'F' || answer.at(i) == 'F' && help == 'f'|| answer.at(i) == 'f' && help == 'F'|| answer.at(i) == 'f' && help == 'f')
        {


            if(i == 0)
            {
                charic1 = "F";
            }
            else if(i == 1)
            {
                charic2 = "F";
            }
            else if(i == 2)
            {
                charic3 = "F";
            }
            else if(i == 3)
            {
                charic4 = "F";
            }
            else if(i == 4)
            {
                charic5 = "F";
            }
            else if(i == 5)
            {
                charic6 = "F";
            }
            else if(i == 6)
            {
                charic7 = "F";
            }
            else if(i == 7)
            {
                charic8 = "F";
            }

        }
        else  if(answer.at(i) != 'F' && help == 'F' || answer.at(i) != 'F' && help == 'f'|| answer.at(i) != 'f' && help == 'F'|| answer.at(i) != 'f' && help == 'f')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "F";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "F";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "F";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "F";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "F";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "F";
                }



            }
        }


        if(answer.at(i) == 'G' && help == 'G' || answer.at(i) == 'G' && help == 'g'|| answer.at(i) == 'g' && help == 'G'|| answer.at(i) == 'g' && help == 'g')
        {

            if(i == 0)
            {
                charic1 = "G";
            }
            else if(i == 1)
            {
                charic2 = "G";
            }
            else if(i == 2)
            {
                charic3 = "G";
            }
            else if(i == 3)
            {
                charic4 = "G";
            }
            else if(i == 4)
            {
                charic5 = "G";
            }
            else if(i == 5)
            {
                charic6 = "G";
            }
            else if(i == 6)
            {
                charic7 = "G";
            }
            else if(i == 7)
            {
                charic8 = "G";
            }


        }
        else  if(answer.at(i) != 'G' && help == 'G' || answer.at(i) != 'G' && help == 'g'|| answer.at(i) != 'g' && help == 'G'|| answer.at(i) != 'g' && help == 'g')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "G";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "G";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "G";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "G";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "G";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "G";
                }


            }
        }

        if(answer.at(i) == 'H' && help == 'H' || answer.at(i) == 'H' && help == 'h'|| answer.at(i) == 'h' && help == 'H'|| answer.at(i) == 'h' && help == 'h')
        {

            if(i == 0)
            {
                charic1 = "H";
            }
            else if(i == 1)
            {
                charic2 = "H";
            }
            else if(i == 2)
            {
                charic3 = "H";
            }
            else if(i == 3)
            {
                charic4 = "H";
            }
            else if(i == 4)
            {
                charic5 = "H";
            }
            else if(i == 5)
            {
                charic6 = "H";
            }
            else if(i == 6)
            {
                charic7 = "H";
            }
            else if(i == 7)
            {
                charic8 = "H";
            }


        }
        else  if(answer.at(i) != 'H' && help == 'H' || answer.at(i) != 'H' && help == 'h'|| answer.at(i) != 'h' && help == 'H'|| answer.at(i) != 'h' && help == 'h')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "H";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "H";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "H";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "H";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "H";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "H";
                }



            }
        }


        if(answer.at(i) == 'I' && help == 'I' || answer.at(i) == 'I' && help == 'i'|| answer.at(i) == 'i' && help == 'I'|| answer.at(i) == 'i' && help == 'i')
        {


            if(i == 0)
            {
                charic1 = "I";
            }
            else if(i == 1)
            {
                charic2 = "I";
            }
            else if(i == 2)
            {
                charic3 = "I";
            }
            else if(i == 3)
            {
                charic4 = "I";
            }
            else if(i == 4)
            {
                charic5 = "I";
            }
            else if(i == 5)
            {
                charic6 = "I";
            }
            else if(i == 6)
            {
                charic7 = "I";
            }
            else if(i == 7)
            {
                charic8 = "I";
            }

        }
        else  if(answer.at(i) != 'I' && help == 'I' || answer.at(i) != 'I' && help == 'i'|| answer.at(i) != 'i' && help == 'I'|| answer.at(i) != 'i' && help == 'i')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;


                if(wrong1 == "?")
                {

                    wrong1 = "I";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "I";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "I";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "I";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "I";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "I";
                }

            }
        }


        if(answer.at(i) == 'J' && help == 'J' || answer.at(i) == 'J' && help == 'j'|| answer.at(i) == 'j' && help == 'J'|| answer.at(i) == 'j' && help == 'j')
        {


            if(i == 0)
            {
                charic1 = "J";
            }
            else if(i == 1)
            {
                charic2 = "J";
            }
            else if(i == 2)
            {
                charic3 = "J";
            }
            else if(i == 3)
            {
                charic4 = "J";
            }
            else if(i == 4)
            {
                charic5 = "J";
            }
            else if(i == 5)
            {
                charic6 = "J";
            }
            else if(i == 6)
            {
                charic7 = "J";
            }
            else if(i == 7)
            {
                charic8 = "J";
            }


        }
        else  if(answer.at(i) != 'J' && help == 'J' || answer.at(i) != 'J' && help == 'j'|| answer.at(i) != 'j' && help == 'J'|| answer.at(i) != 'j' && help == 'j')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "J";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "J";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "J";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "J";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "J";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "J";
                }



            }
        }


        if(answer.at(i) == 'K' && help == 'K' || answer.at(i) == 'K' && help == 'k'|| answer.at(i) == 'k' && help == 'K'|| answer.at(i) == 'k' && help == 'k')
        {

            if(i == 0)
            {
                charic1 = "K";
            }
            else if(i == 1)
            {
                charic2 = "K";
            }
            else if(i == 2)
            {
                charic3 = "K";
            }
            else if(i == 3)
            {
                charic4 = "K";
            }
            else if(i == 4)
            {
                charic5 = "K";
            }
            else if(i == 5)
            {
                charic6 = "K";
            }
            else if(i == 6)
            {
                charic7 = "K";
            }
            else if(i == 7)
            {
                charic8 = "K";
            }


        }
        else  if(answer.at(i) != 'K' && help == 'K' || answer.at(i) != 'K' && help == 'k'|| answer.at(i) != 'k' && help == 'K'|| answer.at(i) != 'k' && help == 'k')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;

                if(wrong1 == "?")
                {

                    wrong1 = "K";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "K";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "K";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "K";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "K";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "K";
                }



            }
        }


        if(answer.at(i) == 'L' && help == 'L' || answer.at(i) == 'L' && help == 'l'|| answer.at(i) == 'l' && help == 'L'|| answer.at(i) == 'l' && help == 'l')
        {

            if(i == 0)
            {
                charic1 = "L";
            }
            else if(i == 1)
            {
                charic2 = "L";
            }
            else if(i == 2)
            {
                charic3 = "L";
            }
            else if(i == 3)
            {
                charic4 = "L";
            }
            else if(i == 4)
            {
                charic5 = "L";
            }
            else if(i == 5)
            {
                charic6 = "L";
            }
            else if(i == 6)
            {
                charic7 = "L";
            }
            else if(i == 7)
            {
                charic8 = "L";
            }


        }
        else  if(answer.at(i) != 'L' && help == 'L' || answer.at(i) != 'L' && help == 'l'|| answer.at(i) != 'l' && help == 'L'|| answer.at(i) != 'l' && help == 'l')
        {
            j++;
            if(j == answer.length())
            {
                wrong++;
                if(wrong1 == "?")
                {

                    wrong1 = "L";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "L";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "L";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "L";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "L";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "L";
                }

            }
        }


        if(answer.at(i) == 'M' && help == 'M' || answer.at(i) == 'M' && help == 'm'|| answer.at(i) == 'm' && help == 'M'|| answer.at(i) == 'm' && help == 'm')
        {

            if(i == 0)
            {
                charic1 = "M";
            }
            else if(i == 1)
            {
                charic2 = "M";
            }
            else if(i == 2)
            {
                charic3 = "M";
            }
            else if(i == 3)
            {
                charic4 = "M";
            }
            else if(i == 4)
            {
                charic5 = "M";
            }
            else if(i == 5)
            {
                charic6 = "M";
            }
            else if(i == 6)
            {
                charic7 = "M";
            }
            else if(i == 7)
            {
                charic8 = "M";
            }



        }
        else  if(answer.at(i) != 'M' && help == 'M' || answer.at(i) != 'M' && help == 'm'|| answer.at(i) != 'm' && help == 'M'|| answer.at(i) != 'm' && help == 'm')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "M";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "M";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "M";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "M";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "M";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "M";
                }

                wrong++;
            }
        }


        if(answer.at(i) == 'N' && help == 'N' || answer.at(i) == 'N' && help == 'n'|| answer.at(i) == 'n' && help == 'N'|| answer.at(i) == 'n' && help == 'n')
        {


            if(i == 0)
            {
                charic1 = "N";
            }
            else if(i == 1)
            {
                charic2 = "N";
            }
            else if(i == 2)
            {
                charic3 = "N";
            }
            else if(i == 3)
            {
                charic4 = "N";
            }
            else if(i == 4)
            {
                charic5 = "N";
            }
            else if(i == 5)
            {
                charic6 = "N";
            }
            else if(i == 6)
            {
                charic7 = "N";
            }
            else if(i == 7)
            {
                charic8 = "N";
            }



        }
        else  if(answer.at(i) != 'N' && help == 'N' || answer.at(i) != 'N' && help == 'n'|| answer.at(i) != 'n' && help == 'N'|| answer.at(i) != 'n' && help == 'n')
        {
            j++;
            if(j == answer.length())
            {


                if(wrong1 == "?")
                {

                    wrong1 = "N";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "N";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "N";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "N";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "N";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "N";
                }

                wrong++;
            }
        }


        if(answer.at(i) == 'O' && help == 'O' || answer.at(i) == 'O' && help == 'o'|| answer.at(i) == 'o' && help == 'O'|| answer.at(i) == 'o' && help == 'o')
        {


            if(i == 0)
            {
                charic1 = "O";
            }
            else if(i == 1)
            {
                charic2 = "O";
            }
            else if(i == 2)
            {
                charic3 = "O";
            }
            else if(i == 3)
            {
                charic4 = "O";
            }
            else if(i == 4)
            {
                charic5 = "O";
            }
            else if(i == 5)
            {
                charic6 = "O";
            }
            else if(i == 6)
            {
                charic7 = "O";
            }
            else if(i == 7)
            {
                charic8 = "O";
            }


        }
        else  if(answer.at(i) != 'O' && help == 'O' || answer.at(i) != 'O' && help == 'o'|| answer.at(i) != 'o' && help == 'O'|| answer.at(i) != 'o' && help == 'o')
        {
            j++;
            if(j == answer.length())
            {


                if(wrong1 == "?")
                {

                    wrong1 = "O";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "O";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "O";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "O";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "O";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "O";
                }

                wrong++;
            }
        }


        if(answer.at(i) == 'P' && help == 'P' || answer.at(i) == 'P' && help == 'p'|| answer.at(i) == 'p' && help == 'P'|| answer.at(i) == 'p' && help == 'p')
        {

            if(i == 0)
            {
                charic1 = "P";
            }
            else if(i == 1)
            {
                charic2 = "P";
            }
            else if(i == 2)
            {
                charic3 = "P";
            }
            else if(i == 3)
            {
                charic4 = "P";
            }
            else if(i == 4)
            {
                charic5 = "P";
            }
            else if(i == 5)
            {
                charic6 = "P";
            }
            else if(i == 6)
            {
                charic7 = "P";
            }
            else if(i == 7)
            {
                charic8 = "P";
            }



        }
        else  if(answer.at(i) != 'P' && help == 'P' || answer.at(i) != 'P' && help == 'p'|| answer.at(i) != 'p' && help == 'P'|| answer.at(i) != 'p' && help == 'p')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "P";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "P";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "P";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "P";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "P";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "P";
                }

                wrong++;
            }
        }


        if(answer.at(i) == 'Q' && help == 'Q' || answer.at(i) == 'Q' && help == 'q'|| answer.at(i) == 'q' && help == 'Q'|| answer.at(i) == 'q' && help == 'q')
        {

            if(i == 0)
            {
                charic1 = "Q";
            }
            else if(i == 1)
            {
                charic2 = "Q";
            }
            else if(i == 2)
            {
                charic3 = "Q";
            }
            else if(i == 3)
            {
                charic4 = "Q";
            }
            else if(i == 4)
            {
                charic5 = "Q";
            }
            else if(i == 5)
            {
                charic6 = "Q";
            }
            else if(i == 6)
            {
                charic7 = "Q";
            }
            else if(i == 7)
            {
                charic8 = "Q";
            }


        }
        else  if(answer.at(i) != 'Q' && help == 'Q' || answer.at(i) != 'Q' && help == 'q'|| answer.at(i) != 'q' && help == 'Q'|| answer.at(i) != 'q' && help == 'q')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "Q";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "Q";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "Q";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "Q";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "Q";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "Q";
                }

                wrong++;
            }
        }

        if(answer.at(i) == 'R' && help == 'R' || answer.at(i) == 'R' && help == 'r'|| answer.at(i) == 'r' && help == 'R'|| answer.at(i) == 'r' && help == 'r')
        {

            if(i == 0)
            {
                charic1 = "R";
            }
            else if(i == 1)
            {
                charic2 = "R";
            }
            else if(i == 2)
            {
                charic3 = "R";
            }
            else if(i == 3)
            {
                charic4 = "R";
            }
            else if(i == 4)
            {
                charic5 = "R";
            }
            else if(i == 5)
            {
                charic6 = "R";
            }
            else if(i == 6)
            {
                charic7 = "R";
            }
            else if(i == 7)
            {
                charic8 = "R";
            }



        }
        else  if(answer.at(i) != 'R' && help == 'R' || answer.at(i) != 'R' && help == 'r'|| answer.at(i) != 'r' && help == 'R'|| answer.at(i) != 'r' && help == 'r')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "R";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "R";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "R";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "R";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "R";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "R";
                }


                wrong++;
            }
        }

        if(answer.at(i) == 'S' && help == 'S' || answer.at(i) == 'S' && help == 's'|| answer.at(i) == 's' && help == 'S'|| answer.at(i) == 's' && help == 's')
        {

            if(i == 0)
            {
                charic1 = "S";
            }
            else if(i == 1)
            {
                charic2 = "S";
            }
            else if(i == 2)
            {
                charic3 = "S";
            }
            else if(i == 3)
            {
                charic4 = "S";
            }
            else if(i == 4)
            {
                charic5 = "S";
            }
            else if(i == 5)
            {
                charic6 = "S";
            }
            else if(i == 6)
            {
                charic7 = "S";
            }
            else if(i == 7)
            {
                charic8 = "S";
            }



        }
        else  if(answer.at(i) != 'S' && help == 'S' || answer.at(i) != 'S' && help == 's'|| answer.at(i) != 's' && help == 'S'|| answer.at(i) != 's' && help == 's')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "S";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "S";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "S";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "S";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "S";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "S";
                }


                wrong++;
            }
        }


        if(answer.at(i) == 'T' && help == 'T' || answer.at(i) == 'T' && help == 't'|| answer.at(i) == 't' && help == 'T'|| answer.at(i) == 't' && help == 't')
        {

            if(i == 0)
            {
                charic1 = "T";
            }
            else if(i == 1)
            {
                charic2 = "T";
            }
            else if(i == 2)
            {
                charic3 = "T";
            }
            else if(i == 3)
            {
                charic4 = "T";
            }
            else if(i == 4)
            {
                charic5 = "T";
            }
            else if(i == 5)
            {
                charic6 = "T";
            }
            else if(i == 6)
            {
                charic7 = "T";
            }
            else if(i == 7)
            {
                charic8 = "T";
            }



        }
        else  if(answer.at(i) != 'T' && help == 'T' || answer.at(i) != 'T' && help == 't'|| answer.at(i) != 't' && help == 'T'|| answer.at(i) != 't' && help == 't')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "T";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "T";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "T";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "T";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "T";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "T";
                }

                wrong++;
            }
        }


        if(answer.at(i) == 'U' && help == 'U' || answer.at(i) == 'U' && help == 'u'|| answer.at(i) == 'u' && help == 'U'|| answer.at(i) == 'u' && help == 'u')
        {

            if(i == 0)
            {
                charic1 = "U";
            }
            else if(i == 1)
            {
                charic2 = "U";
            }
            else if(i == 2)
            {
                charic3 = "U";
            }
            else if(i == 3)
            {
                charic4 = "U";
            }
            else if(i == 4)
            {
                charic5 = "U";
            }
            else if(i == 5)
            {
                charic6 = "U";
            }
            else if(i == 6)
            {
                charic7 = "U";
            }
            else if(i == 7)
            {
                charic8 = "U";
            }



        }
        else  if(answer.at(i) != 'U' && help == 'U' || answer.at(i) != 'U' && help == 'u'|| answer.at(i) != 'u' && help == 'U'|| answer.at(i) != 'u' && help == 'U')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "U";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "U";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "U";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "U";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "U";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "U";
                }

                wrong++;
            }
        }


        if(answer.at(i) == 'V' && help == 'V' || answer.at(i) == 'V' && help == 'v'|| answer.at(i) == 'v' && help == 'V'|| answer.at(i) == 'v' && help == 'v')
        {

            if(i == 0)
            {
                charic1 = "V";
            }
            else if(i == 1)
            {
                charic2 = "V";
            }
            else if(i == 2)
            {
                charic3 = "V";
            }
            else if(i == 3)
            {
                charic4 = "V";
            }
            else if(i == 4)
            {
                charic5 = "V";
            }
            else if(i == 5)
            {
                charic6 = "V";
            }
            else if(i == 6)
            {
                charic7 = "V";
            }
            else if(i == 7)
            {
                charic8 = "V";
            }


        }
        else  if(answer.at(i) != 'V' && help == 'V' || answer.at(i) != 'V' && help == 'v'|| answer.at(i) != 'v' && help == 'V'|| answer.at(i) != 'v' && help == 'v')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "V";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "V";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "V";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "V";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "V";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "V";
                }

                wrong++;
            }
        }



        if(answer.at(i) == 'W' && help == 'W' || answer.at(i) == 'W' && help == 'w'|| answer.at(i) == 'w' && help == 'W'|| answer.at(i) == 'w' && help == 'w')
        {

            if(i == 0)
            {
                charic1 = "W";
            }
            else if(i == 1)
            {
                charic2 = "W";
            }
            else if(i == 2)
            {
                charic3 = "W";
            }
            else if(i == 3)
            {
                charic4 = "W";
            }
            else if(i == 4)
            {
                charic5 = "W";
            }
            else if(i == 5)
            {
                charic6 = "W";
            }
            else if(i == 6)
            {
                charic7 = "W";
            }
            else if(i == 7)
            {
                charic8 = "W";
            }



        }
        else  if(answer.at(i) != 'W' && help == 'W' || answer.at(i) != 'W' && help == 'w'|| answer.at(i) != 'w' && help == 'W'|| answer.at(i) != 'w' && help == 'w')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "W";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "W";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "W";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "W";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "W";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "W";
                }

                wrong++;
            }
        }


        if(answer.at(i) == 'X' && help == 'X' || answer.at(i) == 'X' && help == 'x'|| answer.at(i) == 'x' && help == 'X'|| answer.at(i) == 'x' && help == 'x')
        {

            if(i == 0)
            {
                charic1 = "X";
            }
            else if(i == 1)
            {
                charic2 = "X";
            }
            else if(i == 2)
            {
                charic3 = "X";
            }
            else if(i == 3)
            {
                charic4 = "X";
            }
            else if(i == 4)
            {
                charic5 = "X";
            }
            else if(i == 5)
            {
                charic6 = "X";
            }
            else if(i == 6)
            {
                charic7 = "X";
            }
            else if(i == 7)
            {
                charic8 = "X";
            }


        }
        else  if(answer.at(i) != 'X' && help == 'X' || answer.at(i) != 'X' && help == 'x'|| answer.at(i) != 'x' && help == 'X'|| answer.at(i) != 'x' && help == 'x')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "X";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "X";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "X";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "X";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "X";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "X";
                }


                wrong++;
            }
        }


        if(answer.at(i) == 'Y' && help == 'Y' || answer.at(i) == 'Y' && help == 'y'|| answer.at(i) == 'y' && help == 'Y'|| answer.at(i) == 'y' && help == 'y')
        {

            if(i == 0)
            {
                charic1 = "Y";
            }
            else if(i == 1)
            {
                charic2 = "Y";
            }
            else if(i == 2)
            {
                charic3 = "Y";
            }
            else if(i == 3)
            {
                charic4 = "Y";
            }
            else if(i == 4)
            {
                charic5 = "Y";
            }
            else if(i == 5)
            {
                charic6 = "Y";
            }
            else if(i == 6)
            {
                charic7 = "Y";
            }
            else if(i == 7)
            {
                charic8 = "Y";
            }


        }
        else  if(answer.at(i) != 'Y' && help == 'Y' || answer.at(i) != 'Y' && help == 'y'|| answer.at(i) != 'y' && help == 'Y'|| answer.at(i) != 'y' && help == 'y')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "Y";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "Y";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "Y";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "Y";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "y";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "Y";
                }


                wrong++;
            }
        }

        if(answer.at(i) == 'Z' && help == 'Z' || answer.at(i) == 'Z' && help == 'z'|| answer.at(i) == 'z' && help == 'Z'|| answer.at(i) == 'z' && help == 'z')
        {

            if(i == 0)
            {
                charic1 = "Z";
            }
            else if(i == 1)
            {
                charic2 = "Z";
            }
            else if(i == 2)
            {
                charic3 = "Z";
            }
            else if(i == 3)
            {
                charic4 = "Z";
            }
            else if(i == 4)
            {
                charic5 = "Z";
            }
            else if(i == 5)
            {
                charic6 = "Z";
            }
            else if(i == 6)
            {
                charic7 = "Z";
            }
            else if(i == 7)
            {
                charic8 = "Z";
            }


        }
        else  if(answer.at(i) != 'Z' && help == 'Z' || answer.at(i) != 'Z' && help == 'z'|| answer.at(i) != 'z' && help == 'Z'|| answer.at(i) != 'z' && help == 'z')
        {
            j++;
            if(j == answer.length())
            {

                if(wrong1 == "?")
                {

                    wrong1 = "Z";
                }

                else if(wrong2 == "?")
                {

                    wrong2 = "Z";
                }
                else if(wrong3 == "?")
                {

                    wrong3 = "Z";
                }
                else if(wrong4 == "?")
                {

                    wrong4 = "Z";
                }
                else if(wrong5 == "?")
                {

                    wrong5 = "Z";
                }
                else if(wrong6 == "?")
                {

                    wrong6 = "Z";
                }


                wrong++;
            }
        }


    }

    system("CLS");


}


void RandomWord()
{

    int randomW = 0;
    char YNEND;

    srand (time(NULL));
    randomW = rand()%100+1;


    cout<<"Endless mode? (Y/N): ";
    cin>>YNEND;


    if(YNEND == 'Y'|| YNEND == 'y')
    {
        wrong = -100;
    }
    else
    {

        cout<<"Good endless just spoils the fun"<<endl;
    }


    if(randomW == 1)
        answer = "Awkward";
    else if(randomW == 2)
        answer = "Bagpipe";
    else if(randomW == 3)
        answer = "Banjo";
    else if(randomW == 4)
        answer = "Bungler";
    else if(randomW == 5)
        answer = "Croquet";
    else if(randomW == 6)
        answer = "Crypt";
    else if(randomW == 7)
        answer = "Dwarves";
    else if(randomW == 8)
        answer = "Fervid";
    else if(randomW == 9)
        answer = "Fishhook";
    else if(randomW == 10)
        answer = "Gazebo";
    else if(randomW == 11)
        answer = "Haiku";
    else if(randomW == 12)
        answer = "Ivory";
    else if(randomW == 13)
        answer = "Jazzy";
    else if(randomW == 14)
        answer = "Jiffy";
    else if(randomW == 15)
        answer = "Jinx";
    else if(randomW == 16)
        answer = "Jukebox";
    else if(randomW == 17)
        answer = "Kayak";
    else if(randomW == 18)
        answer = "Kiosk";
    else if(randomW == 19)
        answer = "Mystify";
    else if(randomW == 20)
        answer = "Oxygen";
    else if(randomW == 21)
        answer = "Pajama";
    else if(randomW == 22)
        answer = "Pixel";
    else if(randomW == 23)
        answer = "Rogue";
    else if(randomW == 24)
        answer = "Waxy";
    else if(randomW == 25)
        answer = "Zippy";
    else if(randomW == 26)
        answer = "Zombie";
    else if(randomW == 27)
        answer = "Absurd";
    else if(randomW == 28)
        answer = "Avenue";
    else if(randomW == 29)
        answer = "Band";
    else if(randomW == 30)
        answer = "Blizzard";
    else if(randomW == 31)
        answer = "Google";
    else if(randomW == 32)
        answer = "Car";
    else if(randomW == 33)
        answer = "Buffalo";
    else if(randomW == 34)
        answer = "Cobweb";
    else if(randomW == 35)
        answer = "equip";
    else if(randomW == 36)
        answer = "faking";
    else if(randomW == 37)
        answer = "cycle";
    else if(randomW == 38)
        answer = "duplex";
    else if(randomW == 39)
        answer = "fixable";
    else if(randomW == 40)
        answer = "flapjack";
    else if(randomW == 41)
        answer = "fox";
    else if(randomW == 42)
        answer = "funny";
    else if(randomW == 43)
        answer = "galaxy";
    else if(randomW ==44)
        answer = "gizmo";
    else if(randomW == 45)
        answer = "gossip";
    else if(randomW == 46)
        answer = "icebox";
    else if(randomW == 47)
        answer = "jackpot";
    else if(randomW == 48)
        answer = "jelly";
    else if(randomW == 49)
        answer = "jigsaw";
    else if(randomW == 50)
        answer = "hockey";
    else if(randomW == 51)
        answer = "jog";
    else if(randomW == 52)
        answer = "joyful";
    else if(randomW == 53)
        answer = "juicy";
    else if(randomW == 54)
        answer = "jumbo";
    else if(randomW == 55)
        answer = "kazoo";
    else if(randomW == 56)
        answer = "keyhole";
    else if(randomW == 57)
        answer = "klutz";
    else if(randomW == 58)
        answer = "length";
    else if(randomW == 59)
        answer = "lucky";
    else if(randomW == 60)
        answer = "luxury";
    else if(randomW == 61)
        answer = "matrix";
    else if(randomW == 62)
        answer = "micro";
    else if(randomW == 63)
        answer = "wave";
    else if(randomW == 64)
        answer = "night";
    else if(randomW == 65)
        answer = "club";
    else if(randomW == 66)
        answer = "numb";
    else if(randomW == 67)
        answer = "skull";
    else if(randomW == 68)
        answer = "oxidize";
    else if(randomW == 69)
        answer = "pizza";
    else if(randomW == 70)
        answer = "puppy";
    else if(randomW == 71)
        answer = "quartz";
    else if(randomW == 72)
        answer = "quiz";
    else if(randomW == 73)
        answer = "rhubarb";
    else if(randomW == 74)
        answer = "rhythm";
    else if(randomW == 75)
        answer = "scratch";
    else if(randomW == 76)
        answer = "snazzy";
    else if(randomW == 77)
        answer = "squawk";
    else if(randomW == 78)
        answer = "staff";
    else if(randomW == 79)
        answer = "stretch";
    else if(randomW == 80)
        answer = "strong";
    else if(randomW == 81)
        answer = "hold";
    else if(randomW == 82)
        answer = "subway";
    else if(randomW == 83)
        answer = "swivel";
    else if(randomW == 84)
        answer = "thrift";
    else if(randomW == 85)
        answer = "less";
    else if(randomW == 86)
        answer = "syndrome";
    else if(randomW == 87)
        answer = "thumb";
    else if(randomW == 88)
        answer = "screw";
    else if(randomW == 89)
        answer = "topaz";
    else if(randomW == 90)
        answer = "script";
    else if(randomW == 91)
        answer = "grimace";
    else if(randomW == 92)
        answer = "Sponge";
    else if(randomW == 93)
        answer = "Mercury";
    else if(randomW == 94)
        answer = "Venus";
    else if(randomW == 95)
        answer = "Earth";
    else if(randomW == 96)
        answer = "Mars";
    else if(randomW == 97)
        answer = "Jupiter";
    else if(randomW == 98)
        answer = "Saturn";
    else if(randomW == 99)
        answer = "Uranus";
    else if(randomW == 100)
        answer = "Neptune";


}


void print (string answer)
{


    if(wrong == 0)
    {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }


    if(wrong == 1)
    {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |      0     "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }


    if(wrong == 2)
    {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |      0     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }

    if(wrong == 3)
    {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |      0     "<<endl;
        cout<<"    |      |-    "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }

    if(wrong == 4)
    {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |      0     "<<endl;
        cout<<"    |     -|-    "<<endl;
        cout<<"    |            "<<endl;
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }


    if(wrong == 5)
    {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |      0     "<<endl;
        cout<<"    |     -|-    "<<endl;
        cout<<"    |     /      "<<endl;
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }


    if(wrong == 6)
    {
        cout<<"    ________     "<<endl;
        cout<<"    |      |     "<<endl;
        cout<<"    |      0     "<<endl;
        cout<<"    |     -|-    "<<endl;
        cout<<"    |     / \\   "<<endl;
        cout<<"    |            "<<endl;
        cout<<"  --------       "<<endl;
    }


    cout<<endl;
    cout<<"wrong letters :"<<endl;
    cout<<endl;
    cout<<wrong1<<"  "<<wrong2<<"  "<<wrong3<<"  "<<wrong4<<"  "<<wrong5<<"  "<<wrong6<<endl;
    cout<<endl;



    cout<<"The Answer:"<<endl;
    cout<<endl;

    if(answer.length()==3)
    {
        cout<< charic1<<" "<<charic2<<" "<<charic3<<endl;
    }
    else if(answer.length()==4)
    {
        cout<< charic1<<" "<<charic2<<" "<<charic3<<" "<<charic4<<endl;
    }
    else  if(answer.length()==5)
    {
        cout<< charic1<<" "<<charic2<<" "<<charic3<<" "<<charic4<<" "<<charic5<<endl;
    }
    else if(answer.length()==6)
    {
        cout<< charic1<<" "<<charic2<<" "<<charic3<<" "<<charic4<<" "<<charic5<<" "<<charic6<<endl;
    }
    else if(answer.length()==7)
    {
        cout<< charic1<<" "<<charic2<<" "<<charic3<<" "<<charic4<<" "<<charic5<<" "<<charic6<<" "<<charic7<<endl;
    }
    else if(answer.length()==8)
    {
        cout<< charic1<<" "<<charic2<<" "<<charic3<<" "<<charic4<<" "<<charic5<<" "<<charic6<<" "<<charic7<<" "<<charic8<<endl;
    }


}



int main()
{

    char help;
    char YN;
    bool won = false;


    charic1 = "_";
    charic2 = "_";
    charic3 = "_";
    charic4 = "_";
    charic5 = "_";
    charic6 = "_";
    charic7 = "_";
    charic8 = "_";

    wrong1 = "?";
    wrong2 = "?";
    wrong3 = "?";
    wrong4 = "?";
    wrong5 = "?";
    wrong6 = "?";

    wrong= 0;
    show_wrong = 0;



    cout<<"                      Welcome to Hangman!"<<endl;
    cout<<endl;
    cout<<"The goal is to figure out the secret word, by entering letters below"<<endl;
    cout<<"If a letter is incorrect the letter will not fill a space below"<<endl;
    cout<<"With every wrong answer, another body part is added"<<endl;
    cout<<"If the man is hanged before you figure out the answer YOU LOSE!"<<endl;
    cout<<endl;

    RandomWord();

    do
    {

        do
        {
            print(answer);

            cout<<endl;
            cout << "Enter letter: ";
            cin>>help;

            letters(answer,help);


            if (wrong ==6)
            {
                break;
            }

            if(wrong == 5)
                show_wrong = 1;
            if(wrong == 4)
                show_wrong = 2;
            if(wrong == 3)
                show_wrong = 3;
            if(wrong == 2)
                show_wrong = 4;
            if(wrong == 1)
                show_wrong = 5;
            if(wrong == 0)
                show_wrong = 6;


            if(answer.length()==3)
            {

                if(charic1 !="_" && charic2 !="_" && charic3 != "_")
                {
                    cout<<answer<<endl;
                    cout<<endl;
                    cout<<"YOU WIN!"<<endl;
                    cout<<endl;
                    cout<<"you had "<<show_wrong<<" guesses remaining"<<endl;

                    won = true;
                    break;
                }
            }
            else if(answer.length()==4)
            {

                if(charic1 !="_" && charic2 !="_" && charic3 != "_" && charic4 != "_")
                {
                    cout<<answer<<endl;
                    cout<<endl;
                    cout<<"YOU WIN!"<<endl;
                    cout<<endl;
                    cout<<"you had "<<show_wrong<<" guesses remaining"<<endl;
                    won = true;
                    break;
                }
            }
            else if(answer.length()==5)
            {

                if(charic1 !="_" && charic2 !="_" && charic3 != "_" && charic4 != "_" && charic5 !="_")
                {
                    cout<<answer<<endl;
                    cout<<endl;
                    cout<<"YOU WIN!"<<endl;
                    cout<<endl;
                    cout<<"you had "<<show_wrong<<" guesses remaining"<<endl;
                    won = true;
                    break;
                }
            }
            else if(answer.length()==6)
            {

                if(charic1 !="_" && charic2 !="_" && charic3 != "_" && charic4 != "_" && charic5 !="_"&& charic6 !="_")
                {
                    cout<<answer<<endl;
                    cout<<endl;
                    cout<<"YOU WIN!"<<endl;
                    cout<<endl;
                    cout<<"you had "<<show_wrong<<" guesses remaining"<<endl;
                    won = true;
                    break;
                }

            }
            else if(answer.length()==7)
            {
                if(charic1 !="_" && charic2 !="_" && charic3 != "_" && charic4 != "_" && charic5 !="_"&& charic6 !="_"&& charic7 !="_")
                {
                    cout<<answer<<endl;
                    cout<<endl;
                    cout<<"YOU WIN!"<<endl;
                    cout<<endl;
                    cout<<"you had "<<show_wrong<<" guesses remaining"<<endl;
                    won = true;
                    break;
                }

            }
            else if(answer.length()==8)
            {

                if(charic1 !="_" && charic2 !="_" && charic3 != "_" && charic4 != "_" && charic5 !="_"&& charic6 !="_"&& charic7 !="_"&& charic8 !="_")
                {
                    cout<<answer<<endl;
                    cout<<endl;
                    cout<<"YOU WIN!"<<endl;
                    cout<<endl;
                    cout<<"you had "<<show_wrong<<" guesses remaining"<<endl;
                    won = true;
                    break;
                }
            }


        }
        while(wrong < 6|| won == false);



        if(won == true)
        {
            cout<<endl;
            cout<<"Do you want to play again? (Y/N): ";
            cin>>YN;

            if(YN== 'Y'|| YN== 'y')
            {
                system("CLS");
                charic1 = "_";
                charic2 = "_";
                charic3 = "_";
                charic4 = "_";
                charic5 = "_";
                charic6 = "_";
                charic7 = "_";
                charic8 = "_";
                wrong1 = "?";
                wrong2 = "?";
                wrong3 = "?";
                wrong4 = "?";
                wrong5 = "?";
                wrong6 = "?";

                wrong= 0;
                show_wrong = 0;
                RandomWord();
                won = false;


            }
        }


        if(wrong == 6)
        {
            print(answer);
            cout<<"you lose! the word was "<<answer<<endl;
            cout<<endl;
            cout<<"Do you want to play again? (Y/N): ";
            cin>>YN;

            if(YN== 'Y'|| YN== 'y')
            {
                system("CLS");
                charic1 = "_";
                charic2 = "_";
                charic3 = "_";
                charic4 = "_";
                charic5 = "_";
                charic6 = "_";
                charic7 = "_";
                charic8 = "_";
                wrong1 = "?";
                wrong2 = "?";
                wrong3 = "?";
                wrong4 = "?";
                wrong5 = "?";
                wrong6 = "?";

                wrong= 0;
                show_wrong = 0;
                RandomWord();

                won = false;
            }


        }


    }
    while(YN== 'Y'|| YN== 'y');


    cout<<"ok"<<endl;


    return 0;
}
