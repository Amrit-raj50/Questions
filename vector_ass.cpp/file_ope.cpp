#include <iostream>
#include <string>
#include <fstream>

int fibo(int no)
{
    int no1 = 0;
    int no2 = 1;
    bool result = false;
    for (int no3 = no2 + no1; no3 <= no; no3 = no2 + no1)
    {
        if (no3 == no)
        {
            result = true;
            break;
        }
        no1 = no2;
        no2 = no3;
    }
    return result;
}

int palin(int no)
{
    int sum = 0;
    for (int temp = no; temp > 0; temp = temp / 10)
    {
        int dig = temp % 10;
        sum = dig + sum * 10;
    }

    if (sum == no)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int avg(int arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "enter a interger :";
        std::cin >> arr[i];
    }
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    int avg = sum / 5;

    for (int i = 0; i < 5; i++)
    {
        if (avg <= arr[i])
        {
            std::cout << "value :" << arr[i] << std::endl;
            std::cout << "Index :" << i << std::endl;
            break;
        }
    }
}
int main()
{
    std::ofstream file;
    std::string data;
    file.open("multi_calc.txt", std::ios::app);

    if (file.is_open())
    {
        int fno;
        std::cout << "enter a number to check fibo:";
        std::cin >> fno;
        file<<"enter a number to check fibo :" <<fno<<std::endl;

        std::cout << fibo(fno) << std::endl;
        file<<"1 if it is present in the series :" <<fibo(fno)<<std::endl;


        int no;
        std::cout << "enter a number to chech it is pslindrome or not : ";
        std::cin >> no;
        file<<"enter a number to chech it is pslindrome or not  :" <<no<<std::endl;

        std::cout << palin(no) << std::endl;
        file<<"1 if it is a palindrome number :"<<palin(no)<<std::endl;

        file.close();
    }

    return 0;
}

