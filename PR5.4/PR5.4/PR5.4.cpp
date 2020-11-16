// Лабораторна робота № 5.4

#include <iostream>
#include <cmath>

using namespace std;

int S0(const int K, const int N);
int S1(const int K, const int N, const int i);
int S2(const int K, const int N, const int& i);
int S3(const int K, const int N, const int i, double t);
int S4(const int K, const int N, const int i, double t);

int main()
{
	int K, N;
	cout << "K = "; cin >> K;
	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << S0(K, N) << endl;
	cout << "(rec up ++) S1 = " << S1(K, N, K) << endl;
	cout << "(rec up --) S2 = " << S2(K, N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(K, N, K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, N, N, 0) << endl;
	return 0;
}

int S0(const int K, const int N)
{
	double s = 0;
	for (int K = 1; K <= N; K++)
		s += (1+sqrt(1+K*K))/(K*K);
	return s;
}	
int S1(const int K, const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return (1 + sqrt(1 + K * K)) / (K * K) + S1(K, N, i + 1);
}
int S2(const int K, const int N, const int &i)	
{
	if (i < 1)
		return 0;
	else
		return (1 + sqrt(1 + K * K)) / (K * K) + S2(K, N, i - 1);
}
int S3(const int K, const int N, const int i, double t)
{
	t = t + (1 + sqrt(1 + K * K)) / (K * K);
	if (i >= 1)
		return t;
	else
		return S3(K, N, i + 1, t);
}
int S4(const int K, const int N, const int i, double t)
{
	t = t + (1 + sqrt(1 + K * K)) / (K * K);
	if (i <= 1)
		return t;
	else
		return S4(K, N, i - 1, t);
}
