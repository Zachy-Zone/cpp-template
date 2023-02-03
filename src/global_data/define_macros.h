#ifndef DEFINE_MACROS_H_   /* Include guard */
#define DEFINE_MACROS_H_

/*
-----------------------------------------------------------------------------------------------------------
Using define statements instead of constants for increased efficiency
-----------------------------------------------------------------------------------------------------------
*/

// Color Printing
#define COLOR_PRINT_RED "\033[1;31m"
#define COLOR_PRINT_GREEN "\033[1;32m"
#define COLOR_PRINT_YELLOW "\033[1;33m"
#define COLOR_PRINT_END "\033[0m"

// General
#define PROGRAM_VERSION "cpp-template, Version 1.0.0" // The version of the program

// Network
#define PROGRAM_PORT 3000 // The REST port

// Lengths
#define BUFFER_SIZE 300000

// Database
#define DATABASE_CONNECTION "mongodb://localhost:27017" // The database connection string

// Test
#define TEST_OUTLINE "-----------------------------------------------------------------------------------------------"
#define INVALID_PARAMETERS_ERROR_MESSAGE \
"Parameters\n" \
"All parameters are optional\n\n" \
"--parameters - List of all valid parameters\n" \
"--test - Run a test to validate system compatibility.\n" \
"--threads <total_threads> - Total threads to use. Default is the CPU total number of threads.\n"
#endif
