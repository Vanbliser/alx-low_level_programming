/*#include <stdlib.h>*/
/*#include <string.h>*/
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head, *h, *a, *b, *c, *d;
	size_t print;


	printf("\n========NULL ADDRESS====================\n\n");
	print = print_dlistint(NULL);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(NULL, 0, 0);
	print = print_dlistint(NULL);
	if (print == 0)
		printf("NULL\n");

	printf("\n========LENGTH OF 0, ADD AT INDEX 1====================\n\n");
	h = NULL;
	print = print_dlistint(h);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&h, 1, 1);
	print = print_dlistint(h);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(h);
	h = NULL;

	printf("\n========LENGTH OF 0, ADD AT INDEX 2====================\n\n");
	h = NULL;
	print = print_dlistint(h);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&h, 2, 2);
	print = print_dlistint(h);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(h);
	h = NULL;

	printf("\n======LENGTH OF 0, ADD AT INDEX O======================\n\n");
	a = NULL;
	print = print_dlistint(a);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&a, 0, 0);
	print = print_dlistint(a);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(a);
	a = NULL;

	printf("\n=====LENGTH OF 1, ADD AT INDEX 0=======================\n\n");
	b = NULL;
	add_dnodeint_end(&b, 1);
	print = print_dlistint(b);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&b, 0, 0);
	print = print_dlistint(b);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(b);
	b = NULL;

	printf("\n=======LENGTH OF 1, ADD AT INDEX 1=====================\n\n");
	c = NULL;
	add_dnodeint_end(&c, 0);
	print = print_dlistint(c);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&c, 1, 1);
	print = print_dlistint(c);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(c);
	c = NULL;

	printf("\n======LENGTH OF 2, ADD AT INDEX 0======================\n\n");
	d = NULL;
	add_dnodeint_end(&d, 1);
	add_dnodeint_end(&d, 2);
	print = print_dlistint(d);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&d, 0, 0);
	print = print_dlistint(d);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(d);
	d = NULL;

	printf("\n======LENGTH OF 2, ADD AT INDEX 1======================\n\n");
	d = NULL;
	add_dnodeint_end(&d, 0);
	add_dnodeint_end(&d, 2);
	print = print_dlistint(d);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&d, 1, 1);
	print = print_dlistint(d);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(d);
	d = NULL;

	printf("\n======LENGTH OF 2, ADD AT INDEX 2======================\n\n");
	d = NULL;
	add_dnodeint_end(&d, 0);
	add_dnodeint_end(&d, 1);
	print = print_dlistint(d);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&d, 2, 2);
	print = print_dlistint(d);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(d);
	d = NULL;

	printf("\n======LENGTH OF 8, ADD AT INDEX 5======================\n\n");
	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 6);
	add_dnodeint_end(&head, 7);
	add_dnodeint_end(&head, 8);
	print = print_dlistint(head);
	if (print == 0)
		printf("NULL\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 5);
	print = print_dlistint(head);
	if (print == 0)
		printf("NULL\n");
	free_dlistint(head);
	head = NULL;

	return (0);
}
