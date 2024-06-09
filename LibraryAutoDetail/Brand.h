#ifndef BRAND_H
#define BRAND_H

#include <string>

class Brand {
public:
    // �����������, ���� ������ ����� ������.
    Brand(const std::string& name);

    // ����� ��� ��������� ����� ������.
    std::string getName() const;

private:
    // ����� ������.
    std::string name;
};

#endif // BRAND_H
