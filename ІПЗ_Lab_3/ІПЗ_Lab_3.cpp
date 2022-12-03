#include <iostream>
#include <fstream>
#include <cmath>

void checkInputValidity()
{
    if (std::cin.fail())
    {
        throw "[Error] Incorrect input!";
    }
}

void checkLoopBoundsValidity(int a, int b)
{
    if (a >= b)
    {
        throw "[Error] Incorrect loop bounds input!";
    }
}

void checkUpperBoundValidity(int n)
{
    if (n < 2)
    {
        throw "[Error] Incorrect upper bound input!";
    }
}

void checkLoopStepValidity(int h)
{
    if (h <= 0)
    {
        throw "[Error] Incorrect step input!";
    }
}

void fileOutput(float x, float y, int n)
{
    std::fstream fout;
    fout.open("output.txt", std::ios::app);
    fout << "x: " << x << std::endl;
    fout << "y: " << y << std::endl;
    fout << "n: " << n << std::endl;
    fout << "\n";
    fout.close();
}

float calculate(float x, int n)
{
    float y;

    if (x <= 0)
    {
        y = 1;
        for (int i = 0; i <= n - 1; i++)
        {
            if (i == 0)
            {
                continue;
            }
            y *= (i * i * i) + i;
        }
    }
    else if (x > 0)
    {
        y = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                if (j == 0)
                {
                    continue;
                }
                y += x / (i + j);
            }
        }
    }

    return y;
}

int main()
{
    float a = 0;
    float b = 0;
    float h = 0;
    int n = 0;

    float y = 0;
    float x = 0;

    try
    {
        std::cout << "Please enter \'a\', \'b\' (a < b), \'h\' (h > 0) and \'n (n > 2)\' numbers: ";
        std::cin >> a >> b;
        checkInputValidity();
        checkLoopBoundsValidity(a, b);
        
        std::cin >> h;
        checkInputValidity();
        checkLoopStepValidity(h);

        std::cin >> n;
        checkInputValidity();
        checkUpperBoundValidity(n);

        x = a;

        while (x <= b)
        {
            y = calculate(x, n);
            std::cout << "\'x\' and \'y\' values are: " << x << ", " << y << std::endl;

            fileOutput(x, y, n);

            x += h;
        }
    }
    catch (const char* ex)
    {
        std::cout << ex << std::endl;
    }
    catch (...)
    {
        std::cout << "[Error] Unknown error occured!" << std::endl;
        return -2;
    }

    return 0;
}