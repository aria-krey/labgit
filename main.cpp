#include <iostream>

using namespace std;

int main()
{
    #include <iostream>
#include <vector>
#include <string>

// Объявление функций
void readFromFile(const std::string& filename, std::vector<std::string>& lines);
void printToScreen(const std::vector<std::string>& lines);
void writeToFile(const std::string& filename, const std::vector<std::string>& lines);

int main() {
    std::string inputFile = "input.txt"; // Имя входного файла
    std::string outputFile = "output.txt"; // Имя выходного файла
    std::vector<std::string> lines; // Вектор для хранения строк

    // Вызов функций (пока пустых)
    readFromFile(inputFile, lines);
    printToScreen(lines);
    writeToFile(outputFile, lines);

    return 0;
}

// Заглушка: чтение из файла
void readFromFile(const std::string& filename, std::vector<std::string>& lines) {
    // Заглушка функции
}

// Заглушка: вывод на экран
void printToScreen(const std::vector<std::string>& lines) {
    // Заглушка функции
}

// Заглушка: запись в файл
void writeToFile(const std::string& filename, const std::vector<std::string>& lines) {
    // Заглушка функции
}

}
