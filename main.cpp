#include <iostream>

double task(int n) {
    if (n <= 0) {
        std::cout << "Размер массива должен быть положительным числом" << std::endl;
        return 0.;
    }

    double* arr = new double[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double mean = sum / n;
    delete[] arr;

    return mean;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    std::cin >> n;
    double result = task(n);
    std::cout << result;
    return 0;
}
