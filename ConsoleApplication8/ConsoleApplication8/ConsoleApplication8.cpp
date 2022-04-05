//М = -52 (м = -20), Ж = -58 (ж = -26)
#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;

struct student {
	char name[50];
	char sex[2];
	int group;
	int number;
	int exam1;
	int exam2;
	int exam3;
	int test1;
	int test2;
	int test3;
	int test4;
	int test5;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int counterOfStudents = 13;
	int studentNumber;
	int helper;
	char names[50];
	int maleCounter = 0;
	int femaleCounter = 0;
	struct student StudentsList[100] = { "Иванов Иван Иванович", "М", 1313, 7, 4, 4, 4, 5, 4, 3, 5, 5, "Горечь Анна Ивановна", "Ж", 1313, 2, 5, 5, 5, 5, 5, 5, 5, 5, "Ломин Виктор Васильевич", "М", 1314, 7, 4, 5, 4, 5, 4, 5, 4, 5, "Корешева Юлия Андреевна", "Ж", 1301, 8, 4, 4, 4, 5, 5, 5, 5, 5, "Бирюкова Анна Андреевна", "Ж", 1313, 1, 3, 5, 4, 4, 4, 4, 4, 4, "Лобызяк Вера Юрьевна", "Ж", 1314, 5, 3, 3, 3, 3, 3, 3, 3, 3, "Мирный Олег Степанович", "М", 1301, 9, 5, 5, 5, 5, 5, 5, 5, 5, "Маратов Гурий Иванович", "М", 1210, 10, 4, 5, 5, 5, 4, 3, 4, 5, "Ива Давид Александрович", "М", 1314, 4, 5, 3, 3, 4, 4, 4, 3, 4, "Акимова Ира Дмитриевна", "Ж", 1203, 1, 4, 4, 4, 5, 4, 5, 5, 4, "Соменюк Артём Иванович", "М", 1313, 9, 5, 4, 5, 5, 3, 4, 4, 3, "Замятин Степан Олегович", "М", 1344, 1, 5, 5, 4, 5, 5, 5, 5, 5, "Лужина Софья Родионовна", "Ж", 1314, 5, 3, 3, 5, 3, 4, 4, 3, 4 };
	cout << "МЕНЮ: " << endl << "1. Создание новой записи о студенте" << endl << "2. Внесение изменений в уже имеющуюся запись" << endl << "3. Вывод всех данных о студентах" << endl << "4. Вывод информации обо всех студентах группы N" << endl << "5. Вывод топа самых успешных студентов с наивысшим по рейтингу средним баллом за прошедшую сессию." << endl << "6. Вывод количества студентов мужского и женского пола." << endl << "7. Вывод данных о студентах, которые не получают стипендию; учатся только на «хорошо» и «отлично»; учатся только на «отлично»." << endl << "8. Вывод данных о студентах, имеющих номер в списке – k." << endl;
	while (true)
	{
		cout << "Выберите действие из списка меню: ";
		cin >> helper;
		switch (helper)
		{
		case (1):
			//-----1.Создание новой записи о студенте-----//
			{
				for (int i = counterOfStudents; i < counterOfStudents + 1; i++)
				{
					cout << "ФИО: ";
					cin.getline(StudentsList[i].name, 50, '\n');
					cout << "Пол: ";
					cin >> StudentsList[i].sex;
					cout << "Группа: ";
					cin >> StudentsList[i].group;
					cout << "Номер в группе: ";
					cin >> StudentsList[i].number;
					cout << "Оценка за 1 экзамен: ";
					cin >> StudentsList[i].exam1;
					cout << "Оценка за 2 экзамен: ";
					cin >> StudentsList[i].exam2;
					cout << "Оценка за 3 экзамен: ";
					cin >> StudentsList[i].exam3;
					cout << "Оценка за 1 диф зачёт: ";
					cin >> StudentsList[i].test1;
					cout << "Оценка за 2 диф зачёт: ";
					cin >> StudentsList[i].test2;
					cout << "Оценка за 3 диф зачёт: ";
					cin >> StudentsList[i].test3;
					cout << "Оценка за 4 диф зачёт: ";
					cin >> StudentsList[i].test4;
					cout << "Оценка за 5 диф зачёт: ";
					cin >> StudentsList[i].test5;
				}
				counterOfStudents++;
			}
			break;
		case (2):
			//-----2.Внесение изменений в уже имеющуюся запись-----//
			{
				cout << "Укажите номер студента в списке студентов, чьи данные Вы хотите измeнить: ";
				cin >> studentNumber;
				cout << "Укажите номер данных студента, которые вы хотите изменить." << endl << "1. ФИО" << endl << "2. Пол" << endl << "3. Группа" << endl << "4. Номер в группе" << endl << "5. Оценка за 1 экзамен" << endl << "6. Оценка за 2 экзамен" << endl << "7. Оценка за 3 экзамен" << endl << "8. Оценка за 1 диф зачёт" << endl << "9. Оценка за 2 диф зачёт" << endl << "10. Оценка за 3 диф зачёт" << endl << "11. Оценка за 4 диф зачёт" << endl << "12. Оценка за 5 диф зачёт" << endl;
				cin >> helper;
				switch (helper) {
				case(1):
					cin.getline(StudentsList[studentNumber - 1].name, 50, '\n'); break;
				case(2):
					cin >> StudentsList[studentNumber - 1].sex; break;
				case(3):
					cin >> StudentsList[studentNumber - 1].group; break;
				case(4):
					cin >> StudentsList[studentNumber - 1].number; break;
				case(5):
					cin >> StudentsList[studentNumber - 1].exam1; break;
				case(6):
					cin >> StudentsList[studentNumber - 1].exam2; break;
				case(7):
					cin >> StudentsList[studentNumber - 1].exam3; break;
				case(8):
					cin >> StudentsList[studentNumber - 1].test1; break;
				case(9):
					cin >> StudentsList[studentNumber - 1].test2; break;
				case(10):
					cin >> StudentsList[studentNumber - 1].test3; break;
				case(11):
					cin >> StudentsList[studentNumber - 1].test4; break;
				case(12):
					cin >> StudentsList[studentNumber - 1].test5; break;
				default:
					cout << "Ошибка ввода." << endl; break;
				}
			}
			break;
		case (3):
			//-----3.Вывод всех данных о студентах.-----//
			{
				cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
				cout << "=============================================================================================================" << endl;
				for (int i = 0; i < counterOfStudents; i++)
				{
					cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].number << '\t' << StudentsList[i].exam1 << '\t' << StudentsList[i].exam2 << '\t' << StudentsList[i].exam3 << '\t' << StudentsList[i].test1 << '\t' << StudentsList[i].test2 << '\t' << StudentsList[i].test3 << '\t' << StudentsList[i].test4 << '\t' << StudentsList[i].test5 << endl << endl;
				}
			}
			break;
		case (4):
			//-----4.Вывод информации обо всех студентах группы N.-----//
			{
				cout << "Укажите номер группы, студентов которой Вы хотите увидеть:";
				cin >> helper;
				cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
				cout << "=============================================================================================================" << endl;
				for (int i = 0; i < counterOfStudents; i++)
				{
					if (StudentsList[i].group == helper)
					{
						cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].number << '\t' << StudentsList[i].exam1 << '\t' << StudentsList[i].exam2 << '\t' << StudentsList[i].exam3 << '\t' << StudentsList[i].test1 << '\t' << StudentsList[i].test2 << '\t' << StudentsList[i].test3 << '\t' << StudentsList[i].test4 << '\t' << StudentsList[i].test5 << endl;
					}
				}
			}
			break;
		case (5):
			//-----5.Вывод топа самых успешных студентов с наивысшим по рейтингу средним баллом за прошедшую сессию.-----//
			{
				for (int i = 0; i < counterOfStudents; i++)
				{
					for (int j = 1; j < (counterOfStudents - i); j++)
					{
						if ((StudentsList[j - 1].exam1 + StudentsList[j - 1].exam2 + StudentsList[j - 1].exam3 + StudentsList[j - 1].test1 + StudentsList[j - 1].test2 + StudentsList[j - 1].test3 + StudentsList[j - 1].test4 + StudentsList[j - 1].test5) / double(8) < (StudentsList[j].exam1 + StudentsList[j].exam2 + StudentsList[j].exam3 + StudentsList[j].test1 + StudentsList[j].test2 + StudentsList[j].test3 + StudentsList[j].test4 + StudentsList[j].test5) / double(8))
						{
							swap(StudentsList[j - 1], StudentsList[j]);
						}
					}
				}
				cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
				cout << "=============================================================================================================" << endl;
				for (int i = 0; i < counterOfStudents; i++)
				{
					cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].number << '\t' << StudentsList[i].exam1 << '\t' << StudentsList[i].exam2 << '\t' << StudentsList[i].exam3 << '\t' << StudentsList[i].test1 << '\t' << StudentsList[i].test2 << '\t' << StudentsList[i].test3 << '\t' << StudentsList[i].test4 << '\t' << StudentsList[i].test5 << endl;
				}
			}
			break;
		case (6):
			//-----6.Вывод количества студентов мужского и женского пола.-----//
			{
				for (int i = 0; i < counterOfStudents; i++)
				{
					if (int(StudentsList[i].sex[0]) == -52 || StudentsList[i].sex == "М")
					{
						maleCounter++;
					}
					if (int(StudentsList[i].sex[0]) == -58 || StudentsList[i].sex == "Ж")
					{
						femaleCounter++;
					}
				}
				cout << "Среди студентов " << maleCounter << " человек являются мужчинами, а " << femaleCounter << " – женщинами" << endl;
			}
			break;
		case (7):
			//-----7.Вывод данных о студентах, которые не получают стипендию; учатся только на «хорошо» и «отлично»; учатся только на «отлично»;-----//
			{
				cout << "Укажите номер группы студентов, о которых Вы хотите просмотреть информацию:" << endl << "1. Студенты, которые не получают стипендию" << endl << "2. Студенты, учащиеся только на «хорошо» и «отлично»" << endl << "3. Студенты, учащиеся только на «отлично»" << endl;
				cin >> helper;
				switch (helper) {
				case(1):
					cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
					cout << "=============================================================================================================" << endl;
					for (int i = 0; i < counterOfStudents; i++)
					{
						if (StudentsList[i].exam1 < 4 || StudentsList[i].exam2 < 4 || StudentsList[i].exam3 < 4 || StudentsList[i].test1 < 4 || StudentsList[i].test2 < 4 || StudentsList[i].test3 < 4 || StudentsList[i].test4 < 4 || StudentsList[i].test5 < 4)
						{
							{
								cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].number << '\t' << StudentsList[i].exam1 << '\t' << StudentsList[i].exam2 << '\t' << StudentsList[i].exam3 << '\t' << StudentsList[i].test1 << '\t' << StudentsList[i].test2 << '\t' << StudentsList[i].test3 << '\t' << StudentsList[i].test4 << '\t' << StudentsList[i].test5 << endl;
							}
						}
					}
					break;
				case(2):
					cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
					cout << "=============================================================================================================" << endl;
					for (int j = 0; j < counterOfStudents; j++)
					{
						if (StudentsList[j].exam1 > 3 && StudentsList[j].exam2 > 3 && StudentsList[j].exam3 > 3 && StudentsList[j].test1 > 3 && StudentsList[j].test2 > 3 && StudentsList[j].test3 > 3 && StudentsList[j].test4 > 3 && StudentsList[j].test5 > 3)
						{
							cout << j + 1 << '\t' << StudentsList[j].name << '\t' << '\t' << StudentsList[j].sex << '\t' << StudentsList[j].group << '\t' << StudentsList[j].number << '\t' << StudentsList[j].exam1 << '\t' << StudentsList[j].exam2 << '\t' << StudentsList[j].exam3 << '\t' << StudentsList[j].test1 << '\t' << StudentsList[j].test2 << '\t' << StudentsList[j].test3 << '\t' << StudentsList[j].test4 << '\t' << StudentsList[j].test5 << endl;
						}
					}
					break;
				case(3):
					cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
					cout << "=============================================================================================================" << endl;
					for (int j = 0; j < counterOfStudents; j++)
					{
						if (StudentsList[j].exam1 == 5 && StudentsList[j].exam2 == 5 && StudentsList[j].exam3 == 5 && StudentsList[j].test1 == 5 && StudentsList[j].test2 == 5 && StudentsList[j].test3 == 5 && StudentsList[j].test4 == 5 && StudentsList[j].test5 == 5)
						{
							cout << j + 1 << '\t' << StudentsList[j].name << '\t' << '\t' << StudentsList[j].sex << '\t' << StudentsList[j].group << '\t' << StudentsList[j].number << '\t' << StudentsList[j].exam1 << '\t' << StudentsList[j].exam2 << '\t' << StudentsList[j].exam3 << '\t' << StudentsList[j].test1 << '\t' << StudentsList[j].test2 << '\t' << StudentsList[j].test3 << '\t' << StudentsList[j].test4 << '\t' << StudentsList[j].test5 << endl;
						}
					}
					break;
				default:
					cout << "Ошибка ввода." << endl; break;
				}
			}
			break;
		case (8):
			//-----8.Вывод данных о студентах, имеющих номер в списке – k.-----//
			{
				cout << "Укажите номер из списков групп, студентов-обладателей которых Вы хотите увидеть: ";
				cin >> helper;
				cout << "№\t" << "ФИО\t" << '\t' << '\t' << '\t' << "Пол\t" << "Группа\t" << "Номер\t" << "1 экз\t" << "2 экз\t" << "3 экз\t" << "1 зач.\t" << "2 зач.\t" << "3 зач.\t" << "4 зач.\t" << "5 зач.\t" << endl;
				cout << "=============================================================================================================" << endl;
				for (int i = 0; i < counterOfStudents; i++)
				{
					if (StudentsList[i].number == helper)
					{
						cout << i + 1 << '\t' << StudentsList[i].name << '\t' << '\t' << StudentsList[i].sex << '\t' << StudentsList[i].group << '\t' << StudentsList[i].number << '\t' << StudentsList[i].exam1 << '\t' << StudentsList[i].exam2 << '\t' << StudentsList[i].exam3 << '\t' << StudentsList[i].test1 << '\t' << StudentsList[i].test2 << '\t' << StudentsList[i].test3 << '\t' << StudentsList[i].test4 << '\t' << StudentsList[i].test5 << endl << endl;
					}
				}
			}
			break;
		default:
			cout << "Ошибка ввода." << endl; break;
		}

	}

	return 0;
}