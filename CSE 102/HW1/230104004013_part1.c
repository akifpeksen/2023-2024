#include <stdio.h>

int main()
{

	/* Define the alphabet array with characters and special symbols */
	char alphabet[61] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '(', '<', '=', '+', ')', '[', '*', '/', ']', '{', '>', '!', '-', '}', '?', '\\', '&', '|', '%', '_', ';', '"', '#', '.', '\'', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	/* Declare variables */
	int i, alphabet_counter = 0, comment_start_counter = 0, comment_finish_counter = 0, comment_counter = 0, crypted_number;
	char character;
	int key = 9; /* Define the encryption key. The digits of my school number (230104004013) are 18 in total and the digits of 18 are 9 in total.*/

	/* Loop until end of file */
	while (scanf("%c", &character) != EOF)
	{

		/* Check if a comment has started */
		if (comment_start_counter == 0)
		{

			/* If character is '/', it might indicate the start of a comment */
			if (character == '/')
			{
				comment_start_counter = 1;
				continue;
			}

			/* Reset alphabet counter */
			alphabet_counter = 0;

			/* Iterate through the alphabet array to find matches */
			for (i = 0; i < 61; i++)
			{

				/* If character is found in the alphabet array, encrypt and print */
				if (character == alphabet[i])
				{
					alphabet_counter++;
					crypted_number = ((i + key) % 61);
					printf("%c", alphabet[crypted_number]);
				}
			}

			/* If character not found in the alphabet array, print it as it is */
			if (alphabet_counter == 0)
			{
				printf("%c", character);
			}
		}

		/* Check the possibility of starting a comment line if the previous character is '/' */
		else if (comment_start_counter == 1)
		{

			/* If character is '*', it might indicate the start of a multi-line comment */
			if (character == '*')
			{
				comment_start_counter = 2;
				printf("@ "); /* Placeholder for the encrypted comment start */
			}
			else
			{
				/* Print encrypted character for '/' and reset comment counter */
				printf("%c", alphabet[33 + key]);
				comment_start_counter = 0;
				for (i = 0; i < 61; i++)
				{
					if (character == alphabet[i])
					{
						crypted_number = ((i + key) % 61);
						printf("%c", alphabet[crypted_number]);
					}
				}
			}
		}

		/* If a comment has started */
		else if (comment_start_counter == 2)
		{

			/* Check for the end of the comment */
			if (character == '*' && comment_finish_counter == 0)
			{
				comment_finish_counter = 1;
			}

			else if (character == '/' && comment_finish_counter == 1)
			{
				comment_finish_counter = 2;
			}

			else if (comment_finish_counter == 2)
			{
				/* Placeholder for the encrypted comment end */
				switch ((comment_counter / 10) % 10)
				{
				case 0:
					printf("%c", alphabet[(51 + key) % 61]);
					break;
				case 1:
					printf("%c", alphabet[(52 + key) % 61]);
					break;
				case 2:
					printf("%c", alphabet[(53 + key) % 61]);
					break;
				case 3:
					printf("%c", alphabet[(54 + key) % 61]);
					break;
				case 4:
					printf("%c", alphabet[(55 + key) % 61]);
					break;
				case 5:
					printf("%c", alphabet[(56 + key) % 61]);
					break;
				case 6:
					printf("%c", alphabet[(57 + key) % 61]);
					break;
				case 7:
					printf("%c", alphabet[(58 + key) % 61]);
					break;
				case 8:
					printf("%c", alphabet[(59 + key) % 61]);
					break;
				case 9:
					printf("%c", alphabet[(60 + key) % 61]);
					break;
				}

				switch ((comment_counter) % 10)
				{
				case 0:
					printf("%c", alphabet[(51 + key) % 61]);
					break;
				case 1:
					printf("%c", alphabet[(52 + key) % 61]);
					break;
				case 2:
					printf("%c", alphabet[(53 + key) % 61]);
					break;
				case 3:
					printf("%c", alphabet[(54 + key) % 61]);
					break;
				case 4:
					printf("%c", alphabet[(55 + key) % 61]);
					break;
				case 5:
					printf("%c", alphabet[(56 + key) % 61]);
					break;
				case 6:
					printf("%c", alphabet[(57 + key) % 61]);
					break;
				case 7:
					printf("%c", alphabet[(58 + key) % 61]);
					break;
				case 8:
					printf("%c", alphabet[(59 + key) % 61]);
					break;
				case 9:
					printf("%c", alphabet[(60 + key) % 61]);
					break;
				}
				printf("\n");
				comment_start_counter = 0;
				comment_finish_counter = 0;
				comment_counter = 0;
			}

			else
			{
				/* Counts the number of characters in the comment line */
				if (character != ' ')
				{
					comment_counter++;
				}
			}
		}
	}

	return 0;
}
