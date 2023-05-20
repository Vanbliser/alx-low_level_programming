#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
        int n;
        struct dlistint_s *prev;
        struct dlistint_s *next;
} dlistint_t;

void funct (int **d);
dlistint_t *func(dlistint_t **h, unsigned int idx, int n);

int main()
{
	int a = 6;
	int *i = &a;
	int *j = NULL;
	dlistint_t *s, q, *t;

	funct(&i);
	funct(NULL);
	funct(&j);

	q.n = 55;
	q.prev = NULL;
	q.next = NULL;
	s = &q;
	func(&s, 0, 1);

	t = NULL;
	func(&t, 0, 1);

	func(NULL, 0, 1);

	return (0);
}

void funct(int **d)
{
	if (d == NULL)
		printf("NULL\n");
	else if (*d == NULL)
		printf("NULL\n");
	else
		printf("%d\n", **d);
}

dlistint_t *func(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		printf("h = NULL\n");
	else if (*h == NULL)
		printf("*h = NULL\n");
	else
		printf("h->n=%d, idx=%u, n=%d\n", (*h)->n, idx, n);
	return (NULL);
}
