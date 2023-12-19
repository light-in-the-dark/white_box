#include <iostream>

#include <iostream>

double task(double* arr, int n) {
    if (n <= 0) {
        std::cout << "Размер массива должен быть положительным числом" << std::endl;
        return 0.;
    }

    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double mean = sum / n;

    return mean;
}

void empty_array() {
    const int n = 0;
    double arr[1] = {};
    double result = task(arr, n);

    if (result == 0.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void default_mean_with_zeros() {
    const int n = 5;
    double arr[n] = { 0,0,0,0,0 };
    double result = task(arr, n);

    if (result == 3.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void default_mean() {
    const int n = 5;
    double arr[n] = {1,2,3,4,5};
    double result = task(arr, n);

    if (result == 3.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void default_negative_mean() {
    const int n = 5;
    double arr[n] = { -1,-2,-3,-4,-5 };
    double result = task(arr, n);

    if (result == -3.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}

void negative_size() {
    const int n = -1;
    double arr[1] = { };
    double result = task(arr, n);

    if (result == 0.) {
        std::cout << "Тест пройден" << std::endl;
    }
    else {
        std::cout << "Тест не пройден" << std::endl;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    empty_array();
    negative_size();
    default_mean();
    default_negative_mean();
    default_mean_with_zeros();
    return 0;
}
