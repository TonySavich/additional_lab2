#include <iostream>
#include <random>
const int N = 15;
const int d = 10;


void shellsort(int n, int *x) {
	int h = 1;
	while (h < n / d) {
		h = 3 * h + 1;
	}
	while (h > 0) {
		for (int k = -1; k < n+1;k = k+h) {
			int i = k + h;
			while (i <= n) {
				int y = x[i];
				int j = i - h;
				while ((j > -1) && (x[j] > y)) {
					x[j+h] = x[j];
					j = j - h;
				}
				x[j + h] = y;
				i = i + h;
			}
		}
		
			h = h / 3;
		
		
	}
}



int main()
{
	int mas[N];
	for (int i = 0; i < N; i++) {
		mas[i] = rand() % 10;
	}
	for (int i = 0; i < N; i++) {
		std::cout << mas[i] << std::endl;
	}
	shellsort(N-1, mas);
	std::cout << "  " << std::endl;
		for (int i = 0; i < N; i++) {
			std::cout << mas[i] << std::endl;
		}
}


