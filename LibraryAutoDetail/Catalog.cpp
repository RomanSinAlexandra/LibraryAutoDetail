#include "Catalog.h"
#include <algorithm>
#include <iostream>

// ���� ���� ���������� �� ��������.
void Catalog::addPart(std::shared_ptr<Part> part) {
    parts.push_back(part);
}

// ������� ���������� � �������� �� �������.
void Catalog::removePart(const std::string& partNumber) {
    // ����������� �������� erase-remove ��� ��������� �������� �� ������� ����������.
    parts.erase(std::remove_if(parts.begin(), parts.end(),
        [&partNumber](const std::shared_ptr<Part>& part) { return part->getPartNumber() == partNumber; }),
        parts.end());
}

// ��������� ���������� � ������� �� �������.
std::shared_ptr<Part> Catalog::findPart(const std::string& partNumber) const {
    // ����������� �� ��� ����������� � �������.
    for (const auto& part : parts) {
        // ���� ����� ���������� ������� � �������, ������� ��������� �� �� ����������.
        if (part->getPartNumber() == partNumber) {
            return part;
        }
    }
    // ���� ���������� �� ��������, ������� nullptr.
    return nullptr;
}

// ³������� ���������� ��� �� ���������� � �������.
void Catalog::display() const {
    // �������� ���������� ��� ����� ���������� � �������.
    for (const auto& part : parts) {
        part->display();
    }
}
