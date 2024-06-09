#ifndef CATALOG_H
#define CATALOG_H

#include "Part.h" // Включаємо заголовний файл класу Part.
#include <vector> // Включаємо бібліотеку для використання контейнера vector.
#include <memory> // Включаємо бібліотеку для роботи з вказівниками std::shared_ptr.

class Catalog {
public:
    // Метод для додавання нової запчастини до каталогу.
    void addPart(std::shared_ptr<Part> part);

    // Метод для видалення запчастини з каталогу за номером.
    void removePart(const std::string& partNumber);

    // Метод для пошуку запчастини в каталозі за номером.
    std::shared_ptr<Part> findPart(const std::string& partNumber) const;

    // Метод для відображення всіх запчастин у каталозі.
    void display() const;

private:
    // Вектор для зберігання вказівників на запчастини.
    std::vector<std::shared_ptr<Part>> parts;
};

#endif // CATALOG_H
