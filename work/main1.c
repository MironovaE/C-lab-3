//
//  main.c
//  lab3_1
//
//  Created by Ksenia on 12.12.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "task1.h"
#define IN 1
#define OUT 0
#define SIZE 512



int main() {
    char buf[SIZE];
    printf("Enter a line,please: \n");
    fgets(buf,SIZE,stdin);
	buf[strlen(buf) - 1] = '\0';

   printf("The line contains %d words\n", wordCount(buf));
    return 0;
}
