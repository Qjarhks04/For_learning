#include <iostream>
#include <iomanip>
using namespace std;

void findStudentAverage(int score[][3], double stdAvg[], const int rowSize, const int colSize);
void findTestAverage(int score[][3], double tstAvg[], const int rowSize, const int colSize);

int main() {
	const int rowSize = 5;
	const int colSize = 3;
	int score[rowSize][colSize] = { {82, 65, 72},
									{73, 70, 80 },
									{91, 67, 40},
									{72, 72, 68 },
									{65, 90, 80} };

	double stdAvg[rowSize];
	double tstAvg[colSize];

	findStudentAverage(score, stdAvg, rowSize, colSize);
	findTestAverage(score, tstAvg, rowSize, colSize);

	cout << "		   시험 점수		평균" << endl;
	cout << "	  --------------------------    -----" << endl;
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << setw(12) << score[i][j];
		}
		cout << fixed << setprecision(2) << "	" << stdAvg[i] << endl;
	}
	cout << "	  --------------------------" << endl;
	cout << "최종 점수 ";
    for (int k = 0; k < colSize; k++) {
        cout << fixed << setprecision(2) << tstAvg[k] << setw(10);
    }
    cout << endl;
	
	return 0;
}

void findStudentAverage(int score[][3], double stdAvg[], const int rowSize, const int colSize) {
	for (int i = 0; i < rowSize; i++) {
		int sum = 0;
		for (int j = 0; j < colSize; j++) {
			sum += score[i][j];
		}
		stdAvg[i] = sum / colSize;
	}
}

void findTestAverage(int score[][3], double tstAvg[], const int rowSize, const int colSize) {
	for (int i = 0; i < colSize; i++) {
		int sum = 0;
		for (int j = 0; j < rowSize; j++) {
			sum += score[j][i];
		}
		tstAvg[i] = sum / rowSize;
	}
}