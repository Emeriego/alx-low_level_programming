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
		closn_func(f_file);
		free(elf);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r_file = read(f_file, elf, sizeof(Elf64_Ehdr));
	if (r_file == -1)
	{
		free(elf);
		closn_func(f_file);
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

/**
 * checkElf - this func checks if file is an ELF.
 * @eIdent: a pointer.
 * Return: nothing
*/
void checkElf(unsigned char *eIdent)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (eIdent[index] != 127 &&
		    eIdent[index] != 'E' &&
		    eIdent[index] != 'L' &&
		    eIdent[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * classPrnt - prints the class.
 * @eIdent: pointer to an array.
 * Return: nothing
*/
void classPrnt(unsigned char *eIdent)
{
	printf("  Class:                             ");
	switch (eIdent[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", eIdent[EI_CLASS]);
	}
}
/**
 * dataPrnt - prints the encoding.
 * @eIdent: pointer to an array.
 * Return: nothing
*/
void dataPrnt(unsigned char *eIdent)
{
	printf("  Data:                              ");
	switch (eIdent[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", eIdent[EI_DATA]);
	}
}
/**
 * entryPrnt - prints entry pt.
 * @entry_addr: the virtual memory address.
 * @eIdent: a pointer.
 * Return: nothing
*/
void entryPrnt(unsigned long int entry_addr, unsigned char *eIdent)
{
	printf("  Entry point address:               ");
	if (eIdent[EI_DATA] == ELFDATA2MSB)
	{
		entry_addr = ((entry_addr << 8) & 0xFF00FF00) |
			  ((entry_addr >> 8) & 0xFF00FF);
		entry_addr = (entry_addr << 16) | (entry_addr >> 16);
	}
	if (eIdent[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_addr);
	else
		printf("%#lx\n", entry_addr);
}

/**
 * versionPrnt - the version is printed.
 * @eIdent: pointer to an array.
 * Return: nothing
*/
void versionPrnt(unsigned char *eIdent)
{
	printf("  Version:                           ");
	if (eIdent[EI_VERSION] == EV_CURRENT)
		printf("%d (current)\n", eIdent[EI_VERSION]);
	else
		printf("%i\n", eIdent[EI_VERSION]);
}
/**
 * osabiPrnt - the OS/ABI is printed.
 * @eIdent: pointer to an array.
 * Return: nothing
*/
void osabiPrnt(unsigned char *eIdent)
{
	printf("  OS/ABI:                            ");
	switch (eIdent[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", eIdent[EI_OSABI]);
	}
}

/**
 * abiPrnt - the Application Binary Interface of the ELF file is printed.
 * @eIdent: a pointer to an array of bytes specifies.
 * Return: nothing
*/
void abiPrnt(unsigned char *eIdent)
{
	printf("  ABI Version:                      %d\n",
		eIdent[EI_ABIVERSION]);
}
/**
 * typePrnt - the type of the ELF file is printed.
 * @e_type: the object file type
 * @eIdent: a pointer.
 * Return: nothing
*/
void typePrnt(unsigned int e_type, unsigned char *eIdent)
{
	if (eIdent[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Exexutable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x\n", e_type);
	}
}
/**
 * closn_func - closes the ELF file
 * @elf_file: the elf file.
 * Return: nothing
*/
void closn_func(int elf_file)
{
	if (close(elf_file) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf_file);
		exit(98);
	}
}
/**
 * magicPrnt - magic numbers is printed.
 * @eIdent: a pointer to an array.
 * Return: nothing
*/
void magicPrnt(unsigned char *eIdent)
{
	int index;

	printf("  Magic:                             ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", eIdent[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
