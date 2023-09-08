#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

// size_t print_dlistint(const dlistint_t *h)
// {
//     dlistint_t *ptr = malloc(sizeof(dlistint_t));
//     int nodes = 0;

//     if (ptr == NULL)
//     {
//         exit(EXIT_FAILURE);
//     }

//     ptr = h;

//     while (ptr->next != NULL)
//     {
//         printf("%d\n", ptr->n);
//         ptr= ptr->next;
//         nodes++;

//     }

//     while (ptr->prev != NULL)
//     {
//         printf("%d\n", ptr->n);
//         ptr = ptr->prev;
//         nodes++;
//     }

//     return (nodes);
// }

size_t dlistint_len(const dlistint_t *h)
{
    dlistint_t *ptr = malloc(sizeof(dlistint_t));
    int nodes = 0;

    if (ptr == NULL)
    {
        exit(EXIT_FAILURE);
    }

    ptr = h;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        nodes++;
    }

    while (ptr->prev != NULL)
    {
        ptr = ptr->prev;
        nodes++;
    }

    return (nodes);
}

int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}