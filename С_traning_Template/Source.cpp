#include <iostream>
#include <Windows.h>

using namespace std;

template <typename T>

T min_ch(const T f, const T s)
{
	return (f > s) ? f : s;
}

template <class T>
class Array
{
	T* arr;
	int size;
public:
	Array(const int n_size, const T *n_arr);
	T& operator [](int index)
	{
		return arr[index];
	}
	T average();
	~Array() {
		delete[] arr;
	}

private:

};

template <class T>
T Array<T>::average()
{
	T aver = 0;
	for (int i = 0; i < size; i++)
	{
		aver += this->arr[i];
	}
	return aver / (T)size;
}

template <class T>
Array<T>::Array(const int n_size, const T* n_arr) :
	size(n_size)
{
	arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = n_arr[i];
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Задание 1
	cout << min_ch(1, 2);
	//Задание 2
	const int count = 10;
	int arr1[count] = { 1,4,7,2,4,6,1,2,6,1 };
	double arr2[count] = { 1.3,4,5.5,1,23,3,4,5.2,4.5 };
	Array<int> f(10, arr1);
	cout << f.average() << endl;
	Array<double> s(10, arr2);
	cout << s.average() << endl;
}