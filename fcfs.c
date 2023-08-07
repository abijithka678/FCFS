#include <stdio.h>

int main() {
    int num, bt[20], wt[20], tat[20];

    printf("Enter the number of programs: ");
    scanf("%d", &num);

    printf("Enter the burst time of each process:\n");
    for (int i = 0; i < num; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    tat[0] = bt[0] + wt[0];
    for (int i = 1; i < num; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        tat[i] = wt[i] + bt[i];
    }

    printf("Process_No\tBurst_Time\tWaiting_Time\tTurnaround_Time\n");
    for (int i = 0; i < num; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    return 0;
}
