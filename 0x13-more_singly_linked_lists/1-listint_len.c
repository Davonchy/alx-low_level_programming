#include "main.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h: A pointer to the the head listint_t list.
 *
 * Return: The number of elements in listint_t list.
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
