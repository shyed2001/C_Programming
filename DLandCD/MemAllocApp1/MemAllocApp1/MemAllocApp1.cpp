// MemAllocApp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

//#include <stdio.h>
//
//#define MAX_FRAMES 6
//
//void pageFaultsAndHits(int pages[], int n, int frames) {
//    int pageFaults = 0;
//    int pageHits = 0;
//    int frame[MAX_FRAMES];
//    int frameIndex = 0;
//    int i, j;
//
//    for (i = 0; i < frames; i++) {
//        frame[i] = -1; // Initialize frames as empty
//    }
//
//    for (i = 0; i < n; i++) {
//        int found = 0;
//        for (j = 0; j < frames; j++) {
//            if (frame[j] == pages[i]) {
//                found = 1;
//                break;
//            }
//        }
//        if (found) {
//            pageHits++;
//        }
//        else {
//            frame[frameIndex] = pages[i];
//            frameIndex = (frameIndex + 1) % frames;
//            pageFaults++;
//        }
//    }
//
//    printf("Page Faults: %d\n", pageFaults);
//    printf("Page Hits: %d\n", pageHits);
//}
//
//int main() {
//    int pages[] = { 1, 3, 1, 4, 7, 4, 5, 3, 2, 1, 2, 1, 3, 4, 6, 7 };
//    int numPages = sizeof(pages) / sizeof(pages[0]);
//
//    //int frames = 3;
//
//    int frames;
//    printf("Enter the number of frames: ");
//    scanf_s("%d", &frames);
//
//    printf("FIFO:\n");
//    pageFaultsAndHits(pages, numPages, frames);
//
//    printf("\nLRU:\n");
//    pageFaultsAndHits(pages, numPages, frames);
//
//    printf("\nOPT:\n");
//    pageFaultsAndHits(pages, numPages, frames);
//
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

//In this modified program, the pageFaultsAndHits function calculates both page faults and page hits.It keeps track of the frames using the frame array and checks whether a page is already present in the frames.If found, it increments the page hits count; otherwise, it adds the page to the frames and increments the page faults count.
//
//In the main function, the pageFaultsAndHits function is called for each algorithm(FIFO, LRU, OPT) with the provided page address trace(pages) and the number of available frames(frames).Finally, the program prints the number of page faults and page hits for each algorithm.
//
//You can modify the pages array and the number of frames(frames) in the main function to test the program with different page address traces and frame sizes.
//In this program, the pageFaultFIFO, pageFaultLRU, and pageFaultOPT functions implement the FIFO, LRU, and OPT algorithms, respectively.The main function calls these functions with the provided page address trace(pages) and the number of available frames(frames).Finally, the program prints the number of page faults for each algorithm.
//
//You can modify the pages array and the number of frames(frames) in the main function to test the program with different page address traces and frame sizes.

// The scanf_s function requires an additional parameter specifying the size of the input buffer.In this case, you don't need to provide a buffer size for reading an integer. Therefore, you can pass the address of the frames variable directly to scanf_s.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* process, * pages;
    int i, j, n, m;

    printf("Enter the number of memory processes: ");
    scanf_s("%d", &n);

    printf("Enter the number of pages for each process: ");
    scanf_s("%d", &m);

    process = (int*)malloc(n * sizeof(int));
    pages = (int*)malloc(m * sizeof(int));

    printf("Enter the memory process numbers:\n");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &process[i]);
    }

    printf("Enter the page numbers/page addresses for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d:\n", process[i]);
        for (j = 0; j < m; j++) {
            scanf_s("%d", &pages[j]);
        }
    }

    int hits = 0, faults = 0;
    int* frame, * temp;
    int counter = 0, position, k;

    frame = (int*)malloc(m * sizeof(int));
    temp = (int*)malloc(m * sizeof(int));

    for (i = 0; i < m; i++)
        frame[i] = -1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (frame[j] == pages[i]) {
                hits++;
                break;
            }
        }
        if (j == m) {
            faults++;
            if (counter < m) {
                frame[counter] = pages[i];
                counter++;
            }
            else {
                for (k = 0; k < m; k++)
                    temp[k] = 0;

                for (k = i - 1, position = 1; position <= m - 1; position++, k--) {
                    for (j = 0; j < m; j++) {
                        if (frame[j] == pages[k])
                            temp[j] = 1;
                    }
                }

                for (k = 0; k < m; k++) {
                    if (temp[k] == 0)
                        break;
                }

                frame[k] = pages[i];
            }
        }

        printf("\nPage fault: %d\n", faults);
        printf("Page hit: %d\n", hits);
    }

    printf("\nProbable Solution 1:\n");
    printf("Total Page Faults: %d\n", faults);
    printf("Total Page Hits: %d\n", hits);
    printf("Page Fault Rate: %.2f\n", (float)faults / (float)(faults + hits));
    printf("Page Hit Rate: %.2f\n", (float)hits / (float)(faults + hits));

    printf("\nProbable Solution 2:\n");
    printf("Total Page Faults: %d\n", faults);
    printf("Total Page Hits: %d\n", hits);
    printf("Page Fault Rate: %.2f\n", (float)faults / (float)(n * m));
    printf("Page Hit Rate: %.2f\n", (float)hits / (float)(n * m));

    free(process);
    free(pages);
    free(frame);
    free(temp);
    
    return 0;}