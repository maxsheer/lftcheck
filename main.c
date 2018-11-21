#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int correct = 1;

	printf("🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 START🍺 CHECKING🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 \n\n");
	
	printf("memset:\n");
	printf("\t🍺 TEST 0: set value - 0, array size = 40 bytes, array type - int\n);
	int *a = (int*)malloc(sizeof(int) * 10);
	ft_memset(a, 0, sizeof(int) * 10);
	printf("\tuser: ");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
		if (a[i]) correct = 0;
	}
	printf("\n\tcorrect: 0 0 0 0 0 0 0 0 0 0\n");
	printf("\t🍺 TEST 1: set value - 300, array size = 40 bytes, array type - int\n);
	ft_memset(a, 300, sizeof(int) * 10);
	int *memsetTest2 = (int*)malloc(sizeof(int) * 10);
	memset(memsetTest2, 300, sizeof(int) * 10);
	printf("\tuser: ");
	for (int i = 0; i < 10; ++i) 
	{   
		printf("%d ", a[i]);
		if (a[i] != memsetTest2[i]) correct = 0;
	}
	printf("\n\tcorrect: ");
	for (int i = 0; i < 10; ++i) printf("%d ", memsetTest2[i]);
	printf("\n");
	printf("\t🍺 TEST 2: set value - 5000000000, array size = 10 bytes, array type - char\n);
	char *memsetTest3 = (char*)malloc(sizeof(char) * 10);
	char *memsetTest3chk = (char*)malloc(sizeof(char) * 10);
	ft_memset(memsetTest3, 5000000000, sizeof(char) * 10);
	memset(memsetTest3chk, 5000000000, sizeof(char) * 10);
	printf("\tuser: ");
	for (int i = 0; i < 10; ++i);
	{
		printf("%d ", memsetTest3[i]);
		if (memsetTest3[i] != memsetTest3chk[i]) correct = 0;
	}
	printf("\n\tcorrect: ");
	for (int i = 0; i < 10; ++i) printf("%d ", memsetTest3chk[i]);
	printf("\n");
	printf(correct ? "\n🍺 Result: OK\n\n" : "\n🍺 Result: KO :<\n\n");

	printf("🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 \n\n");
	
	correct = 1;
	printf("bzero:\n");
	printf("\t🍺 TEST 0: string size = 20 bytes\n);
	printf("\tuser: ");
	char *s = (char*)malloc(sizeof(char) * 20);
	char *bzeroTest1 = (char*)malloc(sizeof(char) * 20);
	ft_bzero(s, sizeof(char) * 20);
	bzero(bzeroTest1, sizeof(char) * 20)
	printf("%s", s);
	printf("\n\tcorrect: %s\n", bzeroTest1);
	for (int i = 0; i < 20; ++i)
		if (s[i] != bzeroTest1[i]) correct = 0;
	printf(correct ? "\n🍺 Result: OK\n\n" : "\n🍺 Result: KO :<\n\n");

	printf("🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 \n\n");

	correct = 1;
	printf("memcpy:\n");
	printf("\t🍺 TEST 0: in = "PUPA", out = "???? I LUPA", n = 4, array type - char\n);
	printf("\tuser: ");
	char *memcpyIN = "PUPA";
	char *memcpyOUT = "???? I LUPA";
	printf("%s\n", ft_memcpy(memcpyOUT, memcpyIN, sizeof(char) * 4));
	if (strcmp(memcpyOUT, "PUPA I LUPA")) correct = 0;
	memcpyIN = "PUPA";
	memcpyOUT = "???? I LUPA";
	printf("\n\tcorrect: %s\n", memcpy(memcpyOUT, memcpyIN, sizeof(char) * 4));
	printf(correct ? "\n🍺 Result: OK\n\n" : "\n🍺 Result: KO :<\n\n");

	printf("🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 🍺 \n\n");





	// free-block for valgrid check
	free(a);
	free(memsetTest2);
	free(memsetTest3);
	free(memsetTest3chk);
	free(s);
	free(bzeroTest1);
	free(memcpyIN);
	free(memcpyOUT);
}
