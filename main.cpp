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
    cout<<"\nYou found your way into an abandoned house."<<endl;
    cout<<"Right in front of you is a hallway which leads \nstraight ahead, a staircase to 2nd floor on the \nright and a door to a room to left"<<endl;

    cout<<"\nType a number with keypad to choose path: "<<endl;

    cout<<"\n1.\tGo down hallway"<<endl;
    cout<<"2.\tTake staircase to second floor"<<endl;
    cout<<"3.\tOpen door on the left"<<endl;

    int input;
    cin>>input;

    int num[3] = {1,2,3};
    //cout<<num[0]"the array is workring<<endl;
    if(input == num[0]) {
        cout<<"\nYou choose 1 and decided to go down the hallway."<<endl;
    } else if(input == num[1]) {
        cout<<"You choose 2 and decide to take the staircase."<<endl;
    } else if(input ==num[2]) {
        cout<<"Your chose 3 and decided to take the door to the left of you"<<endl;
    }


}
void hallway() {
    cout<<"\nYou walk down the hallway and see a table in the middle with a lighter, fuel, and club wrapped in cloth"<<endl;
    cout<<"Under the table there is a rug, to left is storage room which has a door on it. and on the right is a small kitchen"<<endl;
    cout<<"\nwhat would you like to do first?"<<endl;
    cout<<"\n1.\tExamine the rug"<<endl;
    cout<<"2.\tTake lighter"<<endl;
    cout<<"3.\tGrab fuel"<<endl;
    cout<<"4.\tTake club with cloth wrapped around it"<<endl;
}
//main body-------------------------------------------------------------------------------
int main () {
    gameText();
    startGame();
    entrance();
    hallway();
}

