//$file${include::qs_pkg.h} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
//
// Model: qpc.qm
// File:  ${include::qs_pkg.h}
//
// This code has been generated by QM 5.3.0 <www.state-machine.com/qm>.
// DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
//
// This code is covered by the following QP license:
// License #    : LicenseRef-QL-dual
// Issued to    : Any user of the QP/C real-time embedded framework
// Framework(s) : qpc
// Support ends : 2024-12-31
// License scope:
//
// Copyright (C) 2005 Quantum Leaps, LLC <state-machine.com>.
//
//                    Q u a n t u m  L e a P s
//                    ------------------------
//                    Modern Embedded Software
//
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-QL-commercial
//
// This software is dual-licensed under the terms of the open source GNU
// General Public License version 3 (or any later version), or alternatively,
// under the terms of one of the closed source Quantum Leaps commercial
// licenses.
//
// The terms of the open source GNU General Public License version 3
// can be found at: <www.gnu.org/licenses/gpl-3.0>
//
// The terms of the closed source Quantum Leaps commercial licenses
// can be found at: <www.state-machine.com/licensing>
//
// Redistributions in source code must retain this top-level comment block.
// Plagiarizing this software to sidestep the license obligations is illegal.
//
// Contact information:
// <www.state-machine.com/licensing>
// <info@state-machine.com>
//
//$endhead${include::qs_pkg.h} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
#ifndef QS_PKG_H_
#define QS_PKG_H_

//============================================================================
//! @cond INTERNAL

//! QS received record types (RX channel)
enum QSpyRxRecords {
    QS_RX_INFO,           //!< query Target info (ver, config, tstamp)
    QS_RX_COMMAND,        //!< execute a user-defined command in the Target
    QS_RX_RESET,          //!< reset the Target
    QS_RX_TICK,           //!< call system clock tick in the Target
    QS_RX_PEEK,           //!< peek Target memory
    QS_RX_POKE,           //!< poke Target memory
    QS_RX_FILL,           //!< fill Target memory
    QS_RX_TEST_SETUP,     //!< test setup
    QS_RX_TEST_TEARDOWN,  //!< test teardown
    QS_RX_TEST_PROBE,     //!< set a Test-Probe in the Target
    QS_RX_GLB_FILTER,     //!< set global filters in the Target
    QS_RX_LOC_FILTER,     //!< set local  filters in the Target
    QS_RX_AO_FILTER,      //!< set local AO filter in the Target
    QS_RX_CURR_OBJ,       //!< set the "current-object" in the Target
    QS_RX_TEST_CONTINUE,  //!< continue a test after QS_TEST_PAUSE()
    QS_RX_QUERY_CURR,     //!< query the "current object" in the Target
    QS_RX_EVENT           //!< inject an event to the Target
};

//----------------------------------------------------------------------------
#define QS_FRAME       0x7EU
#define QS_ESC         0x7DU
#define QS_ESC_XOR     0x20U
#define QS_GOOD_CHKSUM 0xFFU

//----------------------------------------------------------------------------
#define QS_BEGIN_PRE_(rec_, qs_id_) \
    if (QS_GLB_CHECK_(rec_) && QS_LOC_CHECK_(qs_id_)) { \
        QS_beginRec_((uint_fast8_t)(rec_));
#define QS_END_PRE_()           QS_endRec_(); }

#define QS_U8_PRE_(data_)       (QS_u8_raw_((uint8_t)(data_)))
#define QS_2U8_PRE_(data1_, data2_) \
    (QS_2u8_raw_((uint8_t)(data1_), (uint8_t)(data2_)))
#define QS_U16_PRE_(data_)      (QS_u16_raw_((uint16_t)(data_)))
#define QS_U32_PRE_(data_)      (QS_u32_raw_((uint32_t)(data_)))
#define QS_STR_PRE_(msg_)       (QS_str_raw_((msg_)))
#define QS_OBJ_PRE_(obj_)       (QS_obj_raw_(obj_))

#if (!defined Q_SIGNAL_SIZE || (Q_SIGNAL_SIZE == 1U))
    #define QS_SIG_PRE_(sig_)   (QS_u8_raw_((uint8_t)sig_))
#elif (Q_SIGNAL_SIZE == 2U)
    #define QS_SIG_PRE_(sig_)   (QS_u16_raw_((uint16_t)sig_))
#elif (Q_SIGNAL_SIZE == 4U)
    #define QS_SIG_PRE_(sig_)   (QS_u32_raw_((uint32_t)sig_))
#endif

#if (!defined QS_FUN_PTR_SIZE || (QS_FUN_PTR_SIZE == 2U))
    #define QS_FUN_PRE_(fun_)   (QS_u16_raw_((uint16_t)(fun_)))
#elif (QS_FUN_PTR_SIZE == 4U)
    #define QS_FUN_PRE_(fun_)   (QS_u32_raw_((uint32_t)(fun_)))
#elif (QS_FUN_PTR_SIZE == 8U)
    #define QS_FUN_PRE_(fun_)   (QS_u64_raw_((uint64_t)(fun_)))
#else
    #define QS_FUN_PRE_(fun_)   (QS_u32_raw_((uint32_t)(fun_)))
#endif

//----------------------------------------------------------------------------
#if (!defined QF_EQUEUE_CTR_SIZE || (QF_EQUEUE_CTR_SIZE == 1U))
    #define QS_EQC_PRE_(ctr_)   QS_u8_raw_((uint8_t)(ctr_))
#elif (QF_EQUEUE_CTR_SIZE == 2U)
    #define QS_EQC_PRE_(ctr_)   QS_u16_raw_((uint16_t)(ctr_))
#elif (QF_EQUEUE_CTR_SIZE == 4U)
    #define QS_EQC_PRE_(ctr_)   QS_u32_raw_((uint32_t)(ctr_))
#endif

#if (!defined QF_EVENT_SIZ_SIZE || (QF_EVENT_SIZ_SIZE == 1U))
    #define QS_EVS_PRE_(size_)  QS_u8_raw_((uint8_t)(size_))
#elif (QF_EVENT_SIZ_SIZE == 2U)
    #define QS_EVS_PRE_(size_)  QS_u16_raw_((uint16_t)(size_))
#elif (QF_EVENT_SIZ_SIZE == 4U)
    #define QS_EVS_PRE_(size_)  QS_u32_raw_((uint32_t)(size_))
#endif

#if (!defined QF_MPOOL_SIZ_SIZE || (QF_MPOOL_SIZ_SIZE == 1U))
    #define QS_MPS_PRE_(size_)  QS_u8_raw_((uint8_t)(size_))
#elif (QF_MPOOL_SIZ_SIZE == 2U)
    #define QS_MPS_PRE_(size_)  QS_u16_raw_((uint16_t)(size_))
#elif (QF_MPOOL_SIZ_SIZE == 4U)
    #define QS_MPS_PRE_(size_)  QS_u32_raw_((uint32_t)(size_))
#endif

#if (!defined QF_MPOOL_CTR_SIZE || (QF_MPOOL_CTR_SIZE == 1U))
    #define QS_MPC_PRE_(ctr_)   QS_u8_raw_((uint8_t)(ctr_))
#elif (QF_MPOOL_CTR_SIZE == 2U)
    #define QS_MPC_PRE_(ctr_)   QS_u16_raw_((uint16_t)(ctr_))
#elif (QF_MPOOL_CTR_SIZE == 4U)
    #define QS_MPC_PRE_(ctr_)   QS_u32_raw_((uint16_t)(ctr_))
#endif

#if (!defined QF_TIMEEVT_CTR_SIZE || (QF_TIMEEVT_CTR_SIZE == 1U))
    #define QS_TEC_PRE_(ctr_)   QS_u8_raw_((uint8_t)(ctr_))
#elif (QF_TIMEEVT_CTR_SIZE == 2U)
    #define QS_TEC_PRE_(ctr_)   QS_u16_raw_((uint16_t)(ctr_))
#elif (QF_TIMEEVT_CTR_SIZE == 4U)
    #define QS_TEC_PRE_(ctr_)   QS_u32_raw_((uint32_t)(ctr_))
#endif

//----------------------------------------------------------------------------
#define QS_INSERT_BYTE_(b_) \
    buf[head] = (b_);       \
    ++head;                 \
    if (head == end) {      \
        head = 0U;          \
    }

#define QS_INSERT_ESC_BYTE_(b_)                      \
    chksum = (uint8_t)(chksum + (b_));               \
    if (((b_) != QS_FRAME) && ((b_) != QS_ESC)) {    \
        QS_INSERT_BYTE_(b_)                          \
    }                                                \
    else {                                           \
        QS_INSERT_BYTE_(QS_ESC)                      \
        QS_INSERT_BYTE_((uint8_t)((b_) ^ QS_ESC_XOR))\
        ++QS_priv_.used;                             \
    }

//----------------------------------------------------------------------------
#if (defined Q_UTEST) && (Q_UTEST != 0)
void QS_processTestEvts_(void);
#endif // Q_UTEST != 0

//! @endcond
//============================================================================

#endif  // QS_PKG_H_
