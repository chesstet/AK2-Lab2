#include <iostream>

void generatePascal(int heigth)
{
    int k = 0;
    int coef = 1;

    for (int i = 0; i < heigth; i++) {
        
        for (int j = 0; j < i + 1; j++){
            
            while (k < heigth - i) {
                std::cout << " ";
                k++;
            }
            
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i - j + 1)/j;
            std::cout << coef << " ";
        }
        k = 0;
        std::cout << std::endl;
    }
}