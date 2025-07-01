#include <greeter/greeter.h>
#include "greeter.h"
#include <stdio.h>
#include <stddef.h>

/**
 * @brief
 *   It will print a greeting string
 *   to the stdout.
 *
 * @param buf
 *  a string buffer to return the greeting
 * @param buf_sz
 *  the buf size in bytes
 * @param greeting
 *   a suitable greet string
 */
void get_hello(char *buf, size_t buf_sz, char *greeting)
{
  const char *s = "from t602ilo";

  if (buf && buf_sz > 0 && greeting) {
    snprintf(buf, buf_sz, "%s, %s!", greeting, s);
  }
}
