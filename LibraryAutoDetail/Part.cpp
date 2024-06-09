#include "Part.h"
#include <iostream>

// Конструктор класу Part ініціалізує всі його члени даними, переданими через параметри.
Part::Part(const std::string& name, const std::string& partNumber, double price,
    std::shared_ptr<Category> category, std::shared_ptr<Brand> brand, std::shared_ptr<Manufacture> manufacture)
    : name(name), partNumber(partNumber), price(price), category(category), brand(brand), manufacture(manufacture) {}

// Повертає назву запчастини.
std::string Part::getName() const {
    return name;
}

// Повертає номер запчастини.
std::string Part::getPartNumber() const {
    return partNumber;
}

// Повертає ціну запчастини.
double Part::getPrice() const {
    return price;
}

// Повертає категорію запчастини.
std::shared_ptr<Category> Part::getCategory() const {
    return category;
}

// Повертає бренд запчастини.
std::shared_ptr<Brand> Part::getBrand() const {
    return brand;
}

// Повертає виробника запчастини.
std::shared_ptr<Manufacture> Part::getManufacture() const {
    return manufacture;
}

// Відображає інформацію про запчастину.
void Part::display() const {
    std::cout << "Name: " << name
        << ", Part Number: " << partNumber
        << ", Price: " << price
        << ", Category: " << category->getName()
        << ", Brand: " << brand->getName()
        << ", Manufacturer: " << manufacture->getName()
        << std::endl;
}
