#include <iostream>
#include <cmath>

bool primeChecker( int n){

    if (n <= 1) return false;       //  any number less than or equal to 1 is not a prime number  
    if (n == 2) return true;        //  2 is the only even prime
    if (n % 2 == 0) return false;   // other even numbers aren't prime

    for (int i = 3; i <= sqrt(n); i += 2) { // The syntax of this code is for( int i = "THE VALUE OF i"; i >,<,==(THIS PART YOU ENTER THE CONDITION BEFORE IT'S EXECUTE THE PROGRAM); i (THIS AREA WHERE YOU ENTER THE PROGRAM YOU WANT TO RUN IF IT'S  increment or other types of concept))
        if (n % i == 0) return false;   // if the remainder of user number is equal to 0, that number is not prime
    }
    return true;  
    // the return value means in this boolean function is the true will be true
}

int main(){ 

    int userNumber;
    char continueProgram;
    std::cout << "----THIS PROGRAM CHECK THE NUMBER YOU ENTER THAT IT IS A ODD OR EVEN AND PRIME NUMBER OR NOT----" << std::endl ;

    do{
        std::cout << "Enter Your Number:";
        std::cin >> userNumber;

        /*1. IT CHECK THE NUMBER YOU ENTER IF IT'S A ODD OR EVEN*/

        if( 0 == (userNumber % 2)){
            std::cout << "The number " << userNumber << " is even number" << std::endl;
        }
        else{
            std::cout << "The number " << userNumber << " is odd number" << std::endl;
        }

        /*2. IT CHECK THE NUMBER YOU ENTER IF IT'S A PRIME NUMBER.*/

        if(primeChecker(userNumber)){
            std::cout << "The number " << userNumber << " is prime number" << std::endl;
        }
        else{
            std::cout << "The number " << userNumber << " is not a prime number" << std::endl;
        }

        std::cout << "Do another check? (Y/n)";
        std::cin >> continueProgram;
    }
    
    while(continueProgram == 'Y' || continueProgram == 'y');

    return 0;
} 

