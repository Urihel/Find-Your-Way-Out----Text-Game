#include <iostream>

using namespace std;

void stairCase(){
    cout<<"\nYou walk up the stairs. As you walk you notice the lights are flickering. You continue up anyway. When \nyou reach the top, there is a room facing you with a sign saying keep out!" <<endl;
    cout<<"\nWhat would you like to do?"<<endl;
    cout<<"1.\tOpen the door"<<endl;
    cout<<"2.\tHead back downstairs"<<endl;
    int input;
    cin>>input;

    if(input == 1) {
        cout<<"You open the door and find a key on the floor."<<endl;
        cout<<"Do you want to pick up the key y/n ?"<<endl;
        cout<<"1.\tYes"<<endl;
        cout<<"2.\tNo"<<endl;
    }
}
//--------------------------------------
void gameMenu() {
    cout<<"\n1.\tNew Game"<<endl;
}
//--------------------------------------
void startGame() {
    gameMenu();

    cout<<"Enter Number: "<<flush;
    int input;
    cin>> input;

    if(input == 1) {
        cout<<"starting game"<<endl;
    }
}
//--------------------------------------
void gameText() {
    cout<<"\'Find Your Way Out\'--\'Text Based Game\'";
    cout<<"\n"<<endl;
    cout<<"\nFind Your Way Out, is a Text based game that uses your keypad on your keyboard to enter in and out of rooms."<<endl;
    cout<<"To start a new game please select from the numbers below."<<endl;
}
//--------------------------------------
void entrance() {
    cout<<"\nYou've stumbled into an abandoned house. Upon Entering, the doors slams shut. A voice in the background \nwhispers \"There is still a way out\" as it fades away. You\'re now facing forward. In front of you, there \nis a long hallway. You also have a staircase which leads to the second floor to your right, and on the \nleft is room with a door"<<endl;
    cout<<"\nWhat's going to happen first? "<<endl;
    cout<<"\n1.\tGo down hallway"<<endl;
    cout<<"2.\tTake staircase to second floor"<<endl;
    cout<<"3.\tOpen door on the left"<<endl;

    int input;
    cin>>input;

    int num[3] = {1,2,3};
    if(input == num[0]) {
        cout<<"\nYou choose 1 and decided to go down the hallway."<<endl;
    } else if(input == num[1]) {
        cout<<"You choose 2 and decide to take the staircase."<<endl;
        stairCase();
    } else if(input ==num[2]) {
        cout<<"Your chose 3 and decided to take the door to the left of you"<<endl;
    }


}
//------------------------------------------------
void hallway() {
    entrance();
    cout<<"\nYou walk down the hallway and see a table in the middle with a lighter, fuel, and an unlit torch"<<endl;
    cout<<"Under the table there is a rug."<<endl;
    cout<<"\nwhat would you like to do first?"<<endl;
    cout<<"\n1.\tExamine the rug"<<endl;
    cout<<"2.\tTake lighter"<<endl;
    cout<<"3.\tGrab fuel"<<endl;
    cout<<"4.\tUnlit torch"<<endl;
    int input;
    cin>>input;

    int option1[4] = {1,2,3,4};
    if(input == option1[0]){
        cout<<"\nYou examine the rug. You notice a trap door underneath the rug"<<endl;
        cout<<"You immediately remove the rug"<<endl;
    }else if(input == option1[1]){
        cout<<"You examine the lighter. Its brand new. You placed it in your pockets"<<endl;
    } else if(input == option1[2]) {
        cout<<"You examine the fuel. You notice that you can use this with the lighter. Its now in your pockets."<<endl;
    }else if(input == option1[3]) {
        cout<<"You examine examine unlit torch, and see you have items to can light it up."<<endl;
    }

}

//main body-------------------------------------------------------------------------------
int main () {
    gameText();
    startGame();
    entrance();

}

