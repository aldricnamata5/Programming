#include <stdio.h>

int main(void) {

  FILE *fptr , *fptr2;


  int id, grade1, grade2, grade3;
  int i, g, total;

  char name[255];
  char n[255];


  fptr = fopen("D:\\filer.txt", "w");

  if (fptr != NULL) {
    printf("File1 created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    return -1;
  }

    printf("student name: ");
    fprintf(fptr,"student name: ");
    gets(name);
    fputs(name , fptr);
    fprintf(fptr , "\n");

    printf("Enter student ID: ");
    fprintf(fptr,"Student ID: ");
    scanf("%d", &id);
    fprintf(fptr,"%d",id);
    fprintf(fptr,"\n");

    printf("Enter student Math grade1: ");
    fprintf(fptr,"Math grade1: ");
    scanf("%d", &grade1);
    fprintf(fptr, "%d", grade1);
    fprintf(fptr,"\n");

    printf("Enter student Science grade2: ");
    fprintf(fptr,"Science grade2: ");
    scanf("%d", &grade2);
    fprintf(fptr,"%d", grade2);
    fprintf(fptr,"\n");

    printf("Enter student English grade3: ");
    fprintf(fptr,"English grade3: ");
    scanf("%d", &grade3);
    fprintf(fptr,"%d", grade3);
    fprintf(fptr,"\n");

    total=grade1+grade2+grade3;
    g=total/3;

    fprintf(fptr,"Total Grade: %d\n", total);
    fprintf(fptr,"Grade Average: %d", g);

    fprintf(fptr,"\n");

    printf("\nStudent Details:\n");
    printf("ID: %d\n",id);
    printf("Name: %s\n",name);
    printf("Total grade:%d\n", g);

    printf("\nEnd of file1.\n\n\n");

    gets(name);

    fclose(fptr);

    fptr2 = fopen("D:\\filer2.txt", "w");

    if (fptr2 != NULL) {
    printf("File2 created successfully!\n");
    }
    else {
    printf("Failed to create the file.\n");
    return -1;
    }

    printf("student name: ");
    fprintf(fptr2,"student name: ");
    gets(name);
    fputs(name,fptr2);
    fprintf(fptr2,"\n");

    printf("Enter student ID: ");
    fprintf(fptr2,"Student ID: ");
    scanf("%d", &id);
    fprintf(fptr2,"%d",id);
    fprintf(fptr2,"\n");

    printf("Enter student Math grade1: ");
    fprintf(fptr2,"Math grade1: ");
    scanf("%d", &grade1);
    fprintf(fptr2,"%d", grade1);
    fprintf(fptr2,"\n");

    printf("Enter student Science grade2: ");
    fprintf(fptr2,"Science grade2: ");
    scanf("%d",&grade2);
    fprintf(fptr2,"%d",grade2);
    fprintf(fptr2,"\n");

    printf("Enter student English grade3: ");
    fprintf(fptr2,"English grade3: ");
    scanf("%d",&grade3);
    fprintf(fptr2,"%d", grade3);
    fprintf(fptr2,"\n");

    total = grade1+grade2+grade3;
    g = total/3;

    fprintf(fptr2, "Total Grade: %d\n", total);
    fprintf(fptr2, "Grade Average: %d", g);

    fprintf(fptr2, "\n");
    printf("\n");

    printf("\nStudent Details:\n");
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Total grade: %d\n", g);

    printf("\nEnd of file2.\n");

    fclose(fptr2);

  return 0;
}
