#ifndef UTILITIES_H
#define UTILITIES_H

#include "Lesson2/closerpair.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#include <chrono>
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

#define EPSILON 0.000000001f

void writeToFile(std::vector<Point> &arr);
vector<int> readDataFromFile(string path);

void ShowdArray(int*arr, int size);
void ShowdArray(vector<int>arr, int size);
void showMatrix(vector<vector<int>> matrix);
void showMatrix(int** matrix, int Row, int Col);

int randValue(int range);
bool checkvalue(int* arr, int size, int value);
vector<vector<int>> randomMatrix(int row, int col);

#endif // UTILITIES_H