#include <iostream>
#include <string.h>
#define N 20
#define M 11
#define D 110
using namespace std;


void tyr()
{
	setlocale(LC_ALL, "Ru");
	char stroka[35] = "Я люблю кушать";
	char strik[20] = " и спать";
	cout << "Строка " << stroka << " состоит из "
		<< strlen(stroka) << " символов!\n";
	strcat_s(stroka, strik);
	cout << "Объединенные строки :" << stroka << "\n";
	strcpy_s(stroka, strik);
	cout << "Строка после копирования strik :" << stroka << "\n";
}
int ryt()
{
    int cnt;
    setlocale(LC_ALL, "ru");
    cout << "Введите количество слов (не более 20): ";
    cin >> cnt;

    // Ограничение на количество слов
    if ((cnt > N) or (cnt < 0))
    {
        cout << "Ошибка: Максимальное количество слов - 20." << "\n";
        return 1;
    }
    
    char arraystr[N][M];  // Массив строк
    cin.ignore();
    for (int i = 1; i <= cnt; i++)
    {
        cout << "Введите слово : " << i;
        cin.getline(arraystr[i], D); // Считываем строку длиной до 10 символов
        if (strlen(arraystr[i]) > 10)
        {
            cout << " Число символов";
            return 1;
        }
    }
    cout << "Слова с четными номерами: " << "\n";
    for (int i = 2; i <= cnt; i+=2)
    {  
        cout << arraystr[i] << "\n";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Выберите процедуру : где 1 - работа со строками, а 2 - массив строк! " << "\n";
    int t;
    cin >> t;
    if (t < 2)
    {
        tyr();
    }
    else
        ryt();
}
