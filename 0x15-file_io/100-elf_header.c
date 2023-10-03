#include "main.h"
void closn_func(int f_file);
void entryPrnt(unsigned long int entry_addr, unsigned char *eIdent);
void typePrnt(unsigned int e_type, unsigned char *eIdent);
void abiPrnt(unsigned char *eIdent);
void osabiPrnt(unsigned char *eIdent);
void versionPrnt(unsigned char *eIdent);
void dataPrnt(unsigned char *eIdent);
void classPrnt(unsigned char *eIdent);
void magicPrnt(unsigned char *eIdent);
void checkElf(unsigned char *eIdent);
/**
 * main - Entry point.
 * Description: elf_header_parser file
 * @argc: argument count.
 * @argv: arguments.
 * Return: Always 0 success.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elf;
	int f_file, r_file;

	f_file = open(argv[1], O_RDONLY);
	if (f_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		close_file(f_file);
		free(elf);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r_file = read(f_file, elf, sizeof(Elf64_Ehdr));
	if (r_file == -1)
	{
		free(elf);
		close_file(f_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	checkElf(elf->e_ident);
	printf("ELF Header:\n");
	magicPrnt(elf->e_ident);
	classPrnt(elf->e_ident);
	dataPrnt(elf->e_ident);
	versionPrnt(elf->e_ident);
	osabiPrnt(elf->e_ident);
	abiPrnt(elf->e_ident);
	typePrnt(elf->e_type, elf->e_ident);
	entryPrnt(elf->e_entry, elf->e_ident);
	free(elf);
	closn_func(f_file);
	return (0);
}
