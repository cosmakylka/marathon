#include "mx_strcpy.c"
#include "mx_strdup.c"
#include "mx_strlen.c"
#include "mx_strnew.c"
#include "mx_create_agent.c"
#include "mx_create_new_agents.c"
#include "create_new_agents.h"
#include <stdio.h>

// Helper function to free the agents array and its contents
void free_agents(t_agent **agents) {
    if (agents == NULL) return;
    
    for (int i = 0; agents[i] != NULL; i++) {
        free(agents[i]->name);
        free(agents[i]);
    }
    free(agents);
}

// Helper function to print agent details
void print_agent(t_agent *agent) {
    if (agent == NULL) {
        printf("NULL agent\n");
        return;
    }
    printf("Name: %s, Power: %d, Strength: %d\n", 
           agent->name, agent->power, agent->strength);
}

// Helper function to print all agents
void print_agents(t_agent **agents) {
    if (agents == NULL) {
        printf("NULL agents array\n");
        return;
    }
    
    for (int i = 0; agents[i] != NULL; i++) {
        printf("Agent %d: ", i + 1);
        print_agent(agents[i]);
    }
    printf("-------------------\n");
}

int main(void) {
    // Test 1: Normal case
    printf("\nTest 1: Normal case with 3 agents\n");
    char *names[] = {"Thompson", "Smith", "Colson"};
    int powers[] = {33, 66, 99};
    int strengths[] = {133, 166, 196};
    
    t_agent **agents = mx_create_new_agents(names, powers, strengths, 3);
    print_agents(agents);
    free_agents(agents);

    // Test 2: Single agent
    printf("\nTest 2: Single agent\n");
    char *single_name[] = {"Solo"};
    int single_power[] = {50};
    int single_strength[] = {150};
    
    agents = mx_create_new_agents(single_name, single_power, single_strength, 1);
    print_agents(agents);
    free_agents(agents);

    // Test 3: NULL name array
    printf("\nTest 3: NULL name array (should return NULL)\n");
    agents = mx_create_new_agents(NULL, powers, strengths, 3);
    print_agents(agents);
    free_agents(agents);

    // Test 4: NULL power array
    printf("\nTest 4: NULL power array (should return NULL)\n");
    agents = mx_create_new_agents(names, NULL, strengths, 3);
    print_agents(agents);
    free_agents(agents);

    // Test 5: NULL strength array
    printf("\nTest 5: NULL strength array (should return NULL)\n");
    agents = mx_create_new_agents(names, powers, NULL, 3);
    print_agents(agents);
    free_agents(agents);

    // Test 6: Invalid count
    printf("\nTest 6: Negative count (should return NULL)\n");
    agents = mx_create_new_agents(names, powers, strengths, -1);
    print_agents(agents);
    free_agents(agents);

    // Test 7: Zero count
    printf("\nTest 7: Zero count (should return empty NULL-terminated array)\n");
    agents = mx_create_new_agents(names, powers, strengths, 0);
    print_agents(agents);
    free_agents(agents);

    // Test 8: Array with NULL name
    printf("\nTest 8: Array containing NULL name (should return NULL)\n");
    char *names_with_null[] = {"Valid", NULL, "Also Valid"};
    agents = mx_create_new_agents(names_with_null, powers, strengths, 3);
    print_agents(agents);
    free_agents(agents);

    printf("\nAll tests completed!\n");
    return 0;
}
