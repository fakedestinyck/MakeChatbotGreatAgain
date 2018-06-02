#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "EZOnlineScorer.h"
#import "EZASRPayload.h"
#import "EZOnlineScorerRecorderPayload.h"
#import "EZReadAloudPayload.h"
#import "EZSemiOpenPayload.h"
#import "EZOnlineScorerRecorder.h"

FOUNDATION_EXPORT double EZOnlineScorerVersionNumber;
FOUNDATION_EXPORT const unsigned char EZOnlineScorerVersionString[];

