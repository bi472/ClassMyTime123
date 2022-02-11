// ClassMyTime.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class MyTime
{
private:
	int m_hour = 0, m_min = 0, m_sec = 0;
	char* m_time;

public:
	MyTime() {

	}

	MyTime(int hour) {
		m_hour = hour;
	}

	MyTime(int hour, int min) {
		m_hour = hour;
		m_min = min;
	}
	MyTime(int h, int m, int s) {
		m_hour = h;
		m_min = m;
		m_sec = s;
	}
	MyTime(char* time) {
		m_time = time;
	}

	int get_h() {
		return m_hour;
	}

	int get_m() {
		return m_min;
	}

	int get_s() {
		return m_sec;
	}

	char* get_time() {
		return m_time;
	}

	void set_h(int h) {
		m_hour = h;
	}

	void set_m(int m) {
		m_min = m;
	}

	void set_s(int s) {
		m_sec = s;
	}
	void set_time(char* time) {
		m_time = time;
	}
};

int main()
{
	MyTime time1 = MyTime();
	MyTime time2 = MyTime(11);
	MyTime time3 = MyTime(12, 21);
	MyTime time4 = MyTime(13, 22, 20);
	cout << "Time: Hour: " << time1.get_h() << " Minute: " << time1.get_m() << " Second: " << time1.get_s() << endl;
	cout << "Time: Hour: " << time2.get_h() << endl;
	cout << "Time: Hour: " << time3.get_h() << " Minute: " << time3.get_m() << endl;
	cout << "Time: Hour: " << time4.get_h() << " Minute: " << time4.get_m() << " Second: " << time4.get_s() << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
