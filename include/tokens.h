/* Copyright 2012 <MulticorewareInc> */

#ifndef INCLUDE_TOKENS_H_
#define INCLUDE_TOKENS_H_

// begin from 258 to avoid conflict with ASCII characters
enum TokenType { TOKEN_CREGISTER= 258,
                 TOKEN_DREGISTER,
                 TOKEN_SREGISTER,
                 TOKEN_QREGISTER,
                 TOKEN_INTEGER_CONSTANT,
                 TOKEN_SINGLE_CONSTANT,
                 TOKEN_DOUBLE_CONSTANT,
                 TOKEN_COMMENT,
                 TOKEN_LOCAL_IDENTIFIER,
                 TOKEN_GLOBAL_IDENTIFIER,
                 TOKEN_LABEL,
                 TOKEN_STRING,
                 TOKEN_PROPERTY,
                 TOKEN_WAVESIZE,
                 /* common keywords */
                 WORKGROUPID,
                 VERSION,
                 GLOBAL,
                 _SAMP,
                 _RWIMG,
                 _ROIMG,
                 ALIGN,
                 _FILE,
                 ARG,
                 KERNARG,
                 FUNCTION,
                 _FBAR,
                 SIGNATURE,
                 BLOCK,
                 ENDBLOCK,
                 BLOCKNUMERIC,
                 BLOCKSTRING,
                 KERNEL,
                 PRAGMA,
                 LABELTARGETS,
                 EXTENSION,
                 EXTERN,
                 STATIC,
                 CONST,
                 PRIVATE,
                 SPILL,
                 GROUP,
                 READONLY,
                 LOC,
                 /* addressSpaceIdentifier keywords */
                 _READONLY,
                 _KERNARG,
                 _GLOBAL,
                 _PRIVATE,
                 _ARG,
                 _GROUP,
                 _SPILL,
                 _PARTIAL, /* Segment specifier for sync, barrier operations*/
                 /* vector*/
                 _V2,
                 _V4,
                 /* init */
                 FORMAT,
                 ORDER,
                 COORD,
                 FILTER,
                 BOUNDARYU,
                 BOUNDARYV,
                 BOUNDARYW,
                 /* control */
                 ITEMS_PER_WORKGROUP,
                 WORKGROUPS_PER_CU,
                 MEMOPT_ON,
                 MEMOPT_OFF,
                 /* opcode */
                 FBAR_INITSIZEKNOWN,
                 FBAR_INITSIZEDYNAMIC,
                 FBAR_INITSIZEWG,
                 FBAR_WAIT,
                 FBAR_ARRIVE,
                 FBAR_SKIP,
                 FBAR_RELEASE,
                 COUNTUP,
                 LANEID,
                 DYNWAVEID,
                 MAXDYNWAVEID,
                 DISPATCHID,
                 CU,
                 WORKDIM,
                 WORKITEMID_FLAT,
                 WORKITEMABSID_FLAT,
                 DEBUGTRAP,
                 ABS,
                 NEG,
                 NOT,
                 POPCOUNT,
                 FIRSTBIT,
                 LASTBIT,
                 BITREV,
                 MOVS_LO,
                 MOVS_HI,
                 FBAR_INITSIZE,
                 FBAR_INIT,
                 FBAR_RELEASECF,
                 COUNT,
		 NULLPTR,
                 MASK,
                 SQRT,
                 FRACT,
                 FCOS,
                 FSIN,
                 FLOG2,
                 FEXP2,
                 FSQRT,
                 FRSQRT,
                 FRCP,
                 UNPACK3,
                 UNPACK2,
                 UNPACK1,
                 UNPACK0,
                 ALLOCA,
                 WORKITEMID,
                 WORKITEMABSID,
                 WORKGROUPSIZE,
                 CURRENTWORKGROUPSIZE,
                 NDRANGESIZE,
                 NDRANGEGROUPS,
                 ADD,
                 CARRY,
                 BORROW,
                 DIV,
                 REM,
                 SUB,
                 SHL,
                 SHR,
                 AND,
                 XOR,
                 OR,
                 UNPACKLO,
                 UNPACKHI,
                 MOVD_LO,
                 MOVD_HI,
                 COPYSIGN,
                 CLASS,
                 SEND,
                 RECEIVE,
                 MAX,
                 MIN,
                 MAD,
                 EXTRACT,
                 INSERT,
                 SHUFFLE,
                 CMOV,
                 FMA,
                 BITALIGN,
                 BYTEALIGN,
                 LERP,
                 SAD,
                 SAD2,
                 SAD4,
                 SAD4HI,
                 BITSELECT,
                 _AND_,
                 _OR_,
                 _XOR_,
                 _EXCH_,
                 _ADD_,
                 _SUB_,
                 _INC_,
                 _DEC_,
                 _MAX_,
                 _MIN_,
                 /* comparison*/
                 _EQ,
                 _NE,
                 _LT,
                 _LE,
                 _GT,
                 _GE,
                 _EQU,
                 _NEU,
                 _LTU,
                 _LEU,
                 _GTU,
                 _GEU,
                 _NUM,
                 _NAN,
                 _SEQ,
                 _SNE,
                 _SLT,
                 _SLE,
                 _SGT,
                 _SGE,
                 _SNUM,
                 _SNAN,
                 _SEQU,
                 _SNEU,
                 _SLTU,
                 _SLEU,
                 _SGTU,
                 _SGEU,
                 /* rounding */
                 _UPI,
                 _DOWNI,
                 _ZEROI,
                 _NEARI,
                 _UP,
                 _DOWN,
                 _ZERO,
                 _NEAR,
                 /* packing */
                 _PP,
                 _PS,
                 _SP,
                 _SS,
                 __S,
                 __P,
                 _PP_SAT,
                 _PS_SAT,
                 _SP_SAT,
                 _SS_SAT,
                 _S_SAT,
                 _P_SAT,
                 /* target */
                 _SMALL,
                 _LARGE,
                 _FULL,
                 _MOBILE,
                 _SFTZ,
                 _NOSFTZ,
                 WIDTH,
                 HEIGHT,
                 DEPTH,
                 /* dataTypeId */
                 _U32,
                 _S32,
                 _S64,
                 _U64,
                 _B1,
                 _B32,
                 _F64,
                 _F32,
                 _B64,
                 _B8,
                 _B16,
                 _S8,
                 _S16,
                 _U8,
                 _U16,
                 _F16,
                 _B128,
                 _U8X4,
                 _S8X4,
                 _U16X2,
                 _S16X2,
                 _F16X2,
                 _F32X2,
                 _U32X2,
                 _S32X2,
                 _U8X8,
                 _S8X8,
                 _U16X4,
                 _S16X4,
                 _F16X4,
                 _U8X16,
                 _S8X16,
                 _U16X8,
                 _S16X8,
                 _F16X8,
                 _F32X4,
                 _S32X4,
                 _U32X4,
                 _F64X2,
                 _S64X2,
                 _U64X2,
                 _FTZ,
                 NOP,
                 CLOCK,
                 SYSCALL,
                 /* Atom Modifiers */
                 _REGION,
                 _CAS,
                 ATOMIC_CAS,
                 ATOMIC,
                 ATOMICNORET,
                 ATOMICNORET_CAS,
                 ATOMIC_IMAGE,
                 ATOMICNORET_IMAGE,
                 CVT,
                 _DEP,
                 _EQUIV,
                 _ACQ,
                 _PART_ACQ,
                 _REL,
                 _PART_REL,
                 _AR,
                 _PART_AR,
                 LD,
                 SYNC,
                 BARRIER,
                 SEGMENTP,
                 FTOS,
                 STOF,
                 MOV,
                 LAD,
                 LDC,
                 LDA,
                 RET,
                 PACKEDCMP,
                 CMP,
                 ST,
                 /* mul */
                 MUL,
                 MUL_HI,
                 MUL24_HI,
                 MUL24,
                 MAD24,
                 MAD24_HI,
                 F2U4,
                 /* geometry ID */
                 _1D,
                 _2D,
                 _3D,
                 _1DB,
                 _1DA,
                 _2DA,
                 RD_IMAGE,
                 LD_IMAGE,
                 ST_IMAGE,
                 /* queryOp */
                 QUERY_ORDER,
                 QUERY_DATA,
                 QUERY_ARRAY,
                 QUERY_WIDTH,
                 QUERY_DEPTH,
                 QUERY_HEIGHT,
                 QUERY_NORMALIZED,
                 QUERY_FILTERING,
                 /* optional width */
                 _WIDTH,
                 ALL,
                 /* branchOp */
                 CBR,
                 BRN,
                 __FBAR,
                 CALL
               };
enum TerminalType { UNKNOWN = 0,
                    COMMON_KEYWORD = 1,
                    REGISTER,
                    DATA_TYPE_ID,
                    QUERY_OP,
                    INT_ROUNDING,
                    FLOAT_ROUNDING,
                    PACKING,
                    INSTRUCTION1_OPCODE,
                    INSTRUCTION1_OPCODE_NODT,
                    INSTRUCTION2_OPCODE,
                    INSTRUCTION2_OPCODE_NODT,
                    INSTRUCTION2_OPCODE_FTZ,
                    INSTRUCTION3_OPCODE,
                    INSTRUCTION3_OPCODE_FTZ,
                    INSTRUCTION4_OPCODE,
                    INSTRUCTION5_OPCODE,
                    TARGET,
                    INITIALIZABLE_ADDRESS,
                    UNINITIALIZABLE_ADDRESS,
                    CONSTANT,
                    PUNCTUATION,
                    CODE_COMMENTS,
                    IDENTIFIER,
                    LABEL,
                    STRING,
                    PROPERTY,
                    WAVESIZE,
                    ADDRESS_SPACE_IDENTIFIER,
                    MEMORY_SEMANTIC,
                    VECTOR,
                    CONTROL_KEYWORD,
                    GEOMETRY_ID,
                    IMAGE_OP,
                    MUL_OP,
                    ATOM_MODIFIER,
                    COMPARISON,
                    ATOMIC_OP,
                    BRANCH_OP
                  };


#endif  // INCLUDE_TOKENS_H_
