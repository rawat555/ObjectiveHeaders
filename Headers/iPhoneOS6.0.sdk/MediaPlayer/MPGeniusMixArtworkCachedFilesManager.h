/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

@interface MPGeniusMixArtworkCachedFilesManager : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _cleanupQueue;
}
+(id)sharedInstance;
-(id)init;
-(void)_mediaLibraryDisplayValuesWillChangeNotification:(id)_mediaLibraryDisplayValues;
-(void)cleanupIfNecessaryWithCompletionHandler:(id)completionHandler;
-(void)dealloc;
@end

