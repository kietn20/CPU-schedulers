// Kiet Nguyen (ID: 027102385)
// CECS 326 – Operating Systems
// Group Project 4: CPU scheduler
// Due Date: 4/26/2024
//
// Compile with "make fcfs"
// Execute program with "./fcfs schedule.txt"

/**
 * FCFS scheduling
 */

#include <stdlib.h>
#include <stdio.h>

#include "task.h"
#include "list.h"
#include "cpu.h"
#include "schedulers.h"

// Your code and design here

// Initalizing linked list nodes pointers
struct node *head = NULL;
struct node *last = NULL;
struct node *new = NULL;

void add(char *name, int priority, int burst)   // add the task to the scheduler's list of tasks
{
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        last = malloc(sizeof(struct node));

        head->task = malloc(sizeof(struct task)); 
        head->task->name = name; 
        head->task->burst = burst;
        head->task->priority = priority;
        head->next = NULL; // set the next node to be null
        last = head; 
    }
    else
    {
        new = malloc(sizeof(struct node));
        last->next = new; // insert new task node after last node
        new->task = malloc(sizeof(struct task));
        new->task->name = name;
        new->task->burst = burst;
        new->task->priority = priority;
        new->next = NULL;
        last = new; // last pointer is currently last of list (waiting for additional tasks)
    }
}

void schedule() // invoking the FCFS scheduler
{
    struct node *current = head; // traversing node pointer
    while (current != NULL) // traverse linked list until all tasks are executed
    {
        run(current->task, current->task->burst); // Calling run() to print prompt from CPU.c
        current = current->next; // moves current node to next node in list
    }
}