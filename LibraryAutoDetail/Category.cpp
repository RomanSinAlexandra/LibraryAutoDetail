#include "Category.h"

// ����������� ����� Category �������� ���� name ��������� ���������� name.
Category::Category(const std::string& name) : name(name) {}

// ����� getName ������� ����� �������.
std::string Category::getName() const {
    return name;
}
