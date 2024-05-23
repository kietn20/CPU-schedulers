// Kiet Nguyen (ID: 027102385)
// CECS 326 – Operating Systems
// Group Project 4: CPU scheduler
// Due Date: 4/26/2024
//
// Compile with "make priority"
// Execute program with "./priority schedule.txt"

/*
 * Priority scheduling
 */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

#include "task.h"
#include "list.h"
#include "cpu.h"

/*
 * Your code and design here:
 */

struct node *head = NULL;
struct node *current = NULL;
struct node *new = NULL;

void add(char *name, int priority, int burst)
{
    // printf("Priority %d\n", priority);
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->task = malloc(sizeof(struct task));
        head->task->name = name;
        head->task->burst = burst;
        head->task->priority = priority;
        head->next = NULL; // set the next node to be null
        current = head;
    }
    else
    {
        new = malloc(sizeof(struct node));
        new->task = malloc(sizeof(struct task));
        new->task->burst = burst;
        new->task->name = name;
        new->task->priority = priority;

        while (1) // runs until new node is inserted (when while loop breaks)
        {
            if (new->task->priority >= head->task->priority)
            {
                head = new;
                new->next = current;
                current = head;
                break;
            }
            else if (new->task->priority >= current->task->priority)
            {
                new->next = current->next;
                current->next = new;
                current = head;
                break;
            }
            else if ((new->task->priority) < (current->task->priority)) // if new.p is less than the current.p
            {
                if (current->next == NULL) // if new.p has the least priority
                {
                    current->next = new;
                    new->next = NULL;
                    current = head;
                    break;
                }
                // if new.p is less than current.p but is larger than current.next.p
                else if (new->task->priority > current->next->task->priority)
                {
                    new->next = current->next;
                    current->next = new;
                    current = head;
                    break;
                }
                else // moves current downwards to find next insert slot
                {
                    current = current->next;
                }
            }
        }
    }
}

void schedule() // invoking the priority scheduler
{
    struct node *curr = head;
    while (curr != NULL)
    {
        run(curr->task, curr->task->burst);
        curr = curr->next;
    }
}
