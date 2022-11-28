#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
	if (*head != NULL) {
		if ((*head)->next == NULL) {
			*head = NULL;
		}
		else {
			t_list *tmp = *head;
			
			while (tmp->next->next != NULL)
				tmp = tmp->next;
			
			tmp->next = NULL;
			free(tmp->next);
		}
	}
}

