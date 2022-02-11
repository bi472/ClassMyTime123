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
		m_hour = 0;
		m_min = 0;
		m_sec = 0;
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

	void print() {
		cout << "Time: Hour: " << m_hour << " Minute: " << m_min << " Second: " << m_sec << endl;
	}
};

int main()
{
	int hours, min,sec;
	cout << "First example of class: " << endl;
	MyTime time1 = MyTime();
	time1.print();
	cout << "Print hours: " << endl;
	cin >> hours;
	MyTime time2 = MyTime(hours);
	time2.print();
	cout << "Print minutes: " << endl;
	cin >> min;
	MyTime time3 = MyTime(hours, min);
	time3.print();
	cout << "Print seconds: " << endl;
	cin >> sec;
	MyTime time4 = MyTime(hours, min, sec);
	time4.print();
}