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

void entrance() {
    cout<<"\nYou found your way into an abandoned warehouse."<<endl;
    cout<<"Right in front of you is a hallway which leads \nstraight ahead, a staircase to 2nd floor on the \nright and a door to a room to left"<<endl;
    cout<<"\nType a number with keypad to choose path"<<endl;
    cout<<"1.\tGo down hallway"<<endl;
    cout<<"2.\tTake staircase to second floor"<<endl;
    cout<<"3.\tOpen door on the left"<<endl;
}
//main body-------------------------------------------------------------------------------
int main () {
    gameText();
    startGame();
    entrance();
}

