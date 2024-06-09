#ifndef MANUFACTURE_H
#define MANUFACTURE_H

#include <string>

class Manufacture {
public:
    // Конструктор, який приймає назву виробника.
    Manufacture(const std::string& name);

    // Метод для отримання назви виробника.
    std::string getName() const;

private:
    // Назва виробника.
    std::string name;
};

#endif // MANUFACTURER_H