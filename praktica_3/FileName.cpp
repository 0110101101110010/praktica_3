#include <vector>
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <iomanip> 

using namespace std;

class Car 
{

public:
	string manufacturer;
	string model;
	string color;
	int capusity;
	double maxspeed;

	string str;
	int lineNumbers = 0;



	ofstream fout;
	ifstream fin;


// ввод в файл
void foutManufacturer(string manufacturer)
{
	fout.open("manufacturer.txt", ofstream::app);
	
	if (fout.is_open())
	{
		fout << manufacturer;
		fout << "\n";

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();
}

void foutModel(string model)
{
	fout.open("model.txt", ofstream::app);

	if (fout.is_open())
	{
		fout << model;
		fout << "\n";

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();
}
void foutColor(string color)
{
	fout.open("color.txt", ofstream::app);

	if (fout.is_open())
	{
		fout << color;
		fout << "\n";

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();
}
void foutCapusity(int capusity)
{
	fout.open("capusity.txt", ofstream::app);

	if (fout.is_open())
	{
		fout << capusity;
		fout << "\n";

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();
}
void foutMaxspeed(double maxspeed)
{
	fout.open("maxspeed.txt", ofstream::app);

	if (fout.is_open())
	{
		fout << maxspeed;
		fout << "\n";

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();
}
// вывод из файла
void finManufacturer(int a)
{
	lineNumbers = 0;
	fin.open("manufacturer.txt", ofstream::app);

	if (fin.is_open())
	{
		while (getline(fin, str, '\n' ))
		{
			if (lineNumbers == a)
			{
				cout << str << endl;
			}

			lineNumbers++;
		}

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();

}
void finModel(int a)
{
	lineNumbers = 0;
	fin.open("model.txt", ofstream::app);

	if (fin.is_open())
	{
		

		for(int i = 0; i<(a+1); i++)
		{	
			if (lineNumbers == a)
			{
				cout << "model";
				getline(fin, str, '\n');
				cout << str << endl;
			}

			lineNumbers++;
		}

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();

}
void finColor(int a)
{
	lineNumbers = 0;
	fin.open("color.txt", ofstream::app);

	if (fin.is_open())
	{
		while (getline(fin, str, '\n'))
		{
			if (lineNumbers == a)
			{
				cout << str << endl;
			}

			lineNumbers++;
		}

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();

}
void finCapusity(int a)
{
	lineNumbers = 0;
	fin.open("capusity.txt", ofstream::app);

	if (fin.is_open())
	{
		while (getline(fin, str, '\n'))
		{
			if (lineNumbers == a)
			{
				cout << str << endl;
			}

			lineNumbers++;
		}

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();

}
void finMaxspeed(int a)
{
	lineNumbers = 0;
	fin.open("maxspeed.txt", ofstream::app);

	if (fin.is_open())
	{
		while (getline(fin, str, '\n'))
		{
			if (lineNumbers == a)
			{
				cout << str << endl;
			}

			lineNumbers++;
		}

	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	fout.close();

}
};

int main()
{
	setlocale(0, ""); 

	string manufacturer;
	string model;
	string color;
	int capusity = 0;
	double maxspeed = 0.0;
	int iter = 0;
	int switch_1 = 0;
	bool is_valid = false;
	bool while_1 = true;

	Car TestCar;

	while (while_1)
	{

		cout << "1. Ввести конфигурацию автомобиля\n";
		cout << "2. Вывести конфигурацию автомобиля\n";
		cout << "0. Выход\n";
		cin >> switch_1;

		switch (switch_1)
		{
		case 1:

			
			do
			{
				cout << "Введите марку автомобиля: ";
				cin >> manufacturer;
				is_valid = true;
				for (char c : manufacturer) {
					if (!isalpha(c)) {
						cout << "Ошибка! производитель может содержать только буквы латинского алфавита." << endl;
						is_valid = false;
						break;
					}
				}
			} while (!is_valid);
			TestCar.foutManufacturer(manufacturer);

			cout << "Введите модель автомобиля: ";
			cin >> model;
			TestCar.foutModel(model);

			do
			{
				cout << "Введите цвет автомобиля: ";
				cin >> color;
				is_valid = true;
				for (char c : color) {
					if (!isalpha(c)) {
						cout << "Ошибка! Цвет может содержать только буквы латинского алфавита." << endl;
						is_valid = false;
						break;
					}
				}
			} while (!is_valid);
			TestCar.foutColor(color);

			do
			{
				cout << "Введите количество человек которое может поместиться в атомобиль: ";
				cin >> capusity;

				is_valid = true;

				if (cin.fail()) {

					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Неверный ввод. Введите только цифры." << endl;
					is_valid = true;
				}
				else {
					is_valid = false;
				}
			} while (is_valid);
			TestCar.foutCapusity(capusity);

			
			
			do
			{
				cout << "Введите максимальную скорость автомобиля: ";
				cin >> maxspeed;

				is_valid = true;

				if (cin.fail()) {

					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Неверный ввод. Введите только цифры." << endl;
					is_valid = true;
				}
				else {
					is_valid = false;
				}
			} while (is_valid);
			TestCar.foutMaxspeed(maxspeed);

			

			break;
		case 2:

			cout << "Какую машину вывести?\n";
			cin >> iter;
			iter--;
			TestCar.finManufacturer(iter);
			TestCar.finModel(iter);
			TestCar.finColor(iter);
			TestCar.finCapusity(iter);
			TestCar.finMaxspeed(iter);

			break;
		case 0:
			cout << "Выход";
			while_1 = false;
			break;
		default:
			cout << "Ошибка! Введите коректное значение";
			break;
		}

	}
}

