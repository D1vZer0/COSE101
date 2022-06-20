#include <stdio.h>

typedef struct score {
    char name[10];
    int q1;
    int q2;
    int q3;
    double avg;
} sco;

void read_data (sco *info);
void cal_avg (sco info[]);
void sort (sco info[]);
void print_score (sco info[]);

int main ()
{
    sco data[10];
    for (int i=0; i<10; i++) {
        read_data (&data[i]);
        cal_avg (&data[i]);
    }
    
    sort (data);
    print_score (data);
    
    return 0;
}

void read_data (sco *info) {
    sco *ptr = info;
    scanf ("%s %d %d %d", ptr->name, &ptr->q1, &ptr->q2, &ptr->q3);
}
void cal_avg (sco *info) {
    sco *ptr = info;
    ptr->avg = (ptr->q1 + ptr->q2 + ptr->q3)/3;
}
void sort (sco info[]) {
    sco temp;
    for (int i=0; i<10; i++) 
        for (int j=0; j<i; j++) 
            if (info[i].avg > info[j].avg) {
                temp = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
}
void print_score (sco info[]) {
    printf ("%s %.2f\n", info[0].name, info[0].avg);
    printf ("%s %.2f\n", info[9].name, info[9].avg);
    printf ("%s %.2f\n", info[7].name, info[7].avg);
    printf ("%s %.2f\n", info[8].name, info[8].avg);
    printf ("%s %.2f\n", info[9].name, info[9].avg);
}
