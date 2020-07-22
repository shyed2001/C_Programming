/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
/// #include <dos.h>
#include <direct.h>
int main(void)
{

  printf(
      R"( These things can be converted from char to integer and from integer to char
)");  /// R"() is for raw string conversion.

  char c1 = 'A';
  char c2 = 'B';
  char c3 = 'C';
  char c4 = 'D';
  char c5 = 'E';
  char c6 = 'F';
  char c7 = 'G';
  char c8 = 'H';
  char c9 = 'I';
  char c10 = 'J';
  char c11 = 'K';
  char c12 = 'L';
  char c13 = 'M';
  char c14 = 'N';
  char c15 = 'O';
  char c16 = 'P';
  char c17 = 'Q';
  char c18 = 'R';
  char c19 = 'S';
  char c20 = 'T';
  char c21 = 'U';
  char c22 = 'V';
  char c23 = 'W';
  char c24 = 'X';
  char c25 = 'Y';
  char c26 = 'Z';

  printf(" In ASCII %i =%c,In ASCII %i =%c ,In ASCII %i =%c ,In ASCII %i =%c "
         ",In ASCII %i =%c ,In ASCII %i =%c \n ,In ASCII %i =%c ,In ASCII %i "
         "=%c ,In ASCII %i =%c ,In ASCII %i =%c ,In ASCII %i =%c \n",
         (int)c1, c1, (int)c2, c2, (int)c3, c3, c4, c4, c5, c5, c6, c6, c7, c7,
         c8, c8, (int)c9, c9, (int)c10, c10); /// (int) is optional representing chars as integers.
/// This is called casting.
  printf(" In ASCII %i =%c ,In ASCII %i =%c ,In ASCII %i =%c ,In ASCII %i =%c "
         ",In ASCII %i =%c \n ,In ASCII %i =%c ,In ASCII %i =%c ,In ASCII %i "
         "=%c ,In ASCII %i =%c ,In ASCII %i =%c\n",
         (int)c11, c11, c12, c12, c13, c13, (int)c14, c14, c15, c15, (int)c16,
         c16, (int)c17, c17, c18, c18, c19, c19, c20,
         c20); /// (int) is optional representing chars as integers.
/// This is called casting.
  printf(" In ASCII %i =%c ,In ASCII %i =%c ,In ASCII %i =%c \n ,In ASCII %i "
         "=%c ,In ASCII %i =%c ,In ASCII %i =%c \n",
         c21, c21, (int)c22, c22, (int)c23, c23, c24, c24, (int)c25, c25, c26,
         c26); /// (int) is optional representing chars as integers. /// This is called casting.

  return 0;
}
