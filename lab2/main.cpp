#include "stdafx.h"
#include <iostream>
using namespace std;

class Matrix{
private:
	int n, m, **content;
public:
	Matrix(int, int);
	void readMatrix();
	long maxEvenSumRow();
	void deleteRow(int);
	void printMatrix();
};

int main() {
	int n, m;
	cout << "Enter matrix size: ";
	cin >> n >> m;

	Matrix matrix(n, m);
	matrix.readMatrix();
	matrix.deleteRow(matrix.maxEvenSumRow());
	matrix.printMatrix();

	return 0;
}

Matrix::Matrix(int n, int m){
	this->n = n;
	this->m = m;

	content = new int*[n];

	for (int i = 0; i < n; i++){
		content[i] = new int[m];
	}
}
void Matrix::readMatrix(){
	cout << "Enter your matrix:\n";

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> content[i][j];
		}
	}
}
long Matrix::maxEvenSumRow(){
	long max = -9223372036854775807;
	int nmax = 0;

	for (int i = 0; i < n; i++){
		int sum = 0;
		for (int j = 0; j < m; j++){
			if (content[i][j] % 2 == 0) {
				sum += content[i][j];
			}
		}
		if (sum > max) {
			max = sum;
			nmax = i;
		}
	}
	return nmax;
}
void Matrix::deleteRow(int row){
	n--;
	for (int i = row; i < n; i++){
		content[i] = content[i + 1];
	}
}
void Matrix::printMatrix(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout.width(3);
			cout << content[i][j];
		}
		cout << endl;
	}
	system("pause");
}
