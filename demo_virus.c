#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  

int main() {
    FILE *fp;
    char *filename = "demo_virus_output.txt";
    int i = 0;

    fp = fopen(filename, "w");  // Open a file for writing
    if (fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    while(1) {  // Infinite loop
        fprintf(fp, "This is a harmless replication simulation %d\n", i++);
        fflush(fp);  // Flush after each write to ensure data is written to the file

        // Optionally, sleep to reduce CPU usage
        sleep(1);  // Sleep for 1 second between iterations
    }

    fclose(fp);  // This line will never be reached
    return 0;
}
