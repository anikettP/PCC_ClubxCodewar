#include <stdio.h>
void Hint() {
    char filename[] = "final_stage";  
    filename[0] = 'T';  
    printf("Next: %s\n", filename);
}

int main() {
    int a = 10, b = 2, c = 0;

    printf("Divide: %d\n", a / c); 
    printf("Check Div(hint)ide error");

    char *ptr = (char*)malloc(10);

    Hint();
    return 0;
}
