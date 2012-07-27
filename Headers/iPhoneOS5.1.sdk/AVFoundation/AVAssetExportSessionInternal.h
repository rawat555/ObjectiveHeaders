/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVAudioMix, NSError, AVWeakReference, NSArray, NSURL, AVURLAsset, AVVideoComposition, NSString, AVAssetTrack;

@interface AVAssetExportSessionInternal : XXUnknownSuperclass {
	AVWeakReference* weakReference;
	dispatch_queue_s* readWriteQueue;
	OpaqueFigRemaker* remaker;
	int status;
	NSError* error;
	float progress;
	AVURLAsset* asset;
	AVAssetTrack* firstVideoTrack;
	NSString* preset;
	NSString* preset16x9;
	NSURL* outputURL;
	NSString* outputFileType;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	NSArray* metadata;
	XXStruct_yD8eWC timeRange;
	long long maxFileSize;
	id handler;
	BOOL optimizeForNetworkUse;
	BOOL outputFileCreatedByRemaker;
	dispatch_queue_s* remakerNotificationSerializationQueue;
}
@end
