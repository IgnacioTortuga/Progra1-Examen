#pragma once
#include <vector>
#include <string>
#include "TomatoesRepository.h"
#include "HerbsRepository.h"
#include "IngredientSelector.h"

class PizzaBuilder {
public:
    PizzaBuilder();

    void BuildPizza();
    void DisplayFinalPizza() const;

private:
    void SelectTomatoes();
    void SelectCheese();
    void SelectHerb();
    void SelectMeat();
	

    TomatoesRepository tomatoRepo_;
    std::vector<std::string> selectedIngredients_;
	HerbsRepository herbsRepo_;

    const std::vector<std::string> availableTomatoes_ = {"Cherry", "Roma", "Beefsteak", "Heirloom", "Grape"};
    const std::vector<std::string> availableCheeses_ = {"Mozzarella", "Cheddar", "Parmesan", "Cream Cheese", "Gouda", "Blue Cheese", "Feta"};
	const std::vector<std::string> availableHerbs_ = { "Basil", "Oregano", "Thyme", "Rosemary", "Parsley", "Cilantro" };
};