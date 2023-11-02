#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

// void changeContent(void *content){
//     (void)content;
//     content = "teddy en prison";
// }

int main(){
    printf("ft_bzero\n");
    char mem[] = "Salut teddy";
    char mem2[] = "Salut teddy";

    printf("%s\n", mem);
    printf("%s\n", mem2);

    ft_bzero(mem, 10);
    ft_bzero(mem2, 10);

    printf("%s\n", mem);
    printf("%s\n", mem2);
    printf("ft_calloc\n");

    char *str = ft_calloc(12,  sizeof(char));
    free(str);

    char *nb;
    nb = ft_itoa(1236);
    printf("%s\n", nb);
    free(nb);

    t_list *head = NULL;
    t_list *node = ft_calloc(1, sizeof(t_list));
    node->content = "teddy le narco traficante";
    printf("%s\n", (char *)node->content);
    ft_lstadd_front(&head, node);
    ft_lstiter(node, changeContent);
    printf("%s\n", (char *)node->content);
}


// typedef struct t_lst {
//     void *content;
//     t_lst *next;
// }

// t_lst *head;

// t_lst *ft_createnode(void *content){
//     t_lst node;

//     node->content = content;
//     node->next = NULL;
//     return (node);
// }

// ft_lstadd_back(&head, ft_createnode("teddy"));
