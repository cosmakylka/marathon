#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if (!agents) {
        return NULL;
    }

    int count = 0;

    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength) {
            count++;
        }
    }

    if (count == 0) {
        return NULL; 
    }

    t_agent **new_agents = (t_agent **)malloc((count + 1) * sizeof(t_agent *));
    if (!new_agents) {
        return NULL;
    }

    int j = 0;
    
    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength) {
            new_agents[j++] = agents[i];
        }
    }

    new_agents[j] = NULL;

    return new_agents;
}
