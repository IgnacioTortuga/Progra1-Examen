#include "PizzaBuilder.h"
#include <iostream>

PizzaBuilder::PizzaBuilder() {
}

void PizzaBuilder::BuildPizza() {
    std::cout << "=== Pizza Builder ===" << std::endl;
    std::cout << "Let's build your pizza!" << std::endl;

    SelectTomatoes();
    SelectHerb();

	SelectMeat();  
	SelectCheese();
    // TODO
    //SelectCheese();
    //SelectHerbs();
    //SelectMeats();
}

void PizzaBuilder::DisplayFinalPizza() const {
    std::cout << "\n=== Your Pizza ===" << std::endl;
    if (selectedIngredients_.empty()) {
        std::cout << "No ingredients selected." << std::endl;
    } else {
        std::cout << "Your pizza contains:" << std::endl;
        for (const auto& ingredient : selectedIngredients_) {
            std::cout << "- " << ingredient << std::endl;
        }
    }
}

void PizzaBuilder::SelectTomatoes() {

    std::cout << "\n--- Selecting Tomatoes ---" << std::endl;

    // TODO: Reusar esta linea, pero con su propio Repositorio.
    IngredientSelector<TomatoesRepository> selector(tomatoRepo_, availableTomatoes_, "tomato");

    while (true) {
        selector.DisplayAvailableIngredients();

        std::cout << "\nEnter tomato type (or 'done' to finish): ";
        std::string userChoice;
        std::getline(std::cin, userChoice);

        if (userChoice == "done" || userChoice == "DONE") {
            break;
        }

        selector.AddIngredientToPizza(userChoice, selectedIngredients_);
    }
}
void PizzaBuilder::SelectMeat() {

    std::cout << "\n--- Selecting Meats ---" << std::endl;

    IngredientSelector<MeatsRepository> selector(meatsRepo_, availableMeats_, "meat");

    while (true) {
        selector.DisplayAvailableIngredients();

        std::cout << "\nEnter meat type (or 'done' to finish): ";
        std::string userChoice;
        std::getline(std::cin, userChoice);

        if (userChoice == "done" || userChoice == "DONE") {
            break;
        }

        selector.AddIngredientToPizza(userChoice, selectedIngredients_);
    }
}

void PizzaBuilder::SelectCheese()
{

    std::cout << "\n--- Selecting Tomatoes ---" << std::endl;

    // TODO: Reusar esta linea, pero con su propio Repositorio.
    IngredientSelector<CheeseRepository> selector(cheeseRepo_, availableTomatoes_, "Cheese");

    while (true) {
        selector.DisplayAvailableIngredients();

        std::cout << "\nEnter cheese type (or 'done' to finish): ";
        std::string userChoice;
        std::getline(std::cin, userChoice);

        if (userChoice == "done" || userChoice == "DONE") {
            break;
        }

        selector.AddIngredientToPizza(userChoice, selectedIngredients_);
    }
}
// TODO:  Crear cada uno su parte. ☝️ toma el ejemplo de  SelectTomatoes y crea tu propia implementación.


//void PizzaBuilder::SelectCheese() {
// // Resolver.    
//}
//
void PizzaBuilder::SelectHerb() {
    std::cout << "\n--- Selecting Herbs ---" << std::endl;

    // TODO: Reusar esta linea, pero con su propio Repositorio.
    IngredientSelector<HerbsRepository> selector(herbsRepo_, availableHerbs_, "Herbs");

    while (true) {
        selector.DisplayAvailableIngredients();

        std::cout << "\nEnter tomato type (or 'done' to finish): ";
        std::string userChoice;
        std::getline(std::cin, userChoice);

        if (userChoice == "done" || userChoice == "DONE") {
            break;
        }

        selector.AddIngredientToPizza(userChoice, selectedIngredients_);
    }
}

//
//void PizzaBuilder::SelectMeat() {
//    // Resolver.    
//}