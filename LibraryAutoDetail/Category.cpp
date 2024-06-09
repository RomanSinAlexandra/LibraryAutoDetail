#include "Category.h"

// Конструктор класу Category ініціалізує член name переданим параметром name.
Category::Category(const std::string& name) : name(name) {}

// Метод getName повертає назву категорії.
std::string Category::getName() const {
    return name;
}
