#include "Part.h"
#include <iostream>

// ����������� ����� Part �������� �� ���� ����� ������, ���������� ����� ���������.
Part::Part(const std::string& name, const std::string& partNumber, double price,
    std::shared_ptr<Category> category, std::shared_ptr<Brand> brand, std::shared_ptr<Manufacture> manufacture)
    : name(name), partNumber(partNumber), price(price), category(category), brand(brand), manufacture(manufacture) {}

// ������� ����� ����������.
std::string Part::getName() const {
    return name;
}

// ������� ����� ����������.
std::string Part::getPartNumber() const {
    return partNumber;
}

// ������� ���� ����������.
double Part::getPrice() const {
    return price;
}

// ������� �������� ����������.
std::shared_ptr<Category> Part::getCategory() const {
    return category;
}

// ������� ����� ����������.
std::shared_ptr<Brand> Part::getBrand() const {
    return brand;
}

// ������� ��������� ����������.
std::shared_ptr<Manufacture> Part::getManufacture() const {
    return manufacture;
}

// ³������� ���������� ��� ����������.
void Part::display() const {
    std::cout << "Name: " << name
        << ", Part Number: " << partNumber
        << ", Price: " << price
        << ", Category: " << category->getName()
        << ", Brand: " << brand->getName()
        << ", Manufacturer: " << manufacture->getName()
        << std::endl;
}
