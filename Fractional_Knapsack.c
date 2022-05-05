#include <stdio.h>

void main()
{
    int capacity, no_items, cur_weight, item;
    int used[20];
    float total_profit;
    int i;
    int flag;
    int weight[20];
    int cost[20];

    printf("Enter the capacity of knapsack:\n");
    scanf("%d", &capacity);

    printf("Enter the number of items:\n");
    scanf("%d", &no_items);

    printf("Enter the weight and value of %d item:\n", no_items);
    for (i = 0; i < no_items; i++)
    {
        printf("Weight[%d]:\t", i);
        scanf("%d", &weight[i]);
        printf("cost[%d]:\t", i);
        scanf("%d", &cost[i]);
    }

    for (i = 0; i < no_items; ++i)
        used[i] = 0;

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        for (i = 0; i < no_items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float) cost[i] / weight[i] > (float) cost[item] / weight[item])))
                item = i;

        used[item] = 1;
        cur_weight -= weight[item];
        total_profit += cost[item];
        if (cur_weight >= 0)
                flag=1;                           
        else
        {
            total_profit -= cost[item];
            total_profit += (1 + (float)cur_weight / weight[item]) * cost[item];
        }
    }

    printf("%.2f Rs.\n", total_profit);
}