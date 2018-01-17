
void CI_AddTestCase(void);

/*
 * Filename: ci_testrunner.c
 *
 * Copyright 2017 United States Government as represented by the Administrator
 * of the National Aeronautics and Space Administration.  No copyright is
 * claimed in the United States under Title 17, U.S. Code.
 * All Other Rights Reserved.
 *
 * Purpose: This file contains a unit test runner for the CI Application.
 *
 */

/*
 * Includes
 */

#include "uttest.h"

/*
 * Function Definitions
 */

int main(void)
{
    /* Call AddTestSuite or AddTestCase functions here */
    CI_AddTestCase();
    return(UtTest_Run());
}

