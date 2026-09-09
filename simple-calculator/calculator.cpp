#include <iostream>   // gives access to std::cin (input) and std::cout (output)
#include <iomanip>    // formatting tools like setprecision (not used yet, but ready if needed)
#include <cmath>      // math functions like pow(), sqrt() (not used yet, but ready if needed)

// ===== FUNCTIONS =====
// Each function below does ONE job: takes two numbers, returns one result.
// "float a, float b" are PARAMETERS - placeholders that receive whatever
// values are passed in when the function is called (e.g. firstDigit, secondDigit).

float calcAddition(float a, float b){
    return a + b;   // sends the sum back to whoever called this function
}

float calcSubtraction(float a, float b){
    return a - b;
}

float calcMultiplication(float a, float b){
    return a * b;
}

float calcDivision(float a, float b){
    return a / b;
    // Note: no check for b == 0 here yet - dividing by zero with floats
    // produces "inf" or "-nan" instead of crashing, but it's still worth
    // validating secondDigit before this call if you want cleaner behavior.
}

int main(){

    // ===== VARIABLE DECLARATIONS =====
    float firstDigit, secondDigit, result;  // the two numbers and the answer
    char calcOperator;                       // stores which operation the user picked (+, -, *, /)
    char anotherCalculation;                 // stores Y/N answer to "calculate again?"
    bool prevResult = false;                 // tracks whether a previous result exists yet
                                              // starts false because on the very first loop,
                                              // there IS no previous result to offer
    char useAgain;                           // stores Y/N answer to "reuse previous result?"

    std::cout << "=====SIMPLE CALCULATOR=====" << std::endl;
    std::cout << std::endl;   // prints a blank line for spacing

    // ===== MAIN LOOP =====
    // do-while runs the code inside { } at least once BEFORE checking the
    // condition at the bottom. This fits here because the user needs to do
    // at least one calculation before we can ask "want to do another?"
    do{

        // ----- DECIDE HOW TO GET firstDigit -----
        if(prevResult){
            // This branch only runs from the SECOND loop onward,
            // since prevResult starts false and only becomes true
            // after a calculation has already happened once.

            std::cout << "Do you want to continue use the previous digit? (Y/N) ";
            std::cin >> useAgain;

            if(useAgain == 'Y' || useAgain == 'y'){
                // reuse last result as the new first number instead of asking again
                firstDigit = result;
                std::cout << "The first digit is: " << firstDigit << std::endl;
            }else {
                // user said no - ask for a brand new first digit instead
                std::cout << "Enter first digit: ";
                std::cin >> firstDigit;
            }
        }else{
            // FIRST loop iteration only - no previous result exists yet,
            // so just ask for the first digit directly
            std::cout << "Enter first digit: ";
            std::cin >> firstDigit;
        }

        // ----- GET THE OPERATOR AND SECOND NUMBER -----
        std::cout << "Enter the operator: ";
        std::cin >> calcOperator;   // reads a single character like '+' or '/'

        std::cout << "Enter second digit: ";
        std::cin >> secondDigit;

        // ----- DECIDE WHICH CALCULATION TO RUN -----
        // switch checks calcOperator against each case below and runs
        // whichever one matches. break; stops it from falling into the
        // next case after the matching one runs.
        switch (calcOperator){
        
        case '+':
        result = calcAddition(firstDigit, secondDigit);   // call the function, store what it returns
        std::cout << "The answer is: "<< result << std::endl;
        std::cout << std::endl;
        break;

        case '-':
        result = calcSubtraction(firstDigit, secondDigit);
        std::cout << "The answer is: "<< result << std::endl;
        std::cout << std::endl;
        break;

        case '*':
        result = calcMultiplication(firstDigit, secondDigit);
        std::cout << "The answer is: "<< result << std::endl;
        std::cout << std::endl;
        break;

        case '/':
        result = calcDivision(firstDigit, secondDigit);
        std::cout << "The answer is: "<< result << std::endl;
        std::cout << std::endl;
        break;

        default:
        // runs when calcOperator doesn't match any of the four cases above
        // (e.g. user typed '%' or 'x' by mistake)
        std::cout << "Invalid operator please try again";
        break;

        }

        // Mark that a result now exists, so next loop can offer to reuse it
        prevResult = true;

        // ----- ASK IF THE USER WANTS ANOTHER ROUND -----
        std::cout << "Do you want to continue? (Y/N) ";
        std::cin >> anotherCalculation;

    }
    // Loop repeats only if the user typed Y or y (case-insensitive check using ||)
    while(anotherCalculation == 'Y' || anotherCalculation == 'y');

    std::cout << "Goodbye";

    return 0;
}