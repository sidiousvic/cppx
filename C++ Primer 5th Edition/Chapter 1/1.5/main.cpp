//
//  main.cpp
//  1.5
//
//  Created by VIC SIDIOUS on 2020/01/01.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
//Exercise 1.5: We wrote the output in one large statement. Rewrite the
//program to use a separate statement to print each operand.

#include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0; std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " times ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}
