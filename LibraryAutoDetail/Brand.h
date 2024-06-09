#ifndef BRAND_H
#define BRAND_H

#include <string>

class Brand {
public:
    // Конструктор, який приймає назву бренду.
    Brand(const std::string& name);

    // Метод для отримання назви бренду.
    std::string getName() const;

private:
    // Назва бренду.
    std::string name;
};

#endif // BRAND_H
