// main.cpp
#include "main.h"
#include <iostream>

Workshop::Workshop(int id, const std::string& name, const std::string& managerName, int workerCount, bool isOperational, float area)
    : id(id), name(name), managerName(managerName), workerCount(workerCount), isOperational(isOperational), area(area) {}

Workshop::Workshop() : id(0), workerCount(0), isOperational(false), area(0.0f), name("Unknown"), managerName("Unknown") {}

void Workshop::Print() {
    std::cout << "ID: " << id << "\n"
        << "Name: " << name << "\n"
        << "Manager Name: " << managerName << "\n"
        << "Worker Count: " << workerCount << "\n"
        << "Operational: " << (isOperational ? "Yes" : "No") << "\n"
        << "Area: " << area << " sq.m" << std::endl;
}

void Workshop::Input() {
    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cout << "Enter Workshop Name: ";
    std::cin.ignore(); // Ignore leftover newline character
    std::getline(std::cin, name);
    std::cout << "Enter Manager Name: ";
    std::getline(std::cin, managerName);
    std::cout << "Enter Worker Count: ";
    std::cin >> workerCount;
    std::cout << "Is Operational (0 for No, 1 for Yes): ";
    std::cin >> isOperational;
    std::cout << "Enter Area: ";
    std::cin >> area;
}

int main() {
    // Создание объекта Workshop с инициализацией всех данных
    Workshop workshop1(1, "Assembly", "John Smith", 50, true, 1500.5);
    workshop1.Print();

    // Создание динамического объекта Workshop
    Workshop* workshop2 = new Workshop(2, "Painting", "Jane Doe", 30, false, 1200.0);
    workshop2->Print();
    delete workshop2;

    // Ввод данных с клавиатуры
    Workshop workshop3;
    workshop3.Input();
    workshop3.Print();

    return 0;
}
