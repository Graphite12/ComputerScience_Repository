
# 프로세스란?
- 실행중인 프로그램
- O/S에서의 작업의 단위
- 프로세스의 작업을 위한 자원
	- CPU Time
	- Memory
	- files,
	- I/O device


## 메모리 레이아웃
- 프로그램을 메모리상에 올릴때 각 세그먼트로 분리됨
- `Stack`, `Heap`,`Data`,`Text`

#### Stack Sagment
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
### Heap Sagment
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

### Data Sagment
- 전역 변수(global variable)
- **initialized Data**
	```cpp
	int x = 10;
	char str = "asd";
	```
- **uninitialized Data**
	```cpp
	int *pointerVar;
	int d;
	```
### Text Sagment
- 실행가능한 코드(the executable code)



```bash
gcc memory_layout.cpp
size ./a.out

__TEXT	__DATA	__OBJC	others	dec	hex
16384	16384	0	4295000064	4295032832	100010000
```