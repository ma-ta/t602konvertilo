/**
 *  @file
 *  @brief
 *    Contains the entry point of the programe.
 *  @details
 *    - the entry function main()
 *    - a function for greeting a user
 *  @see
 *    https://github.com/ma-ta/t602konvertilo
 *  @author
 *    Copyright (c) 2025&nbsp;&nbsp;Martin TÁBOR
 */


#include <stdio.h>
#include <stdlib.h>
#include <greeter/greeter.h>


/**
 * @brief The entry point of the programe.
 *
 * @param argc
 *   a count of the CLI arguments
 * @param argv
 *   a list of the CLI arguments
 * @return
 *   the exit status of the programe
 */
int main(int argc, char *argv[])
{
  char s_buf[100] = "";

  get_hello(s_buf, sizeof(s_buf), "Hello");
  printf("%s\n", s_buf);
  printf("(%s)\n", argv[0]);

  return EXIT_SUCCESS;
}
