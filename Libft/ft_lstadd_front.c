
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new -> next = *lst;
	*lst = new;
}

int main(void)
{
    t_list *lista = ft_lstnew("Nodo original");
    t_list *nuevo_frente = ft_lstnew("Nuevo frente");
    
    ft_lstadd_front(&lista, nuevo_frente);
    
    printf("Primero: %s\n", (char *)lista->content);
    printf("Segundo: %s\n", (char *)lista->next->content);
    
    free(lista->next);
    free(lista);
    return (0);
}