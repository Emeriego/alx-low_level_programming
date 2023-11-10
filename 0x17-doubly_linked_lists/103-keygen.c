#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * gen1 - func gets the biggest number
 * @usrn: user'susername
 * @length: length of username
 * Return: the biggest number
 */
int gen1(char *usrn, int length)
{
	int my_user = *usrn;
	int my_ch;
	unsigned int rand_num;

	for (my_ch = 0; my_ch < length; my_ch++)
		if (my_user < usrn[my_ch])
		{
			my_user = usrn[my_ch];
		}
	srand(my_user ^ 14);
	rand_num = rand();
	return (rand_num & 63);
}
/**
 * gen2 - func multiplies username
 * @usrn: the username
 * @length: size of username
 * Return: returns multiplied char
 */
int gen2(char *usrn, int length)
{
	int my_user;
	int my_ch;

	my_user = my_ch = 0;
	while (my_ch < length)
	{
		my_user = my_user + usrn[my_ch] * usrn[my_ch];
		my_ch += 1;
	}
	return (((unsigned int)my_user ^ 239) & 63);
}
/**
 * gen3 - func generates random char
 * @usrn: the username param
 * Return: returns a random char
 */
int gen3(char *usrn)
{
	int my_user;
	int my_ch;

	my_user = 0;
	for (my_ch = 0; my_ch < *usrn; my_ch++)
		my_user = rand();
	return (((unsigned int)my_user ^ 229) & 63);
}
/**
 * main - my Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, my_user, my_ch;
	long my_long_alpha[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;
	length = 0;
	while (argv[1][length])
		length++;
	keygen[0] = ((char *)my_long_alpha)[(length ^ 59) & 63];
	my_user = my_ch = 0;
	while (my_ch < length)
	{
		my_user = my_user + argv[1][my_ch];
		my_ch = my_ch + 1;
	}
	keygen[1] = ((char *)my_long_alpha)[(my_user ^ 79) & 63];
	my_user = 1;
	my_ch = 0;
	while (my_ch < length)
	{
		my_user = argv[1][my_ch] * my_user;
		my_ch = my_ch + 1;
	}
	keygen[2] = ((char *)my_long_alpha)[(my_user ^ 85) & 63];
	keygen[3] = ((char *)my_long_alpha)[gen1(argv[1], length)];
	keygen[4] = ((char *)my_long_alpha)[gen2(argv[1], length)];
	keygen[5] = ((char *)my_long_alpha)[gen3(argv[1])];
	keygen[6] = '\0';
	my_user = 0;
	while (keygen[my_user])
	{
		printf("%c", keygen[my_user]);
		my_user++;
	}
	return (0);
}
