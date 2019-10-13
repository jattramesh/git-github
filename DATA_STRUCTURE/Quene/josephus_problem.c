//
// Created by rahul on 13/10/19.
//
#include <stdio.h>
#include <malloc.h>
struct nodes{
    int player_id;
    struct nodes *next;
};
typedef struct nodes node;
node *start,*ptr,*new_node;
int main() {
    int n, k, l, count;
    printf("\n Enter the number of players:");
    scanf("%d", &n);
    printf("\n Enter the value of k (every kth player will eliminate):");
    scanf("%d", &k);
    //create a circular linked list with  all players
    start = (node *) malloc(sizeof(node));
    start->player_id = 1;
    ptr = start;
    int i;
    for (i = 2; i <= n; i++) {
        new_node = (node *) malloc(sizeof(node));
        ptr->next = new_node;
        new_node->player_id = i;
        new_node->next = start;
        ptr = new_node;
    }
    for (count = n; count >= 1; count--) {
        for (i = 0; i < k - 1; ++i)
            ptr = ptr->next;
        ptr->next = ptr->next->next;
    }
    printf("%d is the winner ", ptr->player_id);
}