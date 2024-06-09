#ifndef PART_H
#define PART_H

#include <string>
#include <memory>
#include "Category.h"
#include "Brand.h"
#include "Manufacture.h"

class Part {
public:
    // ����������� ����� Part �������� �� ���� ����� ���������� ����������.
    Part(const std::string& name, const std::string& partNumber, double price,
        std::shared_ptr<Category> category, std::shared_ptr<Brand> brand, std::shared_ptr<Manufacture> manufacturer);

    // ³��������� ���������� ��� ���������� ��������� ��'����.
    virtual ~Part() = default;

    // ������ ������� �� ��������� ����� �����.
    std::string getName() const;
    std::string getPartNumber() const;
    double getPrice() const;
    std::shared_ptr<Category> getCategory() const;
    std::shared_ptr<Brand> getBrand() const;
    std::shared_ptr<Manufacture> getManufacture() const;

    // ³��������� ����� ��� ����������� ���������� ��� ������.
    virtual void display() const;

private:
    // ������� ����� �����: �����, �����, ����, ��������, �����, ��������.
    std::string name;
    std::string partNumber;
    double price;
    std::shared_ptr<Category> category;
    std::shared_ptr<Brand> brand;
    std::shared_ptr<Manufacture> manufacture;
};

#endif // PART_H
