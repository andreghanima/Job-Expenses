#include <iostream>
using namespace std; 

int main(){
    int numOfExpenses, currentExpense;
    int expenses = 0;

    std::cin >> numOfExpenses;
    
    while(numOfExpenses--){
        std::cin >> currentExpense;
        
        if(currentExpense < 0)
            expenses += -(currentExpense);
          
    }std::cout << expenses;
}
