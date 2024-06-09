#include "Catalog.h"
#include <algorithm>
#include <iostream>

// Додає нову запчастину до каталогу.
void Catalog::addPart(std::shared_ptr<Part> part) {
    parts.push_back(part);
}

// Видаляє запчастину з каталогу за номером.
void Catalog::removePart(const std::string& partNumber) {
    // Використовує алгоритм erase-remove для видалення елементу за номером запчастини.
    parts.erase(std::remove_if(parts.begin(), parts.end(),
        [&partNumber](const std::shared_ptr<Part>& part) { return part->getPartNumber() == partNumber; }),
        parts.end());
}

// Знаходить запчастину в каталозі за номером.
std::shared_ptr<Part> Catalog::findPart(const std::string& partNumber) const {
    // Проходиться по всім запчастинам у каталозі.
    for (const auto& part : parts) {
        // Якщо номер запчастини співпадає з шуканим, повертає посилання на цю запчастину.
        if (part->getPartNumber() == partNumber) {
            return part;
        }
    }
    // Якщо запчастину не знайдено, повертає nullptr.
    return nullptr;
}

// Відображує інформацію про всі запчастини в каталозі.
void Catalog::display() const {
    // Виводить інформацію про кожну запчастину у каталозі.
    for (const auto& part : parts) {
        part->display();
    }
}
