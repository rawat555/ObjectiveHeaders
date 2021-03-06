/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference, NSMutableDictionary, NSMutableSet, NSString, NSError, AVPropertyStorage, NSObject, NSArray, AVPlayerItem, AVPixelBufferAttributeMediator, AVAudioSessionMediaPlayerOnly;
@protocol OS_dispatch_queue;

@interface AVPlayerInternal : XXUnknownSuperclass {
	AVWeakReference* weakReference;
	OpaqueFigPlayer* figPlayer;
	OpaqueCMClock* figMasterClock;
	AVPropertyStorage* propertyStorage;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSMutableDictionary* pendingFigPlayerProperties;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	OpaqueFigPlaybackItem* figPlaybackItemToIdentifyNextCurrentItem;
	NSMutableSet* items;
	NSObject<OS_dispatch_queue>* layersQ;
	NSMutableSet* caLayers;
	NSString* externalVideoGravity;
	int status;
	NSError* error;
	NSObject<OS_dispatch_queue>* stateDispatchQueue;
	NSArray* displaysUsedForPlayback;
	BOOL needsToCreateFigPlayer;
	BOOL logPerformanceData;
	BOOL reevaluateBackgroundPlayback;
	BOOL hostApplicationInForeground;
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
	BOOL iapdExtendedModeIsActive;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	OpaqueFigSimpleMutex* prerollIDMutex;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	id prerollCompletionHandler;
}
@end

