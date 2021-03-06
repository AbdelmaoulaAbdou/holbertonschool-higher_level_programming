#include "lists.h"

/**
 * insert_node - insert a number into a sorted singly linked list.
 * @head: pointer to pointer to the head of the linked list.
 * @number: number to add into the linked list.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = *head;
	listint_t *temp2 = *head;
	listint_t *new;
	int i, j;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		i = 0;
		while (temp != NULL)
		{
			if (temp->n >= number)
			{
				new->next = temp;
				if (temp == (*head))
				{
					(*head) = new;
					return (new);
				}
				j = 0;
				while (j < i)
				{
					if (j == i - 1)
					{
						temp2->next = new;
						return (new);
					}
					temp2 = temp2->next;
					j++;
				}
			}
			else if (temp->n < number && temp->next == NULL)
			{
				new->next = NULL;
				temp->next = new;
				return (new);
			}
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}
