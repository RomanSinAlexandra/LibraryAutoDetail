#ifndef MANUFACTURE_H
#define MANUFACTURE_H

#include <string>

class Manufacture {
public:
    // �����������, ���� ������ ����� ���������.
    Manufacture(const std::string& name);

    // ����� ��� ��������� ����� ���������.
    std::string getName() const;

private:
    // ����� ���������.
    std::string name;
};

#endif // MANUFACTURER_H