/**
 * \file IfxConverter_reg.h
 * \brief
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37xPD_UM_V1.2.0.R0
 * Specification: TC3xx User Manual V1.2.0
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Use of this file is subject to the terms of use agreed between (i) you or 
 * the company in which ordinary course of business you are acting and (ii) 
 * Infineon Technologies AG or its licensees. If and as long as no such 
 * terms of use are agreed, use of this file is subject to following:


 * Boost Software License - Version 1.0 - August 17th, 2003

 * Permission is hereby granted, free of charge, to any person or 
 * organization obtaining a copy of the software and accompanying 
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the 
 * Software is furnished to do so, all subject to the following:

 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE 
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * \defgroup IfxSfr_Converter_Registers_Cfg Converter address
 * \ingroup IfxSfr_Converter_Registers
 * 
 * \defgroup IfxSfr_Converter_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Converter_Registers_Cfg
 *
 * \defgroup IfxSfr_Converter_Registers_Cfg_Convctrl 2-CONVCTRL
 * \ingroup IfxSfr_Converter_Registers_Cfg
 *
 *
 */
#ifndef IFXCONVERTER_REG_H
#define IFXCONVERTER_REG_H 1
/******************************************************************************/
#include "IfxConverter_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Converter_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CONVERTER object */
#define MODULE_CONVCTRL /*lint --e(923, 9078)*/ ((*(Ifx_CONVERTER*)0xF0025000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Converter_Registers_Cfg_Convctrl
 * \{  */
/** \brief 0, Clock Control Register */
#define CONVCTRL_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_CLC*)0xF0025000u)

/** \brief 8, Module Identification Register */
#define CONVCTRL_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_ID*)0xF0025008u)

/** \brief 28, OCDS Control and Status Register */
#define CONVCTRL_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_OCS*)0xF0025028u)

/** \brief 2C, Kernel Reset Status Clear Register */
#define CONVCTRL_KRSTCLR /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_KRSTCLR*)0xF002502Cu)

/** \brief 30, Kernel Reset Register 1 */
#define CONVCTRL_KRST1 /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_KRST1*)0xF0025030u)

/** \brief 34, Kernel Reset Register 0 */
#define CONVCTRL_KRST0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_KRST0*)0xF0025034u)

/** \brief 3C, Access Enable Register 0 */
#define CONVCTRL_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_ACCEN0*)0xF002503Cu)

/** \brief 7C, Converter Control Block Control Register */
#define CONVCTRL_CCCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_CCCTRL*)0xF002507Cu)

/** \brief 80, Phase Synchronizer Configuration Register */
#define CONVCTRL_PHSCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_PHSCFG*)0xF0025080u)

/** \brief 84, Phase Synchronizer Safety Control Register */
#define CONVCTRL_PHSSFTY /*lint --e(923, 9078)*/ (*(volatile Ifx_CONVERTER_PHSSFTY*)0xF0025084u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXCONVERTER_REG_H */
