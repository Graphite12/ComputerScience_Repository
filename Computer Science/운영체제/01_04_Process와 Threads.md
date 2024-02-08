
# 프로세스란?
- 실행중인 프로그램
- O/S에서의 작업의 단위
- 프로세스의 작업을 위한 자원관리
	- CPU Time
	- Memory
	- files,
	- I/O device
	- 독립적으로 실행되 비동기 보장


## 메모리 레이아웃
- 프로그램을 메모리상에 올릴때 각 세그먼트로 분리됨
- `Stack`, `Heap`,`Data`,`Text`

#### Stack Segment
- 임시적으로 저장되는 공간, 사용하면 바로 회수
- 함수 매개변수, 지역변수, 쉘 환경변수, return address 등 저장됨.
	```cpp
	int main () {
		int *value;  
		int i;
		
		/* 대충 문법 */
		
		return 0;
	}
	```
#### Heap Segment
- 메모리 동적 할당 시 저장되는 공간
- `new`, `malloc`같은 동적할당 함수 
	```cpp
	int main () {
		int *ptr  // stack
		int *ptr2 // stack
		int *ptr3 // stack
		
		/* int type 크기의 정수n을 곱한 메모리 주소크기 결정 */
		ptr = (int *)malloc(size(int) * n)
		ptr2 = new Data();
		ptr3 = new int [5];


		/* 대충 문법*/
		
		return 0;
	}
	```

#### Data Segment
- 전역 변수(global variable)
- **initialized Data**
	```cpp
	int x = 10;
	char str = "asd";
	```
- **uninitialized Data** (bss)
	```cpp
	int *pointerVar;
	int d;
	```
#### Text Segment
- 실행가능한 코드(the executable code)

### Example Code

```cpp
#include <iostream>

int x;
int d = 10;

int main(int a, char *argv[]) {
	int *ptr;
	ptr = new int [3];

	for(int i = 0; i < 7; i++) {

		ptr[i] = i;

	}
	
	return 0;
}
```

실제 메모리 할당 확인

```bash
gcc memory_layout.cpp
size ./a.out

# Mac Os 

__TEXT	__DATA	__OBJC	 others	        dec	       hex
16384	16384	  0 	4295000064	4295032832	100010000

# Linux

```

# 프로세스의 생명주기

- New: 프로세스가 메인메모리에 로드됨.
- Ready: 변수 초기화 등 기초작업 이후 실행 준비상태
- Running: CPU가 실제로 프로세스를 수행중. 
- Wait/Block: 프로세스 도중 I/O 작업이 필요할때 일시중단.
	- CPU는 I/O 처리를 기다리며, 다른 프로세스를 수행
	- Waiting이 끝나면 기존프로세스는 Ready -> Running 수행. 
- Terminated : 프로세스 종료, q메모리 해제




# PCB(Process Control Block)
- TCB(Task Control Block) 으로도 불림
- 운영체제가 각 프로세스를 저장해놓는 정보블록
- 프로세스 작업 완료시 자동 제거
- PCB의 대표적인 정보들
	- Process state
	- Program Counter
	- CPU registers
	- CPU Scheduling Information
	- Memory-management Information
	- Accounting Information
	- I/O status Information


# Process Scheduling

### 멀티 프로그래밍의 목적
- CPU 사용 효율을 극대화 시키기위해

### 시 공유의 목적