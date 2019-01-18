#include <iostream>

using namespace std;



void gameMenu() {
    cout<<"\n1.\tNew Game"<<endl;
}
void startGame() {
    gameMenu();

    cout<<"\nEnter Number: "<<flush;
    int input;
    cin>> input;

    if(input == 1) {
        cout<<"starting game"<<endl;
    }
}
void gameText() {
    cout<<"\'Find Your Way Out\'--\'Text Based Game\'";
    cout<<"\n"<<endl;
    cout<<"\nFind Your Way Out, is a Text based game that uses your keypad on your keyboard to enter in and out of rooms."<<endl;
    cout<<"To start a new game please select from the numbers below."<<endl;
}

int main () {
    gameText();
    startGame();
}

