#include <iostream>
#include <iomanip>

int destinationMenu(int INPUT_A);
int timeMenu(int INPUT_B);
double inputTotal(int INPUT_DUR, double DAY_VALUE, double NIGHT_VALUE, int c);


int main(){
    int DESTINATION_INPUT,
        TIME_INPUT,
        DURATION;

    char TRY_INPUT;
    
    double  AMERICAN_DAYTIME = 50 / 3,
            AMERICAN_NIGHTTIME = 45.0 / 3,
            ASIAN_DAYTIME = 30 / 2,
            ASIAN_NIGHTTIME = 27 / 2,
            TOTAL_COST;

    start:

    DESTINATION_INPUT = destinationMenu(DESTINATION_INPUT);

    if(DESTINATION_INPUT == 3){
        exit(0);
    }

    std::cout << std::endl;

    TIME_INPUT = timeMenu(TIME_INPUT);

    if(TIME_INPUT == 3){
        exit(0);
    }

    std::cout << "Input Duration of call: ";
    std::cin >> DURATION;

    switch (DESTINATION_INPUT)
    {
    case 1:
        TOTAL_COST = inputTotal(DURATION, AMERICAN_DAYTIME, AMERICAN_NIGHTTIME, TIME_INPUT);
    break;
    case 2:
        TOTAL_COST = inputTotal(DURATION, ASIAN_DAYTIME, ASIAN_NIGHTTIME, TIME_INPUT);
    break;
    default:
        std::cout << "Invalid Output";
    }
    system("cls");
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total Charges is " << TOTAL_COST << std::endl;
    
    std::cout << std::endl;

    std::cout << "Try again [y/n]: ";
    std::cout << TRY_INPUT;

    if(TRY_INPUT == 'Y' || TRY_INPUT == 'y'){
        goto start;
    }
    else{
        return 0;
    }
}

int destinationMenu(int INPUT_A){
    std::cout << "Destination Code" << std::endl;

    std::cout << "1. American Region" << std::endl;
    std::cout << "2. Asian Region" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Input Destinaion [1 -3]: ";
    std::cin >> INPUT_A;
    return INPUT_A;
}

int timeMenu(int INPUT_B){
    std::cout << "TIME" << std::endl;

    std::cout << "1. Daytime" << std::endl;
    std::cout << "2. Nighttime" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "Input Time [1 - 3]: ";
    std::cin >> INPUT_B;
    return INPUT_B;
}

double inputTotal(int INPUT_DUR, double DAY_VALUE, double NIGHT_VALUE, int TIME){
    if(TIME == 1){
        return INPUT_DUR * DAY_VALUE;
    }
    else if(TIME == 2){
        return INPUT_DUR * NIGHT_VALUE;
    }
    else{
    std::cout << "Invalid Output";
    exit(0);
    }
}