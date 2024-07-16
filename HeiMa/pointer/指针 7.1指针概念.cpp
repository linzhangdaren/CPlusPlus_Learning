
#include<stdio.h>
#include<string.h>

void code(char* p, size_t n)
{
    size_t i;
    for (i = 0; i < n; i++)
    {
        p[i] += 3;
    }
}

int main()
{
    FILE* p1 = fopen("./a.txt", "r");
    FILE* p2 = fopen("./b.txt", "w");
    char buf[1024] = { 0 };

    while (!feof(p1))
    {
        memset(buf, 0, sizeof(buf));
        size_t res = fread(buf, sizeof(char), sizeof(buf), p1);
        code(buf, res);
        fwrite(buf, sizeof(char), res, p2);
    }
    fclose(p1);
    fclose(p2);
    return 0;
}