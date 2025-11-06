#include "HerbsRepository.h"
#include <stdexcept>

HerbsRepository::HerbsRepository() {
	auto data = DataLoader::LoadFromFile("herbs.txt");
	data_ = std::move(data);
}

int HerbsRepository::GetAvailableQuantity(const string& herbType) const {
	auto it = data_.find(herbType);
	if (it == data_.end()) {
		throw invalid_argument("Unknown herb type: " + herbType);
	}
	return stoi(it->second[0]);
}

void HerbsRepository::UpdateQuantity(const string& herbType, int newQuantity) {
	auto it = data_.find(herbType);
	if (it == data_.end()) {
		throw invalid_argument("Unknown herb type: " + herbType);
	}
	it->second[0] = to_string(newQuantity);
}
