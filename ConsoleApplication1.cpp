// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void incrementStaticVariables();
void func(int);
void func(int*);

int main()
{
    std::cout << "Hello World!\n";

#pragma region Ex1
    int num1 = 7, num2 = 3;
#pragma endregion

#pragma region Ex2
    /*ОБЪЯСНЯЙ В ЧЕМ РАЗНИЦА ЭТОГО И...*/
    int* pNum1 = &num1;

    /*И этих двух строчек*/
    int* pNum2;
    pNum2 = &num2;
#pragma endregion

#pragma region Ex3
    std::cout << "#3\nBefore num1 = " << num1 << std::endl;
    *pNum1 = 4;
    std::cout << "After num1 = " << num1 << std::endl;
#pragma endregion

#pragma region Ex4
    ///Как указателю присвоить точный адресс 100 и 108? Так или я настолько тупой?
    pNum1 = (int*)100;
    pNum2 = (int*)108;

    std::cout << "----------" << "\n\n#4\n" << pNum2 - pNum1 << std::endl; // 2... Почему? 
    //Вот ответ! Поймешь или как-то объяснишь...
    std::cout << sizeof(int);
#pragma endregion

#pragma region Ex5
    //std::cout << "----------" << "\n#5\n" << *pNum1 + 3 << "\n"; ///Ошибка, потому что я не знаю какой ... присваевает указателю точный адрес. Мы вирус не пишем...
    
    //Или тут надо к адресу добавлять 3?
    std::cout << "\n----------" << "\n\n#5\nBefore pNum1 = "<< pNum1 << "\nAfter pNum1 = " << pNum1 + 3 <<"\n"; // Ну удачи, объясняй, если есть желание... 
    //Но это тоже правильно ответ такой же... 
    //std::cout << sizeof(int);
    
    //Или так? Указатель -это же *pNum1
    pNum1 = &num1;
    std::cout << "\n\nBefore *pNum1 = " << *pNum1 << "\nAfter *pNum1 = " << *pNum1 + 3;
#pragma endregion

#pragma region Ex6
    std::cout << "\n----------" << "\n\n#6\nBefore *pNum1 = " << *pNum1 << "\nAfter *pNum1 = " << *pNum1++;
#pragma endregion

#pragma region Ex7
    pNum1 = &num1;
    pNum2 = &num2;
    std::cout << "\n----------" << "\n\n#7\n*pNum1 = " << *pNum1 << "\n*pNum2 = " << *pNum2;
    std::cout << "\n*pNum1 > *pNum2 = " << (*pNum1 > *pNum2);
    std::cout << "\n*pNum1 < *pNum2 = " << (*pNum1 < *pNum2);
    std::cout << "\n*pNum1 = *pNum2 = " << (*pNum1 == *pNum2);
#pragma endregion

#pragma region Ex8
    std::cout << "\n----------" << "\n\n#8\n*pNum1 * *pNum2 = " << *pNum1 * *pNum2;
#pragma endregion

#pragma region Ex9
    void* ptr;
    int nVal = 10;
    float fVal = 51.5;
    ptr = &nVal;
    //std::cout << "\n----------" << "\n\n#9\nptr = " << *ptr; //Ошибка
    ptr = &fVal;
    //std::cout << "\n----------" << "\n\n#9\nptr = " << *ptr; //Ошибка
    //Указатель типа void сам не знает, на объект какого типа он будет указывать, разыменовать его напрямую не получится!
#pragma endregion

#pragma region Ex10
    std::cout << "\n----------" << "\n\n#10\n";
    incrementStaticVariables();
    incrementStaticVariables();
    incrementStaticVariables();
#pragma endregion

#pragma region Ex11
    std::cout << "\n----------" << "\n\n#11\n";
    func(NULL);
    func(pNum1);
#pragma endregion

    std::cin.get();
    std::cin.get();
}

void incrementStaticVariables()
{
    static int val = 1;
    val++;
    std::cout << val << std::endl;
}

void func(int i)
{
    std::cout << "int\n";
}

void func(int* i)
{
    std::cout << "nullptr\n";
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
