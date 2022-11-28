#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	t_list *tmp1 = lst;
	t_list *tmp2 = lst;
	void *s;
	
	while (tmp1 != NULL) {
		tmp2 = tmp1->next;
		while (tmp2 != NULL) {
			if (cmp(tmp1->data, tmp2->data)) {
				s = tmp1->data;
				tmp1->data = tmp2->data;
				tmp2->data = s;
			}
			
			tmp2 = tmp2->next;
		}
		
		tmp1 = tmp1->next;
	}
	
	return lst;
}

