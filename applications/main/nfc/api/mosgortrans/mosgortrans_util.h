#pragma once

#include <furi/core/string.h>
#include <nfc/protocols/mf_classic/mf_classic.h>
#include <furi_hal_rtc.h>
#include <nfc/helpers/nfc_util.h>
#include <bit_lib/bit_lib.h>
#include <datetime.h>

#define TAG2 "Mosgortrans"

bool mosgortrans_parse_transport_block(const MfClassicBlock* block, FuriString* result);