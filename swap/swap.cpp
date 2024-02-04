#include <iostream>

using namespace std;

template<typename T>
class Swapper
{

public:
	void Swap(T& a, T& b);
};

template<typename T>
void Swapper<T>::Swap(T& a, T& b)
{
	T buffer = a;
	a = b;
	b = buffer;
}


int main()
{
	Swapper<int> swap;
	int a = 5;
	int b = 3;
	swap.Swap(a,b);
	cout << a << " " << b << endl;
}


