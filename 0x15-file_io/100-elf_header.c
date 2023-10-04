#include "main.h"

void elf_check(unsigned char *e_ident);
void magic_prnt(unsigned char *e_ident);
void class_prnt(unsigned char *e_ident);
void data_prnt(unsigned char *e_ident);
void version_prnt(unsigned char *e_ident);
void abi_prnt(unsigned char *e_ident);
void osabi_prnt(unsigned char *e_ident);
void type_prnt(unsigned int e_type, unsigned char *e_ident);
void entry_prnt(unsigned long int e_entry, unsigned char *e_ident);
void closn_func(int elf);

/**
 * abi_prnt - Prints the ABI version.
 * @e_ident: pointer to an array.
 */
void abi_prnt(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}


/**
 * class_prnt - Prints the class.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void class_prnt(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * data_prnt - Prints the data.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void data_prnt(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * entry_prnt - Prints the entry.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void entry_prnt(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}


/**
 * magic_prnt - Prints the magic number.
 * @e_ident: pointer to an array.
 * Description: Magic numbers are separated by spaces.
 */
void magic_prnt(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * osabi_prnt - Prints the OS/ABI.
 * @e_ident: pointer to an array.
 */
void osabi_prnt(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}


/**
 * type_prnt - Prints the type.
 * @e_type: The ELF type.
 * @e_ident: pointer to an array
 */
void type_prnt(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}


/**
 * version_prnt - Prints the version.
 * @e_ident: A pointer to an array.
 */
void version_prnt(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * elf_check - Checks if a file.
 * @e_ident: pointer to an array.
 * Description: If the file is not an ELF file - exit code 98.
 */
void elf_check(unsigned char *e_ident)
{
	int i;

		for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}


/**
 * closn_func - Closes the ELF.
 * @elf: The handle for the ELF file.
 * Description: If the file cannot be closed - exit code 98.
 */
void closn_func(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the file shut up.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int x;
	int r;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		closn_func(x);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(x, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		closn_func(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	elf_check(header->e_ident);
	printf("ELF Header:\n");
	magic_prnt(header->e_ident);
	class_prnt(header->e_ident);
	data_prnt(header->e_ident);
	version_prnt(header->e_ident);
	osabi_prnt(header->e_ident);
	abi_prnt(header->e_ident);
	type_prnt(header->e_type, header->e_ident);
	entry_prnt(header->e_entry, header->e_ident);

	free(header);
	closn_func(x);
	return (0);
}
