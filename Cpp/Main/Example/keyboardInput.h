// reference : https://eastskykang.wordpress.com/2015/01/28/c-c-kbhit-function-in-linux/
// reference : google bard
#ifndef KIMKBOARD_H
#define KIMKBOARD_H
#include <termios.h>

class keyboardInput
{
public:
    keyboardInput(/* args */);
    ~keyboardInput();
    int kimkb();
    int getch();

private:
    /* data */
    struct termios initial_settings, new_settings;
    int peek_char;
};


#endif