#include <unistd.h>
#include "keyboardInput.h"

// 키보드 클래스 생성함수
keyboardInput::keyboardInput()
{
    tcgetattr(0, &initial_settings);
    new_settings = initial_settings;
    new_settings.c_lflag &= ~ICANON;
    new_settings.c_lflag &= ~ECHO;
    new_settings.c_lflag &= ~ISIG;
    new_settings.c_cc[VMIN] = 1;
    new_settings.c_cc[VTIME] = 0;
    tcsetattr(0, TCSANOW, &new_settings);
    peek_char = -1;
}

// 키보드 클래스 소멸함수
keyboardInput::~keyboardInput()
{
    tcsetattr(0,TCSANOW ,&initial_settings);
}

int keyboardInput::kimkb()
{
    //메모리 주소 혹은 문자 확인
    unsigned char c;
    int nread;
    if(peek_char != -1) return 1;
    
    new_settings.c_cc[VMIN] = 0;
    tcsetattr(0, TCSANOW, &new_settings);
    nread = read(0, &c, 1);
    new_settings.c_cc[VMIN] = 1;
    tcsetattr(0, TCSANOW, &new_settings);
    
    if(nread == 1) {
        peek_char = c;
        return 1;
    }
    return 0;
}

// 키보드 입력 감지
int keyboardInput::getch()
{
    char c;

    if (peek_char != -1)
    {
        c = peek_char;
        peek_char = -1;
    }
    else read(0,&c,1);

    //std::cout << c << std::endl;
    return c;
}