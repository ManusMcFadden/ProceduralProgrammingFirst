#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file;
}

// Complete the main function
int main() {
    int count = 0;
    FITNESS_DATA fitness_data;
    char filename [] = "FitnessData_2023.csv";
    FILE *file = open_file(filename, "r");

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        count += 1;
    }


    FITNESS_DATA data_array[count];
    char date[11];
	char time[6];
	char steps[10];
    int index = 0;
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        tokeniseRecord(line_buffer, ",", date, time, steps);
        strcpy(data_array[index].date, date);
        strcpy(data_array[index].time, time);
        data_array[index].steps = atoi(steps);
        index += 1;
    }
    fclose(file);
    int i = 0;
    for (i=0; i<3; i++){
        printf("%s/%s/%d\n",data_array[i].date, data_array[i].time, data_array[i].steps);
    }
        printf("Number of records in file: %d\n", count);
    return 0;

}