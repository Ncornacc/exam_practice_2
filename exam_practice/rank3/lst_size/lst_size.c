int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	if (begin_list == 0)
		return (0);
	else
		return (1 +ft_list_size(begin_list->next));
}