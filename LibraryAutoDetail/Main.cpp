#include "Catalog.h"       // Включення заголовочного файлу для класу Catalog
#include "Category.h"      // Включення заголовочного файлу для класу Category
#include "Brand.h"         // Включення заголовочного файлу для класу Brand
#include "Manufacture.h"   // Включення заголовочного файлу для класу Manufacture
#include <iostream>        // Включення заголовочного файлу для вводу-виводу
#include <memory>          // Включення заголовочного файлу для розумних вказівників
#include <vector>          // Включення заголовочного файлу для використання векторів

void displayMenu() {
    std::cout << "\nMenu:" << std::endl;
    std::cout << "1. Add Part" << std::endl;
    std::cout << "2. Display Catalog" << std::endl;
    std::cout << "3. Find Part" << std::endl;
    std::cout << "4. Remove Part" << std::endl;
    std::cout << "5. Add Category" << std::endl;
    std::cout << "6. Add Brand" << std::endl;
    std::cout << "7. Add Manufacturer" << std::endl;
    std::cout << "8. Exit" << std::endl;
    std::cout << "Choose an option: ";
}

int main() {
    // Вектори для збереження категорій, брендів та виробників
    std::vector<std::shared_ptr<Category>> categories;
    std::vector<std::shared_ptr<Brand>> brands;
    std::vector<std::shared_ptr<Manufacture>> manufacturers;

    // Створення об'єкта каталогу
    Catalog catalog;

    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string partName, partCode;
            double price;
            int categoryChoice, brandChoice, manufacturerChoice;

            std::cout << "Enter part name: ";
            std::cin >> partName;
            std::cout << "Enter part code: ";
            std::cin >> partCode;
            std::cout << "Enter price: ";
            std::cin >> price;

            if (categories.empty()) {
                std::cout << "No categories available. Please add a category first." << std::endl;
                break;
            }

            std::cout << "Choose category: ";
            for (size_t i = 0; i < categories.size(); ++i) {
                std::cout << i + 1 << ". " << categories[i]->getName() << " ";
            }
            std::cout << ": ";
            std::cin >> categoryChoice;
            auto category = categories[categoryChoice - 1];

            if (brands.empty()) {
                std::cout << "No brands available. Please add a brand first." << std::endl;
                break;
            }

            std::cout << "Choose brand: ";
            for (size_t i = 0; i < brands.size(); ++i) {
                std::cout << i + 1 << ". " << brands[i]->getName() << " ";
            }
            std::cout << ": ";
            std::cin >> brandChoice;
            auto brand = brands[brandChoice - 1];

            if (manufacturers.empty()) {
                std::cout << "No manufacturers available. Please add a manufacturer first." << std::endl;
                break;
            }

            std::cout << "Choose manufacturer: ";
            for (size_t i = 0; i < manufacturers.size(); ++i) {
                std::cout << i + 1 << ". " << manufacturers[i]->getName() << " ";
            }
            std::cout << ": ";
            std::cin >> manufacturerChoice;
            auto manufacturer = manufacturers[manufacturerChoice - 1];

            auto part = std::make_shared<Part>(partName, partCode, price, category, brand, manufacturer);
            catalog.addPart(part);
            std::cout << "Part added successfully." << std::endl;
            break;
        }
        case 2: {
            catalog.display();
            break;
        }
        case 3: {
            std::string partCode;
            std::cout << "Enter part code to find: ";
            std::cin >> partCode;
            auto foundPart = catalog.findPart(partCode);
            if (foundPart) {
                foundPart->display();
            }
            else {
                std::cout << "Part not found." << std::endl;
            }
            break;
        }
        case 4: {
            std::string partCode;
            std::cout << "Enter part code to remove: ";
            std::cin >> partCode;
            catalog.removePart(partCode);
            std::cout << "Part removed successfully." << std::endl;
            break;
        }
        case 5: {
            std::string categoryName;
            std::cout << "Enter category name: ";
            std::cin >> categoryName;
            auto category = std::make_shared<Category>(categoryName);
            categories.push_back(category);
            std::cout << "Category added successfully." << std::endl;
            break;
        }
        case 6: {
            std::string brandName;
            std::cout << "Enter brand name: ";
            std::cin >> brandName;
            auto brand = std::make_shared<Brand>(brandName);
            brands.push_back(brand);
            std::cout << "Brand added successfully." << std::endl;
            break;
        }
        case 7: {
            std::string manufacturerName;
            std::cout << "Enter manufacturer name: ";
            std::cin >> manufacturerName;
            auto manufacturer = std::make_shared<Manufacture>(manufacturerName);
            manufacturers.push_back(manufacturer);
            std::cout << "Manufacturer added successfully." << std::endl;
            break;
        }
        case 8: {
            std::cout << "Exiting program." << std::endl;
            break;
        }
        default: {
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
        }
    } while (choice != 8);

    return 0; // Завершення програми
}
