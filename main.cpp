#include <iostream>

using namespace std;

int main()
{
    #include <iostream>
#include <vector>
#include <string>

// ���������� �������
void readFromFile(const std::string& filename, std::vector<std::string>& lines);
void printToScreen(const std::vector<std::string>& lines);
void writeToFile(const std::string& filename, const std::vector<std::string>& lines);

int main() {
    std::string inputFile = "input.txt"; // ��� �������� �����
    std::string outputFile = "output.txt"; // ��� ��������� �����
    std::vector<std::string> lines; // ������ ��� �������� �����

    // ����� ������� (���� ������)
    readFromFile(inputFile, lines);
    printToScreen(lines);
    writeToFile(outputFile, lines);

    return 0;
}

// ��������: ������ �� �����
void readFromFile(const std::string& filename, std::vector<std::string>& lines) {
    // �������� �������
}

// ��������: ����� �� �����
void printToScreen(const std::vector<std::string>& lines) {
    // �������� �������
}

// ��������: ������ � ����
void writeToFile(const std::string& filename, const std::vector<std::string>& lines) {
    // �������� �������
}

}
