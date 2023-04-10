#include <string>
#include <iostream>

bool isKPeriodic(const std::string& str, int k)
{
    if (k < 1)
    {
        return false;
    }

    auto size = str.size();

    if (size % k || size < k)
    {
        return false;
    }

    for (size_t i = 0; i < k; ++i)
    {
        for (size_t j = k + i; j < size; j += k)
        {
            if (str[i] != str[j])
            {
                return false;
            }
        }
    }

    return true;
}

void test()
{
    std::string str = "vasyavasyavasyavasya";
    int k = 5;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 0;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 10;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 40;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = -5;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    str = "";

    k = 0;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 3;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = -3;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    str = "abcabcabcabc";

    k = 0;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 3;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 6;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 7;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 9;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = 12;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    k = -3;
    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    std::cout << std::endl;
}

int main()
{

    test();

    std::string str = "inputstring";
    int k = 0;

    std::cout << str << (isKPeriodic(str, k) ? " is periodik " : " is NOT periodic ") << k << std::endl;

    return 0;
}