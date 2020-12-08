#include<iostream>


int main() {
// Объявление и инициализация неотсортированного массива.
	const int size = 5;
	int arr[size] = { 4,5,1,2,3 };
// Вывод неотсортированного массива.
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	
	std::cout << endl;
// Сортировка массива	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1];
			}
		}
	}
// Вывод отсортированного массива.
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}					  
}
