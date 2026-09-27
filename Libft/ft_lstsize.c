
#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

int main(void)
{
    t_list *lista = ft_lstnew("1");
    ft_lstadd_back(&lista, ft_lstnew("2"));
    ft_lstadd_back(&lista, ft_lstnew("3"));
    
    printf("Tamaño de la lista: %u\n", ft_lstsize(lista));
    free(lista->next->next);
    free(lista->next);
    free(lista);
    return (0);
}