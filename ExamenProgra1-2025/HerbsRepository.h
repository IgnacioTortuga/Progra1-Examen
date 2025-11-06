#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include "DataLoader.h"

using namespace std;

class HerbsRepository {
public:
	HerbsRepository();

	int GetAvailableQuantity(const string& herbType) const;
	void UpdateQuantity(const string& herbType, int newQuantity);

private:
	// Estructura cargada desde DataLoader: { "Nombre" : ["cantidad", ...] }
	mutable unordered_map<string, vector<string>> data_;
};
#pragma once
