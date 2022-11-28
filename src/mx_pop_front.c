#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
	if (*head != NULL) {
		t_list *tmp = *head;
		
		*head = (*head)->next;
		free(tmp);
	}
}

