    #include <stdio.h>
    #include <string.h>

    int main(void) {
        FILE *ofile;  /* You can use any variable name here, just make sure you
                         include the '*'. */
        char filename[] = "myGrades.txt";
        int myavg[10];
        int NUM, num, message;
        int i, done = 0;

        puts("please enter a integet number \n");
        scanf("%d", &NUM);

        ofile = fopen(filename, "r");

        while (!done)

        {
            message = fscanf(ofile, "%d", &num); /// fscanf returns an integer
            /// at end of file, fscanf will return EOF
            myavg[i] = num;
            i++;
            if (message == EOF)
            {
                done = 1; /// eof= end of file
            }
        }

               if (myavg[i-1] == NUM)
                {
                 fclose(ofile);
                 return 0;
                }
                 else {
                 ofile = fopen(filename, "a");
                      }


           fprintf(ofile, " %d", NUM);
           fclose(ofile);

        return 0;
    }

