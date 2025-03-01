/* Copyright (C) 2009 - 2017 National Aeronautics and Space Administration. All Foreign Rights are Reserved to the U.S. Government.

   This software is provided "as is" without any warranty of any, kind either express, implied, or statutory, including, but not
   limited to, any warranty that the software will conform to, specifications any implied warranties of merchantability, fitness
   for a particular purpose, and freedom from infringement, and any warranty that the documentation will conform to the program, or
   any warranty that the software will be error free.

   In no event shall NASA be liable for any damages, including, but not limited to direct, indirect, special or consequential damages,
   arising out of, resulting from, or in any way connected with the software or its documentation.  Whether or not based upon warranty,
   contract, tort or otherwise, and whether or not loss was sustained from, or arose out of the results of, or use of, the software,
   documentation or services provided hereunder

   ITC Team
   NASA IV&V
   ivv-itc@lists.nasa.gov
*/
   
#ifndef _crypto_print_h_
#define _crypto_print_h_

/*
** Includes
*/
#include "crypto.h"
#include "crypto_structs.h"


/*
** Prototypes
*/
void Crypto_tcPrint(TC_t* tc_frame);
void Crypto_tmPrint(TM_t* tm_frame);
void Crypto_clcwPrint(TM_FrameCLCW_t* clcw);
void Crypto_fsrPrint(SDLS_FSR_t* report);
void Crypto_ccsdsPrint(CCSDS_t* sdls_frame);
void Crypto_saPrint(SecurityAssociation_t* sa);

#endif 
