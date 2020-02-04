#include "sort.h"
/**
 *insertion_sort_list - Sorts dbly linkd list of ints in ascending order.
 *@list: Doubly linked list.
 *Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *New;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	New = (*list)->next;
	while (New != NULL)
	{
		while (New->prev != NULL && New->n < New->prev->n)
		{
			New->prev->next = New->next;
			if (New->next != NULL)
				New->next->prev = New->prev;
			New->next = New->prev;
			New->prev = New->prev->prev;
			New->next->prev = New;
			if (New->prev == NULL)
				*list = New;
			else
				New->prev->next = New;
			print_list(*list);
		}
		New = New->next;
	}
}
