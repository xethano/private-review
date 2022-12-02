#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct nameofstruct
{
	int a;
	int b;
	int c;
};

void ReturnsStuff(int *a, int *b, int *c)
{
	*a += *b;
	*c += *b;
	*b += *c;
}

enum MyEnum
{
	PI = 3,
	BRUH = 4,
	BABABOOEY = 6

};

void TestArray(int a[], int l)
{
	for (int i = 0; i < l; i++)
	{
		a[i] = 1;
	}
}


int main() 
{
	int m_1 = 0;
	int m_2 = 1;
	int m_3 = 5;
	ReturnsStuff(&m_1, &m_2, &m_3);
	printf("%d\n", m_1);
	printf("%d\n", m_2);
	printf("%d\n", m_3);

	int result = isupper('B');
	printf("%d", result);
	//isalpha returns an int, 1 for is a letter, 0 for not a letter
	// isdigit returns a int, 4 if its a number? 0 if its not a number
	// islower returns an int, 2 if the char is lowercase, 0 if not
	// isupper returns an int, 1 if the char is uppercase, 0 if not

	char test = 'B';
	test = toupper(test);
	printf("%c", test);

	test = tolower(test);
	printf("%c", test);

	printf("\n");


	/*
	
	FILE* f = NULL;
	while (fgets(buffer, 1000, f))
	{
		// do something with the contents of the line...
	}

	// if the file does not exist, this will blow up becuase it ALWAYS
	// tries to read at least one line with fgets. It doesn't know that it's blank.
	// do-while is not often used, and often used poorly
	FILE* g = fopen(blah);
	char* result = NULL;
	do
	{
		result = fgets(buffer, 1000, g);
	} while (result != NULL);

	// BTW, a lot of programmers do this @ microsoft:
	do
	{
		if (a == 0)
		{
			break;
		}

		if (b == 0)
		{
			break;
		}

		int c = a * b;
		printf("%d", c);
	} while (false);

	// can't do this with a while
	while (false) // <<<---- doesn't allow it in
	{
		// never executes. not even once.
	}
	
	struct nameofstruct struct1;
	struct1.a = 1;
	struct1.b = 56;

	printf("%d\n", struct1.a);
	printf("%d\n", struct1.b);

	struct nameofstruct* m_struct1 = &struct1;
	m_struct1->a = 2;
	m_struct1->c = 254;

	printf("%d\n", m_struct1->a);
	printf("%d\n", m_struct1->b);
	printf("%d\n", m_struct1->c);

	for (int i = 0; i < 10; i++)
	{

	}

	int i = 0;
	while (i != 10)
	{
		//blahblah
		i++;
	}


	//find the length of a string without strlen()
	char* bruh = "Hahahahaha"; //10
	int index = 0;
	while (bruh[index] != '\0')
	{
		index++;
		//index becomes string length
	}
	

	FILE* f = fopen("source.c", "r");
	while (feof(f) == 0)
	{
		char cindex = fgetc(f);
		printf("%c", cindex);
	}
	fclose(f);
	*/

	//get two val, if 0 or non alnum, break, otherwise multiply

	
	while (false)
	{
		// scanf returns 1 if it scanned anything. You will be assigning input_a to 1 and input_b to 1.
		// and get a multiply result of 1.
		int input_a;
		int input_b;
		scanf("%d", &input_a);
		scanf("%d", &input_b);
		int product = input_a * input_b;
		printf("%d\n", product);

		if (input_a == 0 && input_b == 0)
		{
			break;
		}

		
	}

	//x 6
	//y 3

	int twod_array[3][6] = { 0 };
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			twod_array[y][x] = y * 6 + x;
		}
	}
	
	int testx = 10;
	int testx1 = testx++;
	int testx2 = ++testx;

	//testx1 would be 10
	//testx2 is 12


	// what is testx1 and 2?
	int index1 = 0;
	while (index1++ < 10)
	{
		printf("index1 = %d\n", index1);
		testx++;
	}
	// now what is testx? 

	//pointer is an address to values or data
	int* pi = (int*) malloc(5 * sizeof(int)); //creates array, subspaces are malloc/4
	pi[4] = 0xAABBCCDD;
	 
	//char (FF) 8
	//short (FFFF) 16
	//int or long 32
	//longlong 64

	//float 32bit
	//double 64
	//long double 64

	enum MyEnum randomassinteger = BABABOOEY;

	//array is a collection of values at a single span of memory, all the same type 
	// if you have struct Thing, and you want to allocate an array of memory using malloc,
	// to have space for 100 of Things, how would you write that line?
	// struct .... <- fill out

	//struct Thing *structarray = malloc(100*sizeof(struct Thing?));
	//struct Thing array[100];
	//indec is a position of an array

	//why is array first index = 0
	//because 
	
	// when you say array[x] = 42, it literally does this inside the PC CPU:
	// BYTE * p = array + (x * sizeof(int));
	// BYTE * p = array + ( x-1 ) * sizeof(int);
	{
		int b[10];
		// int* pb = &b[5]; // <- never assign a pointer to the middle of an array unless you're VERY careful.
		// pb[10] = 5; // invalid
		for (int i = 0; i < 10; i++)
		{
			b[i] = 5;
			*(b + i) = 5;
		}
		TestArray(b, 10);
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", b[i]);
		}
		printf("\n");

		char* strarray[] = {"hello","world"};

		//doesnt include \0
		//strcpy(destination, source) both are char*, source is const
		//strcat(destination, addition) addition is const
		//strcmp(char*,char*) return type is int, 0 means equal.

	}
}