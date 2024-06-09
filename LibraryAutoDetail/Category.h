#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category {
public:
    // Конструктор класу Category ініціалізує його член name переданим параметром name.
    Category(const std::string& name);

    // Метод getName повертає назву категорії.
    std::string getName() const;

private:
    // Назва категорії.
    std::string name;
};

#endif // CATEGORY_H
