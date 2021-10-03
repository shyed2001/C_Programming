#include <stdio.h>
#include <stdint.h>


#define SHOW_SOURCE_CODE

#define SHOW_SOURCE_FILE_PATH

/// Above two lines are user defined Macros
/// using namespace std;
/* How to pass array into function using pointer */
void print (int *);
///function declaration

int64_t add (int64_t, int64_t) ;
int64_t sub(int64_t, int64_t) ;
void printHello()
{
    puts( "Hello" );
}

void B(void (*ptr)()) /// function pointer as argument
{
    ptr(); /// call back function that ptr points to
}
int multiply(int a, int b);

int addn (int a, int b) {return a + b; }
int mult(int a, int b) {return a * b; }
int do_operation (int (*op) (int, int), int x, int y)
{
    return op(x, y);
}

/// typedef int (*operation_ptr) (int, int) ;

//int do_operation (operation_ptr op, int x, int y)
//{
//return op(x, y)
//}

int main()
{

#ifdef SHOW_SOURCE_FILE_PATH



       /// Prints location of C this C code.

   printf("%s \n",__FILE__); /// __FILE__ holds the current file name




#endif


#ifdef SHOW_SOURCE_CODE
        /// We can append this code to any C program
    /// such that it prints its source code with line number.


unsigned long ln = 0;
 FILE *fp = fopen(__FILE__, "r");
int prev = '\n';
int cc;  // Use int here, not char
while((cc=getc(fp))!=EOF) {
  if (prev == '\n'){
    printf("%05lu ", ++ln);
  }
  putchar(cc);
  prev = cc;
}
if (prev != '\n') {
  putchar('\n');  /// print a \n for input that lacks a final \n
}
printf("Total lines numbers: %lu\n", ln);
puts( " Output of this source Code : - \n\n" );

    fclose(fp);
          /// We can append this code to any C program
    /// such that it prints its source code with line number.

#endif
    puts( "Function Pointers can be passed as arguments to other functions" );
const char *str = "static";
printf(" str: %p\n", str) ;
printf(" main:%p \n", main );

int64_t (*function_pointer)(int64_t, int64_t);

function_pointer = add ; /// function name will return us pointer

printf("1+2 = %ld \n", function_pointer(1,2));


function_pointer = sub;

printf("1+2 = %ld \n", function_pointer(1,2));

  int c;

  int (*p)(int, int);
  p = &multiply;
  c = (*p)(2,3); /// dereferencing and executing the function;

  printf("2*3 = %d \n", c);

  int d;

  int (*q)(int, int);
  q = multiply;
  d = q(4,5); /// executing the function;

  printf("4*5 = %d \n", d);

  printf(" add:%p \n", add );

  printf(" sub:%p \n", sub );

  printf(" multiply:%p \n", multiply );

  void (*ptr)();
  ptr = printHello;
  ptr();


  void (*ptrfunc)() = printHello;
  /// or ptrfunc = printHello;

  B(ptrfunc);


  B(printHello); /// here printHello is a call back function

int result = do_operation (addn, 5, 34);
int result2 = do_operation (mult, 2, 3);

printf( "% d %d \n", result, result2);

int a[10], i;
printf("\nEnter 10 Elements\n");
for(i=0; i<10; i++)
scanf("%d", &a[i]);
print(a) ;
//function calling

return 0;
}


int64_t add (int64_t a, int64_t b)
{
    return a + b;
}
int64_t sub(int64_t a, int64_t b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a*b;
}

void print(int *p)
{//function definition
int i;

for(i=0; i<10;i++)
{
printf ("%d\n", *p);
// means value at address
p++;
}
}
