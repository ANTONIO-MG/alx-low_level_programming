#include "main.c"

int main(int argc, char *argv[])
{
	int count;
	unsigned int num, sum = 0;
	char *ptr;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			ptr = argv[count];

			for (num = 0; num < strlen(ptr); num++)
			{
				if (ptr[num] < 48 || ptr[num] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(ptr);
			ptr++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
