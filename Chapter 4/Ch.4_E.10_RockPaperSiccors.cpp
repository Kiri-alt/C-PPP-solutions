#define M_PI 3.1415
#include "../../std_lib_facilities.h"
#include <math.h> 

char give_num(int iter, double rfactor);
double sin_res(int iter, double rfactor);

int main()
{
    // ask for the seed
    cout << "Welcome to Rock, Paper, Sciccors!\nYou can enter (r,p,s)\n\n";

    double randomisation;
    cout << "Enter seed: ";
    cin >> randomisation;
    randomisation = (randomisation + 12) / 4.23;

    // generate computer plays
    vector<char> plays;
    for (int i = 0; i < 10; ++i)
    {
        plays.push_back(give_num(i, randomisation));
    }

    // game loop
    int playcount = 0;
    char play;
    while (playcount < 10)
    {
        // ask for input
        cout << "\nRock Paper Scissors!: ";
        cin >> play;
        
        // check input
        switch(play){
        case 'r': case 'p': case 's': 
            break;
        default:
            cout << "error";
            return 0;
        }

        
        switch(plays[playcount]){
        case 'r': 
            cout << "Rock!\n"; // print computer play

            if(play == 'p') // compare input
            {
                cout << "Victory!\n";
            }
            else if(play == 'r')
            {
                cout << "Tie!\n";
            }
            else
            {
                cout << "Defeat!\n";
            }
            break;
        case 'p': 
            cout << "Paper!\n"; // print computer play

            if(play == 's') // compare input
            {
                cout << "Victory!\n";
            }
            else if(play == 'p')
            {
                cout << "Tie!\n";
            }
            else
            {
                cout << "Defeat!\n";
            }
            break;
        case 's':
            cout << "Scissor!\n"; // print computer play

            if(play == 'r') // compare input
            {
                cout << "Victory!\n";
            }
            else if(play == 's')
            {
                cout << "Tie!\n";
            }
            else
            {
                cout << "Defeat!\n";
            }
            
            break; 
        } 
        
        // increse iteration
        ++playcount;
        
    }
}

char give_num(int iter, double rfactor)
{
    double res = sin_res(iter, rfactor);
    if (res >= (0.3333333))
    {
        return 'r';
    }
    else if (res > (-0.3333333) && res < (0.3333333))
    {
        return 'p';
    }
    else if (res <= -0.3333333)
    {
        return 's';
    }
    else
    {
        return 'e';
    }
    
}

double sin_res(int iter, double rfactor){
    return sin(((2.0 * M_PI) / rfactor) * iter);
}
