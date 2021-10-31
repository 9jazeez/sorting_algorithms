#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list- A c function that sort double linked list of integers
 * using insertion sort algorithm
 *
 * @list: List to sort
 *
 * Return: viod
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sub;
	listint_t *current;
	listint_t *new;

	sub = NULL;
	current = *list;

	while (current != NULL)
	{
		new = current->next;
		current->next = NULL;
		current->prev = NULL;

		sorted(&sub, current);
		print_list(*list);


		current = new;
	}
	*list = sub;
}

/**
 * sorted-Helps to insert node in sorted list
 *
 * @head: The double linked list
 * @node: Node to insert
 *
 * Return: void
 */

void sorted(listint_t **head, listint_t *node)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		print_list(*head);
	}

	else if ((*head)->n >= node->n)
	{
		node->next = *head;
		node->next->prev = node;
		*head = node;
		print_list(*head);
	}

	else
	{
		tmp = *head;

		while (tmp->next != NULL && tmp->next->n < node->n)
		{
			tmp = tmp->next;
		}

		node->next = tmp->next;

		if (tmp->next != NULL)
		{
			node->next->prev = node;
		}

		tmp->next = node;
		node->prev = tmp;
		print_list(*head);
	}
}
