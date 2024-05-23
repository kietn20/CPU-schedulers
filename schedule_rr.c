// Kiet Nguyen (ID: 027102385)
// CECS 326 – Operating Systems
// Group Project 4: CPU scheduler
// Due Date: 4/26/2024
//
// Compile with "make rr"
// Execute program with "./rr schedule.txt"

/**
 * Round-robin scheduling
 */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "task.h"
#include "list.h"
#include "cpu.h"

/*
 * Your code and design here:
 */

struct node *head = NULL;
struct node *last = NULL;
struct node *new = NULL;
int totalBurstTime = 0;

void add(char *name, int priority, int burst)
{
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        last = malloc(sizeof(struct node));
        head->task = malloc(sizeof(struct task));
        head->task->name = name;
        head->task->burst = burst;
        head->task->priority = priority;
        head->next = NULL;
        last = head;
    }
    else
    {
        new = malloc(sizeof(struct node));
        last->next = new;
        new->task = malloc(sizeof(struct task));
        new->task->name = name;
        new->task->burst = burst;
        new->task->priority = priority;
        new->next = NULL;
        last = new;
    }
    totalBurstTime += burst;
}

void schedule() // invoking the round robin scheduler with quantum 10
{
    printf("Total burst time: %d\n", totalBurstTime);
    struct node *curr = head;
    while (totalBurstTime != 0) // total == 170
    {
        if (!curr)
            curr = head;

        if (curr->task->burst > 0)
        {
            int subtractAmount = (curr->task->burst > 10) ? 10 : curr->task->burst;
            run(curr->task, subtractAmount);
            curr->task->burst -= subtractAmount;
            totalBurstTime -= subtractAmount;
            // printf(" Leftover total: %d\n", totalBurstTime);
        }
        curr = curr->next;
    }
    printf("Total burst time: %d\n", totalBurstTime);
}
