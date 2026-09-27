
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
		return (NULL);
	while (lst != NULL && lst->next != NULL)
		lst = lst -> next;
	return (lst);
}

int main(void)
{
    t_list *lista = ft_lstnew("Primero");
    ft_lstadd_back(&lista, ft_lstnew("Segundo"));
    ft_lstadd_back(&lista, ft_lstnew("Último de verdad"));
    
    t_list *ultimo = ft_lstlast(lista);
    if (ultimo)
        printf("El último nodo contiene: %s\n", (char *)ultimo->content);
    
    free(lista->next->next);
    free(lista->next);
    free(lista);
    return (0);
}