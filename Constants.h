#ifndef __MESSAGES_H
#define __MESSAGES_H

#include "PublicMessages.h"

#define NULL_FORMAT_SHORT_NAME "no_encoding"
#define GIF_FORMAT_SHORT_NAME "gif"
#define BSC_DESKBAR_VIEW "BSC Control"

enum appMessages {
	kAddonStarted = 2000,
	kSelectArea,
	kSelectWindow,
	kSelectionWindowClosed,
	kCaptureFinished,
	kEncodingFinished,
	kEncodingProgress,
	kFileNameChanged,
	kMsgGetControllerMessenger
};


#endif 
