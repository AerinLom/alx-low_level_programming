#include "lists.h"

/**
 *dlistint_len - returns number of elecments of a list
 *@h: list to print from
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
        size_t num_elements = 0;

        while (h != NULL)
        {
                h = h->next;
                num_elements++;
        }
        return (num_elements);
}
