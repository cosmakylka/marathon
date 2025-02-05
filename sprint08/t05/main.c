#include "exterminate_agents.h"
#include "mx_exterminate_agents.c"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Create an array of pointers to t_agent
    t_agent **agents = malloc(4 * sizeof(t_agent*)); // Allocating space for 3 agents + NULL
    if (agents == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Create and allocate memory for agents
    for (int i = 0; i < 3; i++) {
        agents[i] = malloc(sizeof(t_agent));  // Allocate memory for each agent
        if (agents[i] == NULL) {
            printf("Memory allocation for agent %d failed.\n", i);
            return 1;
        }
        
        // Initialize agent data
        agents[i]->name = malloc(20 * sizeof(char));  // Allocate memory for the name
        if (agents[i]->name == NULL) {
            printf("Memory allocation for agent name %d failed.\n", i);
            return 1;
        }

        // Set agent data (example)
        snprintf(agents[i]->name, 20, "Agent %d", i + 1);
        agents[i]->age = 20 + i;
    }
    agents[3] = NULL; // Mark the end of the array with NULL

    // Print agents before extermination
    printf("Agents before extermination:\n");
    for (int i = 0; agents[i] != NULL; i++) {
        printf("Agent %d: Name = %s, Age = %d\n", i + 1, agents[i]->name, agents[i]->age);
    }

    // Call mx_exterminate_agents to free the memory
    mx_exterminate_agents(&agents);

    // Verify that agents array is NULL
    if (agents == NULL) {
        printf("\nAgents array is NULL after extermination.\n");
    } else {
        printf("\nAgents array was not properly set to NULL.\n");
    }

    return 0;
}


