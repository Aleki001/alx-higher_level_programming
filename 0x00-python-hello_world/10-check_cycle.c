#include "lists.h"
/**
 * check_cycle - checks if linked list is cycle
 * @list: list to check
 * Return: 1 0r 0
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	current = list;
	check = list;

	if (!list)
		return (0);
	while (current && check && check->next)
	{
		current = current->next;
		check = check->next->next;
		if (current == check)
			return (1);
	}
	return (0);
}
