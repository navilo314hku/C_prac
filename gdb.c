#include <stdio.h> 
void fun3(){
	int fun3Var=25;
	printf("%d\n",fun3Var);
	return;
}
void fun2(){
	int fun2Var=20;
	printf("%d\n",fun2Var);
	fun3();
	return;
}
void fun1(){
	int fun1Var=15;
	printf("%d\n",fun1Var);
	fun2();
	return;
}
int main(){
	int manVar=10;
	printf("%d\n",manVar);
	fun1();
	return 0;
}