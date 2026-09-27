
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*newlst;
	t_list	*node;

	if (!lst)
		return (NULL);
	newlst = NULL;
	node = NULL;
	while (lst)
	{
		if (!f)
			node = ft_lstnew(lst->content);
		else
			node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}

void *f_mini(void *content) {
    return ("NUEVO"); 
}

int main(void)
{
    t_list *lista = ft_lstnew("Uno");
    ft_lstadd_back(&lista, ft_lstnew("Dos"));
    
    // Pasamos f_mini para transformar, y NULL para no borrar nada si falla
    t_list *nueva = ft_lstmap(lista, f_mini, NULL);
    
    printf("1: %s\n", (char *)nueva->content);
    printf("2: %s\n", (char *)nueva->next->content);
    
    return (0);
}