#ifndef _OPEN_BLT_H
#define _OPEN_BLT_H
/* XCP packet identifiers */
/** \brief Command response packet identifier. */
#define XCP_PID_RES                 (0xff)
/** \brief Error packet identifier. */
#define XCP_PID_ERR                 (0xfe)

/* XCP error codes */
/** \brief Cmd processor synchronization error code. */
#define XCP_ERR_CMD_SYNCH           (0x00)
/** \brief Command was not executed error code. */
#define XCP_ERR_CMD_BUSY            (0x10)
/** \brief Unknown or unsupported command error code. */
#define XCP_ERR_CMD_UNKNOWN         (0x20)
/** \brief Parameter out of range error code. */
#define XCP_ERR_OUT_OF_RANGE        (0x22)
/** \brief Protected error code. Seed/key required. */
#define XCP_ERR_ACCESS_LOCKED       (0x25)
/** \brief Cal page not valid error code. */
#define XCP_ERR_PAGE_NOT_VALID      (0x26)
/** \brief Sequence error code. */
#define XCP_ERR_SEQUENCE            (0x29)
/** \brief Generic error code. */
#define XCP_ERR_GENERIC             (0x31)

/* XCP command codes */
/** \brief CONNECT command code. */
#define XCP_CMD_CONNECT             (0xff)
/** \brief DISCONNECT command code. */
#define XCP_CMD_DISCONNECT          (0xfe)
/** \brief GET_STATUS command code. */
#define XCP_CMD_GET_STATUS          (0xfd)
/** \brief SYNCH command code. */
#define XCP_CMD_SYNCH               (0xfc)
/** \brief GET_ID command code. */
#define XCP_CMD_GET_ID              (0xfa)
/** \brief GET_SEED command code. */
#define XCP_CMD_GET_SEED            (0xf8)
/** \brief UNLOCK command code. */
#define XCP_CMD_UNLOCK              (0xf7)
/** \brief SET_MTA command code. */
#define XCP_CMD_SET_MTA             (0xf6)
/** \brief UPLOAD command code. */
#define XCP_CMD_UPLOAD              (0xf5)
/** \brief SHORT_UPLOAD command code. */
#define XCP_CMD_SHORT_UPLOAD        (0xf4)
/** \brief BUILD_CHECKSUM command code. */
#define XCP_CMD_BUILD_CHECKSUM      (0xf3)
/** \brief DOWNLOAD command code. */
#define XCP_CMD_DOWNLOAD            (0xf0)
/** \brief DOWNLOAD_MAX command code. */
#define XCP_CMD_DOWLOAD_MAX         (0xee)
/** \brief SET_CALPAGE command code. */
#define XCP_CMD_SET_CAL_PAGE        (0xeb)
/** \brief GET_CALPAGE command code. */
#define XCP_CMD_GET_CAL_PAGE        (0xea)
/** \brief PROGRAM_START command code. */
#define XCP_CMD_PROGRAM_START       (0xd2)
/** \brief PROGRAM_CLEAR command code. */
#define XCP_CMD_PROGRAM_CLEAR       (0xd1)
/** \brief PROGRAM command code. */
#define XCP_CMD_PROGRAM             (0xd0)
/** \brief PROGRAM_RESET command code. */
#define XCP_CMD_PROGRAM_RESET       (0xcf)
/** \brief PROGRAM_PREPARE command code. */
#define XCP_CMD_PROGRAM_PREPARE     (0xcc)
/** \brief PROGRAM_MAX command code. */
#define XCP_CMD_PROGRAM_MAX         (0xc9)

/* xcp supported resources */
/** \brief ProGraMming resource. */
#define XCP_RES_PGM            (0x10)
/** \brief data STIMulation resource. */
#define XCP_RES_STIM           (0x08)
/** \brief Data AcQuisition resource. */
#define XCP_RES_DAQ            (0x04)
/** \brief CALibration and PAGing resource. */
#define XCP_RES_CALPAG         (0x01)
/* xcp checksum types */
/** \brief Add byte into byte checksum. */
#define XCP_CS_ADD11           (0x01)
/** \brief Add byte into word checksum. */
#define XCP_CS_ADD12           (0x02)
/** \brief Add byte into dword checksum. */
#define XCP_CS_ADD14           (0x03)
/** \brief Add word into word checksum. */
#define XCP_CS_ADD22           (0x04)
/** \brief Add word into dword checksum. */
#define XCP_CS_ADD24           (0x05)
/** \brief Add dword into dword checksum. */
#define XCP_CS_ADD44           (0x06)
/** \brief Use 16-bit CRC algorithm. */
#define XCP_CS_CRC16           (0x07)
/** \brief Use 16-bit CRC CITT algorithm. */
#define XCP_CS_CRC16CITT       (0x08)
/** \brief Use 32-bit CRC algorithm. */
#define XCP_CS_CRC32           (0x09)
/** \brief Use user defined algorithm. */
#define XCP_CS_USER            (0xff)
#endif