#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

    string questions[] =  {"1. What year was C++ created?: ",
                                "2. Who created C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4: Is the Earth flat?: "};

    string options[][4] =  {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guldo van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Tony Tony Chopper"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. Every other day"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    //char to hold the player/user guess
    char guess;
    //int to hold the player/user score
    int score = 0;

    for(int i = 0; i < size; i++){
        
        cout << "***************************************************************" << '\n';
        cout << questions[i] << '\n';
        cout << "***************************************************************" << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){

            cout << "CORRECT!!!\n";
            score = score + 1;
        }
        else{
            cout << "WRONG!!!\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }

    }
    cout << "***************************************************************" << '\n';
    cout << "*                           RESULTS                           *\n";
    cout << "***************************************************************" << '\n';
    cout << "Correct Guesses: " << score << '\n';
    cout << "Number of Questions: " << size << '\n';
    cout << "Score: " << (score/(double) size)*100 << '%' <<'\n';

    system("pause");


return 0;
}