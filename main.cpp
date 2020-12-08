#include<iostream>


int main() {
	const int size = 5;
	int arr[size] = { 4,5,1,2,3 };

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}