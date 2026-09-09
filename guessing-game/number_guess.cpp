#include <iostream>
#include <cstdlib>  
#include <ctime>  

using namespace std;

int main(){


    srand(time(0)); //it randomized the number in based in real time to make it not a pseudo random number
    int playerNumber_guessed; //this is a name of variable of the player guessed number
    int randomNum = rand() % 100 + 1;  // rand() is randomizing the number(rand() % Your maximum number limit guess + Your minimum number to guess)
    int attemps = 0; // it tells how many attemps. Base value is zero

    cout << "Welcome to number guessing game" << endl;
    
    cout << endl;

    cout << "The rules are is to guess number between 1 to 100. Everytime you guess wrong there is a hint will be given to you and it show you how many attemps you take";
    
    do{

    cout << "Enter your guessed number: ";
    cin >> playerNumber_guessed;
    attemps++; // everytime the do while loop run it increment by 1

    /*It check your number guessed is to high or to low*/
    if(playerNumber_guessed > randomNum){
        cout << "Too high!";
    }else if(playerNumber_guessed < randomNum){
        cout << "Too low!";
    }
    }
    while(playerNumber_guessed != randomNum);// the function of do while loops is run the section of code inside of do{} in loop until the condition is true in while{} it stop the code
                                             // Note: the != means not equal. The condition the number is must be the equal in variables

    cout << "You guessed the right number in " << attemps << " attemps!";
    return 0;
}