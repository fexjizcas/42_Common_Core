
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

int main(void)
{
    t_list *lista = ft_lstnew(malloc(10));
    ft_lstadd_back(&lista, ft_lstnew(malloc(10)));
    
    ft_lstclear(&lista, free);
    
    if (!lista)
        printf("Lista vaciada a NULL correctamente.\n");
    return (0);
}