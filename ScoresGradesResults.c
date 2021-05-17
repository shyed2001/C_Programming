/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
/**
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
**/

float average(int score_numbers, float array[]);

int main(void)

{
  // Get number of scores
    int number_of_scores;
    printf("Number of Student Scores:  ");
    scanf("%i",&number_of_scores);
    printf("Please enter %i Number of Scores\n", number_of_scores );
    // Get scores
    float scores[number_of_scores];
    for (int i = 0; i < number_of_scores; i++)
    {
        //scores[i] = get_int("Score %i: ", i + 1);
        printf("Score %i: ", i+1);
        scanf("%f", &scores[i]);
        /// scores[i] = scanf("Score %i: ", &i);
    }

     // Print average
    printf("Average: %.3f\n", average(number_of_scores, scores));
}

float average(int score_numbers, float array[])
{
    float scores_sum = 0.0;
    for (int i = 0; i < score_numbers; i++)
    {
        scores_sum += array[i];  /// scores_sum = scores_sum + array[i];
        printf(" Roll Number= %i:  \n", i+1);
        printf("Student[%i] = %.3f:  \n", i+1, array[i]);
    }
    printf("Total scores_sum of all scores %.3f:  \n", scores_sum);
    printf("Student Number %i:  \n", score_numbers);
    return scores_sum/score_numbers;

}
