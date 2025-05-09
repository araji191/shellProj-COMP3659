#ifndef SIGLIB_H
#define SIGLIB_H

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// PROTOTYPES FOR SIGNAL FUNCTIONS
void handle_sigint(int sig);
void signal_handler_setup(struct sigaction *sa);

#endif
