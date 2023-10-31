#include<iostream>
#include"pointer_functions.h"
#include"./Config/keyboardInput.h"
#include"pointer_functions.h"
//using namespace std;

int main()
{
    char keya;
    int key_nr;
    keyboardInput keyboard;
   
    while (true)
    {
        if(keyboard.kimkb())
        {
            key_nr = keyboard.getch();
            std::cout << key_nr << std::endl;
            std::cout << keya << std::endl;
            keya = key_nr;

            switch (key_nr)
            {
            case 49:
               pointerA();
                break;
            
            case 50:
               pointerB();
                break;

            case 51:
               pointerC();
                break;
            default:
                break;
            }
        }
    }
    return 0;
}

