
#include <iostream>

using namespace std;

double mean(double num1, double num2) {
    return (num1 + num2) / 2;
}


double arrMeanValue(double array[], const int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum / size;
}


int mas(int arr[], const int size1) {
    for (int i = 0; i < size1; i++)
        if (arr[i] < 0)
            arr[i] = -arr[i];
    for (int i = 0; i < size1; i++)
        return arr[i];

}


double func(int num) {
    static int S = 10;
    int m = num * S;
    cout << S << "\n";
    return m;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "������ � 6.1\n";
    cout << "������� ��� �����: \n";
    int a, b;
    cin >> a >> b;

    cout << "������� �������������� = " << mean(a, b) << "\n\n";



    cout << "������ � 6.2\n";
    const int size = 6;
    double array[size] = { 5, -16, 88, 20, 7, -10 };
    arrMeanValue (array, size);
    cout << "������� �������������� = " << arrMeanValue(array, size) << "\n\n";
   

    cout << "������ � 6.3\n";
    const int size1 = 6;
    int arr[size1] = { -7, -6, -8, 3, 7, -1 };
    cout << "��������� ������: ";
    for (int i = 0; i < size1; i++)
        cout << arr[i] << " ";
    mas(arr, size1);
    cout << "\n";
    cout << "�������� ������: ";
    for (int i = 0; i < size1; i++)
        cout << arr[i] << " ";
    cout << "\n\n";


    cout << "������ � 6.4\n";
    int N;
    cout << "������� �����: \n";
    cin >> N;
    cout << func(N) << "\n";
    cout << "������� �����: \n";
    cin >> N;
    cout << func(N) << "\n";
    cout << "������� �����: \n";
    cin >> N;
    cout << func(N) << "\n";

    return 0;
}