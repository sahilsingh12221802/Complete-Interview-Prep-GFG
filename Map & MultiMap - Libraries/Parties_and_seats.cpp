void Election2019(char party[][100], int seats[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(party[i], party[j]) > 0) {
                char temp[100];
                strcpy(temp, party[i]);
                strcpy(party[i], party[j]);
                strcpy(party[j], temp);

                int t = seats[i];
                seats[i] = seats[j];
                seats[j] = t;
            }
        }
    }

    int max = seats[0];
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", party[i], seats[i]);
        if (seats[i] > max) max = seats[i];
    }
    printf("%d\n", max);
}
