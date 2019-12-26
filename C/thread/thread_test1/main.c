#include <stdio.h>
#include <process.h>
#include <Windows.h>

unsigned __stdcall Thread_SayTwo(void* arg);
unsigned __stdcall Thread_SayOne(void* arg);

int main(void) {

	_beginthreadex(NULL, 0, Thread_SayTwo, 0, 0, NULL);
	_beginthreadex(NULL, 0, Thread_SayOne, 0, 0, NULL);
	while (1) {
		printf("4");
		Sleep(4000);
	}
	
	return 0;
}

unsigned __stdcall Thread_SayTwo(void* arg) {
	while (1) {
		printf("2");
		Sleep(2000);
	}
}

unsigned __stdcall Thread_SayOne(void *arg) {
	while (1) {
		printf("1");
		Sleep(1000);
	}
}