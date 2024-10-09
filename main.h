// main.h
#ifndef MAIN_H
#define MAIN_H

#include <string>

class Workshop {
private:
    int id;
    std::string name; // Название цеха
    std::string managerName; // Имя начальника цеха
    int workerCount; // Количество рабочих
    bool isOperational; // Работает ли цех
    float area; // Площадь цеха

public:
    Workshop(int id, const std::string& name, const std::string& managerName, int workerCount, bool isOperational, float area);
    Workshop();
    void Print();
    void Input();
};

#endif // MAIN_H
