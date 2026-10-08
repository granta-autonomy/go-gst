#ifndef __GST_WEBRTC_GO_H__
#define __GST_WEBRTC_GO_H__

#define GST_USE_UNSTABLE_API // webrtc is unstable

#include <gst/webrtc/webrtc.h>

#if !GST_CHECK_VERSION(1, 22, 0)
// Preserve the enum values added in 1.22 when building against older headers.
#define GST_WEBRTC_ERROR_INVALID_MODIFICATION 9
#define GST_WEBRTC_ERROR_TYPE_ERROR 10
#endif

#endif
