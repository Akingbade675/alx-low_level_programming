#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int *add()
{
	int a = 10;
	int b = 2;
	int *ptr = malloc(sizeof(int));
	*ptr = a;
	return (ptr);
}
int sub()
{
	typedef int i;
	i x = 12;
	i y = 4;

	return (x-y);
}

int main(void)
{
	struct student{
		char *name;
		int cohort;
	};
	typedef struct student f;

	typedef struct list{
		int n;
		struct list *ptr;
	} list;

	student user1;
	list *node = malloc(sizeof(list));
	*node.n = 5;
	user1.name = "Emma";
	user1.cohort = 8;
	printf("Hello\n");
	printf("%c\n", *(user1.name + 1));
	int *ptr = add();
	*ptr = 1000;
	printf("%d\n", *ptr);
	printf("%d\n", sub());
	printf("%s\n", user1.name);
	printf("Done");
	return (0);
}
