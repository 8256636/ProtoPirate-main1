#pragma once

#if defined(ENABLE_EMULATE_FEATURE) && !defined(PROTOPIRATE_PROTOCOL_RX_ONLY)
#define PROTOPIRATE_WITH_ENCODER 1
#else
#define PROTOPIRATE_WITH_ENCODER 0
#endif

#ifndef PROTOPIRATE_PROTOCOL_TX_ONLY
#define PROTOPIRATE_WITH_DECODER 1
#else
#define PROTOPIRATE_WITH_DECODER 0
#endif

#define REMOVE_LOGS

#ifdef REMOVE_LOGS
#undef FURI_LOG_E
#undef FURI_LOG_W
#undef FURI_LOG_I
#undef FURI_LOG_D
#undef FURI_LOG_T

#define FURI_LOG_E(tag, format, ...) ((void)0)
#define FURI_LOG_W(tag, format, ...) ((void)0)
#define FURI_LOG_I(tag, format, ...) ((void)0)
#define FURI_LOG_D(tag, format, ...) ((void)0)
#define FURI_LOG_T(tag, format, ...) ((void)0)
#endif