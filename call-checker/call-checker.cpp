#include <iostream>
#include <iomanip>

int destinationMenu(int INPUT_A);
int timeMenu(int INPUT_B);
double americanInput(int INPUT_DUR, double DAY_VALUE, double NIGHT_VALUE, int c);
double asianInput(int INPUT_DUR, double DAY_VALUE, double NIGHT_VALUE, int c);

int main(){
    int DESTINATION_INPUT,
        TIME_INPUT,
        DURATION;

    double  AMERICAN_DAYTIME = 50 / 3,
            AMERICAN_NIGHTTIME = 45.0 / 3,
            ASIAN_DAYTIME = 30 / 2,
            ASIAN_NIGHTTIME = 27 / 2,
            TOTAL_COST;

    DESTINATION_INPUT = destinationMenu(DESTINATION_INPUT);

    std::cout << std::endl;

    TIME_INPUT = timeMenu(TIME_INPUT);

    std::cout << "Input Duration of call: ";
    std::cin >> DURATION;

    switch (DESTINATION_INPUT)
    {
    case 1:
        TOTAL_COST = americanInput(DURATION, AMERICAN_DAYTIME, AMERICAN_NIGHTTIME, TIME_INPUT);
    break;
    case 2:
        TOTAL_COST = asianInput(DURATION, ASIAN_DAYTIME, ASIAN_NIGHTTIME, TIME_INPUT);
    break;
    case 3:
        return 0;
    break;
    default:
        std::cout << "Invalid Output";
    }
    system("cls");
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total Charges is " << TOTAL_COST;
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

double americanInput(int INPUT_DUR, double DAY_VALUE, double NIGHT_VALUE, int TIME){
    if(TIME == 1){
        return INPUT_DUR * DAY_VALUE;
    }
    else if(TIME == 2){
        return INPUT_DUR * NIGHT_VALUE;
    }
    else if(TIME == 3){
        return 0;
    }
    else{
        std::cout << "Invalid Output";
        exit(0);
    }
}

double asianInput(int INPUT_DUR, double DAY_VALUE, double NIGHT_VALUE, int TIME){
    if(TIME == 1){
        return INPUT_DUR * DAY_VALUE;
    }
    else if(TIME == 2){
        return INPUT_DUR * NIGHT_VALUE;
    }
    else if(TIME == 3){
        return 0;
    }
    else{
    std::cout << "Invalid Output";
    exit(0);
    }
}