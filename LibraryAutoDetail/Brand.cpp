#include "Brand.h"

// Конструктор класу Brand ініціалізує член name переданим параметром name.
Brand::Brand(const std::string& name) : name(name) {}

// Метод getName повертає назву бренду.
std::string Brand::getName() const {
    return name;
}
