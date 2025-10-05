/*
 * functions.h
 *
 *      Author: Nguyen Nhan
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include "global.h"
#include <ctype.h>
#include <stdbool.h>
# include "commands.h"

void accumulate_line(char *buffer, int max_size);
int tokenize_line(char *line, char *argv[], int max_tokens);
void process_command(int argc, char *argv[]);

#endif /* FUNCTIONS_H_ */
