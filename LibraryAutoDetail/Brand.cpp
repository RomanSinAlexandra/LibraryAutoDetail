#include "Brand.h"

// ����������� ����� Brand �������� ���� name ��������� ���������� name.
Brand::Brand(const std::string& name) : name(name) {}

// ����� getName ������� ����� ������.
std::string Brand::getName() const {
    return name;
}
