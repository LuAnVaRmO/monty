#include "monty.h"
/**
 * tokenize - convert string on intems of an array
 * Return: array of strings
 */
void tokenize(void)
{
	info.token = strtok(info.buff, DELIMITERS);
	info.number = strtok(NULL, DELIMITERS);
}
