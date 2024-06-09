#include "Manufacture.h"

// Конструктор класу Manufacture ініціалізує член name переданим параметром name.
Manufacture::Manufacture(const std::string& name) : name(name) {}

// Метод getName повертає назву виробника.
std::string Manufacture::getName() const {
    return name;
}
