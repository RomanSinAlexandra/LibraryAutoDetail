#ifndef CATALOG_H
#define CATALOG_H

#include "Part.h" // �������� ���������� ���� ����� Part.
#include <vector> // �������� �������� ��� ������������ ���������� vector.
#include <memory> // �������� �������� ��� ������ � ����������� std::shared_ptr.

class Catalog {
public:
    // ����� ��� ��������� ���� ���������� �� ��������.
    void addPart(std::shared_ptr<Part> part);

    // ����� ��� ��������� ���������� � �������� �� �������.
    void removePart(const std::string& partNumber);

    // ����� ��� ������ ���������� � ������� �� �������.
    std::shared_ptr<Part> findPart(const std::string& partNumber) const;

    // ����� ��� ����������� ��� ��������� � �������.
    void display() const;

private:
    // ������ ��� ��������� ��������� �� ����������.
    std::vector<std::shared_ptr<Part>> parts;
};

#endif // CATALOG_H
