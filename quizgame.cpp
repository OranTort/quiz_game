#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>


int main(){

    std::string questions[] =  {"1. What year was C++ created?: ",
                                "2. Who created C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4: Is the Earth flat?: "};

    std::string options[][4] =  {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guldo van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Tony Tony Chopper"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. Every other day"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    //char to hold the player/user guess
    char guess;
    //int to hold the player/user score
    int score;

    for(int i = 0; i < size; i++){
        
        std::cout << "***************************************************************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "***************************************************************" << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){

            std::cout << "CORRECT!!!\n";
            score++;
        }
        else{
            std::cout << "WRONG!!!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }

    }
    std::cout << "***************************************************************" << '\n';
    std::cout << "*                           RESULTS                           *\n";
    std::cout << "***************************************************************" << '\n';
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "Number of Questions: " << size << '\n';
    std::cout << "Score: " << (score/(double) size)*100 << '%' <<'\n';

    system("pause");


return 0;
}