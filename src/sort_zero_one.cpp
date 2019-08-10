//============================================================================
// Name        : sort_zero_one.cpp
// Author      : OmarKSamy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

//void sortBinaryArray(int a[], int n)
//{
//	int count_moves = 0;
//	int j = -1;
//	for (int i = 0; i < n; i++) {
//
//		// if number is smaller than 1
//		// then swap it with j-the number
//		if (a[i] < 1) {
//			j++;
//			swap(a[i], a[j]);
//			if (a[i] != a[j]){
//				count_moves++;
//			}
//		}
//	}
//	cout << "moves sorting for zeros: " << count_moves << endl;
//}
//
//void sortBinaryArray1(int a[], int n)
//{
//	int count_moves = 0;
//	int j = -1;
//	for (int i = 0; i < n; i++) {
//
//		// if number is smaller than 1
//		// then swap it with j-the number
//		if (a[i] > 0) {
//			j++;
//			swap(a[i], a[j]);
//			if (a[i] != a[j]){
//				count_moves++;
//			}
//		}
//	}
//	cout << "moves sorting for ones: " << count_moves << endl;
//}
//
//void segArray(int arr[], int n)
//{
//	int count = 0; // Counts the no of zeros in arr
////	int count_moves = 0;
////	int arr1[21];
//		for (int i = 0; i < n; i++) {
//			if (arr[i] == 0)
//				count++;
//		}
//
//		// Loop fills the arr with 0 until count
//		for (int i = 0; i < count; i++)
//		{
////			if (arr[i] != 0)
////			{
//				arr[i] = 0;
////				arr1[count_moves] = i;
////				count_moves++;
////			}
//		}
//
//		// Loop fills remaining arr space with 1
//		for (int i = count; i < n; i++)
//			arr[i] = 1;
////		cout << "moves seg: " << count_moves;
//}
//
//void segArray1(int arr[], int n)
//{
//	int count = 0; // Counts the no of zeros in arr
//
//		for (int i = 0; i < n; i++) {
//			if (arr[i] == 1)
//				count++;
//		}
//
//		// Loop fills the arr with 0 until count
//		for (int i = 0; i < count; i++)
//			arr[i] = 1;
//
//		// Loop fills remaining arr space with 1
//		for (int i = count; i < n; i++)
//			arr[i] = 0;
//}

int minSort(int array[], int size){
	int min_moves = 0;
	int count_moves_1 = 0;
	int count_moves_0 = 0;
	int j0 = -1;
	int j1 = -1;
	int array1[size];
	for(int i = 0; i < size; i++){
		array1[i] = array[i];
	}
	for (int i = 0; i < size; i++) {
		if (array[i] < 1) {
			j0++;
			swap(array[i], array[j0]);
			if (array[i] != array[j0]){
				count_moves_0 = fabs(j0 - i);
			}
		}
	}
	for (int i = 0; i < size; i++) {
		if (array1[i] > 0) {
			j1++;
			swap(array1[i], array1[j1]);
			if (array1[i] != array1[j1]){
				count_moves_1 = fabs(j1 - i);
			}
		}
	}
	if (count_moves_1 < count_moves_0){
		min_moves = count_moves_1;
	}
	else{
		min_moves = count_moves_0;
	}
	return min_moves;
}

// Driver code
int main()
{
	int a[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int b[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int c[] = { 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1 };
//	int d[] = { 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1 };
//	int e[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
//	int f[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	int g[] = { 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1 };
//	int h[] = { 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1 };
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	int o = sizeof(c) / sizeof(c[0]);
//	int p = sizeof(d) / sizeof(d[0]);
//	int q = sizeof(e) / sizeof(e[0]);
//	int r = sizeof(f) / sizeof(f[0]);
//	int s = sizeof(g) / sizeof(g[0]);
//	int t = sizeof(h) / sizeof(h[0]);
	int min_moves_a = minSort(a, m);
	int min_moves_b = minSort(b, n);
	int min_moves_c = minSort(c, o);
	cout << "Minimum moves in an already zero-sorted array: " << min_moves_a << endl;
	cout << "Minimum moves in an already one-sorted array: " << min_moves_b << endl;
	cout << "Minimum moves in a non-sorted array: " << min_moves_c << endl;
//	sortBinaryArray(a, m);
//	sortBinaryArray(d, p);
//	sortBinaryArray1(b, n);
//	sortBinaryArray1(c, o);
//	segArray(e, q);
//	segArray(h, t);
//	segArray1(f, r);
//	segArray1(g, s);
//	cout << "Sorting for zeros an already sorted array: ";
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	cout << "Sorting for zeros a non sorted array: ";
//	for (int l = 0; l < p; l++)
//		cout << d[l] << " ";
//	cout << endl;
//	cout << "Sorting for ones an already sorted array: ";
//	for (int j = 0; j < m; j++)
//		cout << b[j] << " ";
//	cout << endl;
//	cout << "Sorting for ones a non sorted array: ";
//	for (int k = 0; k < o; k++)
//		cout << c[k] << " ";
//	cout << endl;
//	cout << "Segregating for zeros an already sorted array: ";
//	for (int u = 0; u < q; u++)
//		cout << e[u] << " ";
//	cout << endl;
//	cout << "Segregating for zeros a non sorted array: ";
//	for (int v = 0; v < t; v++)
//		cout << h[v] << " ";
//	cout << endl;
//	cout << "Segregating for ones an already sorted array: ";
//	for (int w = 0; w < r; w++)
//		cout << f[w] << " ";
//	cout << endl;
//	cout << "Segregating for zeros a non sorted array: ";
//	for (int x = 0; x < s; x++)
//		cout << g[x] << " ";
//	cout << endl;
	return 0;
}
