#include <iostream>
#include <iomanip>

void displayMenu();
void addProduct();
int main(){


    const int MAX = 50;
    int MENU_CHOICE;
    std::string ADD_PRODUCT;
    int ADD_PRODUCT_QUANTITY;

    /*------------INVENTORY------------*/
    std::string ITEM_NAME[MAX];
    double ITEM_PRICE[MAX];
    int ITEM_STOCK[MAX];
    int ITEM_STORED = 0;
    /*------------------------*/

    displayMenu();

    do{
    std::cout << "Choice: ";
    std::cin >> MENU_CHOICE;

    switch (MENU_CHOICE)
    {
    case 1:
        
    break;
    case 2:
    
    break;
    case 3:
    
    break;
    case 4:
    
    break;
    case 5:
    
    break;
    case 6:
    
    break;
    default:
        std::cout << "Invalid";
    }
    
    }
    while (MENU_CHOICE != 6);
    
    return 0;
    }

void displayMenu(){
    std::cout << "===SARI-SARI STORE===" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Add product" << std::endl;
    std::cout << "2. View inventory" << std::endl;
    std::cout << "3. Sell product" << std::endl;
    std::cout << "4. Restock product" << std::endl;
    std::cout << "5. Total inventory value" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << std::endl;
}

void addProduct(int MAX, int ADD_PRODUCT_QUANTITY, std::string ADD_PRODUCT){
    if(ADD_PRODUCT_QUANTITY < MAX){
    
    std::cout << "Product Name: ";
    std::getline(std::cin, ADD_PRODUCT);
    
    std::cin.ignore();
    
    std::cout << "Quantity: ";
    std::cin >> ADD_PRODUCT_QUANTITY;
    }
}