#include <stdio.h>
#include <stdlib.h>

// Node structure without typedef
struct Node {
    int data;
    struct Node *next;
};

// Queue structure without typedef
struct Queue {
    struct Node *front;
    struct Node *rear;
    int count;
};

// Initialize queue
void initQueue(struct Queue *q) {
    q->front = NULL;
    q->rear = NULL;
    q->count = 0;
}

// Enqueue operation
void enqueue(struct Queue *q, int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = val;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    q->count++;
}

// Dequeue operation
int dequeue(struct Queue *q, int num) {
    int removed = 0;
    while (q->front != NULL && removed < num) {
        struct Node *temp = q->front;
        q->front = q->front->next;
        free(temp);
        removed++;
        q->count--;
    }
    if (q->front == NULL) q->rear = NULL;
    return removed;
}

// Queue count
int queueCount(struct Queue *q) {
    return q->count;
}

// Free queue memory
void freeQueue(struct Queue *q) {
    while (q->front != NULL) {
        struct Node *temp = q->front;
        q->front = q->front->next;
        free(temp);
    }
    q->rear = NULL;
    q->count = 0;
}

int main() {
    struct Queue laneA, laneB;
    int carsPassed;
    char choice;

    initQueue(&laneA);
    initQueue(&laneB);

    printf("Traffic Light Simulation Started (No typedef version)\n\n");

    int cycle = 1;
    while (cycle <= 10) {
        printf("=== Cycle %d ===\n", cycle);

        int newA, newB;
        printf("Enter number of arriving cars for Lane A: ");
        scanf("%d", &newA);
        printf("Enter number of arriving cars for Lane B: ");
        scanf("%d", &newB);
int i;
int j;
        for (i = 0; i < newA; i++) enqueue(&laneA, 1);
        for ( j = 0; j < newB; j++) enqueue(&laneB, 1);

        printf("Lane A Queue: %d cars\n", queueCount(&laneA));
        printf("Lane B Queue: %d cars\n", queueCount(&laneB));

        if (queueCount(&laneA) >= queueCount(&laneB)) {
            // Lane A gets yellow light first
            printf("Lane A: YELLOW light ON [YELLOW] - Prepare to pass cars\n");

            int passCount;
            printf("Enter number of cars to pass from Lane A: ");
            scanf("%d", &passCount);

            // Then green light for Lane A, red for Lane B
            printf("Lane A: GREEN light ON [GREEN]\n");
            printf("Lane B: RED light ON [RED]\n");

            carsPassed = dequeue(&laneA, passCount);

        } else {
            // Lane B gets yellow light first
            printf("Lane B: YELLOW light ON [YELLOW] - Prepare to pass cars\n");

            int passCount;
            printf("Enter number of cars to pass from Lane B: ");
            scanf("%d", &passCount);

            // Then green light for Lane B, red for Lane A
            printf("Lane B: GREEN light ON [GREEN]\n");
            printf("Lane A: RED light ON [RED]\n");

            carsPassed = dequeue(&laneB, passCount);
        }

        printf("?? %d vehicle(s) passed this cycle.\n", carsPassed);
        printf("?? Light blown (simulation)\n");
        printf("-----------------------------\n");

        // Clear input buffer before reading char
        while ((getchar()) != '\n');

        printf("Do you want to continue to the next cycle? (Y/N): ");
        scanf("%c", &choice);

        if (choice == 'N' || choice == 'n') {
            printf("\nSimulation exited by user.\n");
            break;
        }

        cycle++;
        printf("\n");
    }

    freeQueue(&laneA);
    freeQueue(&laneB);

    printf("Simulation Ended\n");
    return 0;
}


