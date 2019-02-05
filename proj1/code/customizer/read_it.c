#include <stdio.h>
char buf[1024];
int main() {
    FILE *fp = fopen("README", "r");
    fread(buf, sizeof(char), sizeof(buf), fp);
    buf[sizeof(buf) - 1] = 0;
    fclose(fp);
    printf("%s", buf);
    return 0;
}
