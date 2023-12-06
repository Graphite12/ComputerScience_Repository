# 공부한 자료를 기록하는 저장소
## Computer Science
컴퓨터 공학, 과학에 대한 합습내용을 기록하는 공간

## Cpp
Cpp 학습한 내용을 기록하는 공간


### Wsl, VScode로 Cpp 프로젝트 개발환경 준비하기
1. Bios에서 가상화(SVM Support) 옵션 Enable 여부 확인.
2. Powrshell WSL 설치
 `wsl install`
3. WSL Ubuntu-LTS설치
4. Ubuntu 터미널로 다음 패키지 설치
```bash
sudo apt-get update
sudo apt-get install build-essential gdb #컴파일러, 디버거
#설치 성공 여부
whereis g++  
whereis gdb     
```
5. vscode 확장 C/C++ 설치
 ```bash
 ctrl + shift + X #vscode 단축키
 ```  
6. 프로젝트 루트 디렉토리, .vscode 폴더 내 3가지 설정.
```bash
#c_cpp_properties.json
{
  "configurations": [
    {
      "name": "Linux",
      "includePath": ["${workspaceFolder}/**"],
      "defines": [],
      "compilerPath": "/usr/bin/gcc",
      "cStandard": "c11",
      "cppStandard": "c++17",
      "intelliSenseMode": "clang-x64"
    }
  ],
  "version": 4
}


#tasks.json 파일생성
{
  "version": "2.0.0",
  "tasks": [
    {
      "type": "shell",
      "label": "C/C++: g++ build active file",
      "command": "/usr/bin/g++",
      "args": ["-g", "${file}", "-o", "${fileDirname}/${fileBasenameNoExtension}"],
      "options": {
        "cwd": "/usr/bin"
      },
      "problemMatcher": ["$gcc"],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "detail": "Task generated by Debugger."
    }
  ]
}

#launch.json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "C/C++: g++ build and debug active file",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}/${fileBasenameNoExtension}",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false,
      "MIMode": "gdb",
      "miDebuggerPath": "/usr/bin/gdb",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "C/C++: g++ build active file"
    }
  ]
}
```

7. VSCode 디버깅, g++ 빌드로 선택


## Math
개발하기에 앞서 중요한 수학문제들을 학습하고 기록하는 공간

### 학습 링크

### C++ Language
[Udemy C++ Beginer](https://www.udemy.com/course/beginning-c-plus-plus-programming/)

### 수학
[동국대 수학자료](http://bigdata.dongguk.ac.kr/lectures/disc_math/_book/)
[칸 아카데미](https://ko.khanacademy.org/)
[Latex 문법](https://oeis.org/wiki/List_of_LaTeX_mathematical_symbols)
### 컴퓨터 공학
[구글 바드](https://bard.google.com/chat/bfe4998e8106f61d) \br
[wrtn.ai](https://wrtn.ai/)\br
[OS 공룡책](https://os.ecci.ucr.ac.cr/slides/Abraham-Silberschatz-Operating-System-Concepts-10th-2018.pdf)
