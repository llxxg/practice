#include <iostream>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "калькулятор" << std::endl;
    int a = 100;
    double b = 200.0;
    int c = 20;
    int suma = a + b;
    int multiplication = a * b;
    double subtraction = a / b;
    int f = 7;
    int g = 2;
    int remainder = f % g;
    int minus = a - b;
    int stepen = pow(a, b);
    int a1 = -3;
    int coren = abs(a1);
    int square = sqrt(b);
    double k = 1.50;
    double LOG = log(k);
    float ce = 2.3;
    float CEIL = ceil(ce);
    float fl = 12.4;
    float FLOOR = floor(fl);
    float fa = 7.5;
    float fb = 4.4;
    float FMOD = fmod(fa, fb);
    double si = 25;
    double SIN = sin(si);
    float co = 36;
    float COS = cos(co);
    float COT = cos(co) / sin(si);
    std::cout << "a + b = " << suma << std::endl;
    std::cout << "a - b = " << minus << std::endl;
    std::cout << "a * b = " << multiplication << std::endl;
    std::cout << "a / b = " << subtraction << std::endl;
    std::cout << "a % b = " << remainder << std::endl;
    std::cout << "a ^ b = " << stepen << std::endl;
    std::cout << "Извлечение корня(а) = " << coren << std::endl;
    std::cout << "aqrt(b) = " << square << std::endl;
    std::cout << "log(k) = " << LOG << std::endl;
    std::cout << "Округление- = " << CEIL << std::endl;
    std::cout << "Округление+ = " << FLOOR << std::endl;
    std::cout << "Вычис остатка от а/б = " << FMOD << std::endl;
    std::cout << "Синус(25) = " << SIN << std::endl;
    std::cout << "Коинус(36) = " << COS << std::endl;
    std::cout << "сtg(x) = " << COT << std::endl;
}