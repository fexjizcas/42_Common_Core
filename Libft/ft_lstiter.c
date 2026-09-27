
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

int main(void)
{
    t_list *lista = ft_lstnew("A");
    ft_lstadd_back(&lista, ft_lstnew("B"));
    
    // puts imprime un string automáticamente con un salto de línea
    ft_lstiter(lista, (void (*)(void *))puts);
    
    return (0);
}