#include "Manufacture.h"

// ����������� ����� Manufacture �������� ���� name ��������� ���������� name.
Manufacture::Manufacture(const std::string& name) : name(name) {}

// ����� getName ������� ����� ���������.
std::string Manufacture::getName() const {
    return name;
}
