/*[12.7] 블록 영역의 정적 변수
	저장공간분류: 고정적 외부 연결 없음, Static with no linkage
	메모리에서의 위치: 데이터 Segement(initialized) 또는 BSS(Block Started by Symbol segment)Sement(uninitalized);
	지속기간: 고정적
	영역: 블록 안
	연결 상태: 없음
	선언 방법: 블록 안에서 static사용
*/

/*[12.8] 정적 변수의 외부 연결
	저장공간분류: 고정적 외부 연결 있음, Static with external linkage
	메모리에서의 위치: 데이터 Segement(initialized) 또는 BSS(Block Started by Symbol segment)Sement(uninitalized);
	지속기간: 고정적
	영역: 파일 안
	연결 상태: 번역 단위의 외부로도 연결 가능(Translation unit == C파일)
	선언 방법: 모든 함수들 밖

	1. 값을 할당하지 않으면 0으로 초기화됨
	2. referencing declaration으로 선언된 파일 밖에서 활용 가능함.(extern)
*/

/*[12.9] 정적 변수의 내부 연결
	저장공간분류: 고정적 내부 연결, Static with external internal linkage
	메모리에서의 위치: 데이터 Segement(initialized) 또는 BSS(Block Started by Symbol segment)Sement(uninitalized);
	지속기간: 고정적
	영역: 파일 안
	연결 상태: 번역 단위의 외부로도 연결 가능(Translation unit == C파일)
	선언 방법: 모든 함수들 밖에서 static 키워드 사용
*/

#include <stdio.h>

extern void secondFunc();
static int staticValiable = 0;

int g_number;

void counter() {
	int a;
	a = 0;
	a++;
	printf("This is the a Value and Address : %d, %p\n", a, &a);
}

void staticCounter() {
	static int a;
	a = 0;
	a++;
	printf("This is the a Value and Address : %d, %p\n", a, &a);
}

void counterByCounter()
{
	counter();
}

void staticCounterByStaticCounter()
{
	staticCounter();
}

int main()
{
	/*1.1 
	static으로 정의된 변수는 함수의 범위를 벗어나더라도 동일한 대상에 대해 더하기 연산이 진행됨을 알 수 있다.
	*/
	counter();
	counter();
	counterByCounter();
	counterByCounter();
	printf("===================================\n");
	staticCounter();
	staticCounter();
	staticCounterByStaticCounter();
	staticCounterByStaticCounter();
	printf("===================================\n");
	printf("this is the g_number value: %d, %p\n", g_number, &g_number);
	secondFunc();
	printf("===================================\n");
	printf("this is the static Valiable, %d \n", staticValiable);
	return (0);
}