#ifndef PART_H
#define PART_H

#include <string>
#include <memory>
#include "Category.h"
#include "Brand.h"
#include "Manufacture.h"

class Part {
public:
    // Конструктор класу Part ініціалізує всі його члени переданими значеннями.
    Part(const std::string& name, const std::string& partNumber, double price,
        std::shared_ptr<Category> category, std::shared_ptr<Brand> brand, std::shared_ptr<Manufacture> manufacturer);

    // Віртуальний деструктор для коректного видалення об'єктів.
    virtual ~Part() = default;

    // Методи доступу до приватних членів класу.
    std::string getName() const;
    std::string getPartNumber() const;
    double getPrice() const;
    std::shared_ptr<Category> getCategory() const;
    std::shared_ptr<Brand> getBrand() const;
    std::shared_ptr<Manufacture> getManufacture() const;

    // Віртуальний метод для відображення інформації про деталь.
    virtual void display() const;

private:
    // Приватні члени класу: назва, номер, ціна, категорія, бренд, виробник.
    std::string name;
    std::string partNumber;
    double price;
    std::shared_ptr<Category> category;
    std::shared_ptr<Brand> brand;
    std::shared_ptr<Manufacture> manufacture;
};

#endif // PART_H
