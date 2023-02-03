#include <string>
#include <iostream>
#include <chrono>

#include "define_macro_functions.h"
#include "define_macros.h"
#include "define_macros_test.h"

#include "variables_test.h"

#include "time_functions.h"
#include "string_functions.h"

#include "time_functions_test.h"
#include "string_functions_test.h"

#include "cpp_template_test.h"

/*
-----------------------------------------------------------------------------------------------------------
Name: Global Variables
-----------------------------------------------------------------------------------------------------------
*/

int countTest;



/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: test
Description: Run the test
-----------------------------------------------------------------------------------------------------------
*/

void test()
{
  // Variables
  int total_test = TOTAL_TEST;
  int count = 0;

  // initialize the variables
  //test_settings = 1;
  //debug_settings = 1;
  //production_settings = 0;

  // set the database to the test database
  //memset(database_name,0,sizeof(database_name));
  //memcpy(database_name,DATABASE_NAME_TEST,sizeof(DATABASE_NAME_TEST)-1);

  // reset the test database
  //delete_database(DATABASE_COLLECTION_TEST);

  // print the start message
  std::cout << COLOR_PRINT_YELLOW << TEST_OUTLINE << std::endl << "Starting " PROGRAM_VERSION " Test" << std::endl << currentTime() << std::endl << TEST_OUTLINE << std::endl << COLOR_PRINT_END;
  
  // start the timer
  auto begin = std::chrono::high_resolution_clock::now();

  // run the tests
  count += time_functions_test();
  count += string_functions_test();

  // get the timer data
  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin); 

  // delete the database
  //delete_database(DATABASE_NAME_TEST);

  // write the end test message
  std::cout << COLOR_PRINT_YELLOW << TEST_OUTLINE << std::endl << PROGRAM_VERSION " Test Results" << std::endl << currentTime() << std::endl << "Completed in: " << elapsed.count() * 1e-9 << " seconds, Passed Test: " << count << " Failed Test: " << total_test - count << std::endl << TEST_OUTLINE << std::endl << COLOR_PRINT_END;
  return;
}
