#include <stdio.h>

int main()
{

	/* Define the alphabet array with characters and special symbols */
	char alphabet[61] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '(', '<', '=', '+', ')', '[', '*', '/', ']', '{', '>', '!', '-', '}', '?', '\\', '&', '|', '%', '_', ';', '"', '#', '.', '\'', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	/* Declare variables */
	int i, alphabet_counter, crypted_number, comment_counter = 0;
	char character;
	int key = 9; /* Define the encryption key. The digits of my school number (230104004013) are 18 in total and the digits of 18 are 9 in total.*/

	/* Loop until end of file */
	while (scanf("%c", &character) != EOF)
	{

		/* Check if not inside a comment */
		if (comment_counter == 0)
		{
			if (character == '@')
			{ /* If character is '@', it indicates the start of a comment */
				comment_counter = 1;
			}
			else
			{

				alphabet_counter = 0;
				/* Iterate through the alphabet array to find matches */
				for (i = 0; i < 61; i++)
				{
					if (character == alphabet[i])
					{
						/* Decrypt the character using the key and print */
						crypted_number = ((i + (61 - key)) % 61);
						printf("%c", alphabet[crypted_number]);
						alphabet_counter++;
					}
				}
				/* If character not found in the alphabet array, print it as it is */
				if (alphabet_counter == 0)
				{
					printf("%c", character);
				}
			}
		}
		/* If inside a comment */
		else if (comment_counter == 1)
		{
			alphabet_counter = 0;
			for (i = 0; i < 61; i++)
			{
				if (character == alphabet[i])
				{
					printf("/* There is ");
					/* Decrypt the character using the key and print */
					crypted_number = ((i + (61 - key)) % 61);
					printf("%c", alphabet[crypted_number]);
					alphabet_counter++;
					comment_counter = 2;
				}
			}
		}
		else if (comment_counter == 2)
		{
			alphabet_counter = 0;
			for (i = 0; i < 61; i++)
			{
				if (character == alphabet[i])
				{
					/* Decrypt the character using the key and print */
					crypted_number = ((i + (61 - key)) % 61);
					printf("%c", alphabet[crypted_number]);
					alphabet_counter++;
					printf(" characters as comment */");
					comment_counter = 0;
				}
			}
			/* If character not found in the alphabet array, print it as it is */
			if (alphabet_counter == 0)
			{
				printf("%c", character);
			}
		}
	}

	return 0;
}
