#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category {
public:
    // ����������� ����� Category �������� ���� ���� name ��������� ���������� name.
    Category(const std::string& name);

    // ����� getName ������� ����� �������.
    std::string getName() const;

private:
    // ����� �������.
    std::string name;
};

#endif // CATEGORY_H
