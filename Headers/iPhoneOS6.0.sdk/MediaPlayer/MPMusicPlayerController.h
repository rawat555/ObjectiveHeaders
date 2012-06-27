/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPlayback.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPMusicPlayerControllerInternal;

@protocol MPMusicPlayerController
@optional
-(id)allowsRemoteUIAccess;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
-(id)currentChapterIndex;
-(id)currentPlaybackRate;
-(id)currentPlaybackTime;
-(void)endSeeking;
-(id)indexOfNowPlayingItem;
-(id)isGeniusAvailable;
-(id)isGeniusAvailableForSeedItems:(id)seedItems;
-(id)isNowPlayingItemFromGeniusMix;
-(id)nowPlayingItem;
-(id)nowPlayingItemAtIndex:(id)index;
-(id)numberOfItems;
-(void)pause;
-(void)pauseWithFadeoutDuration:(id)fadeoutDuration;
-(void)play;
-(void)playItem:(id)item;
-(id)playbackSpeed;
-(id)playbackState;
-(void)prepareQueueForPlayback;
-(void)prepareToPlay;
-(id)queueAsQuery;
-(void)registerForServerDiedNotifications;
-(id)repeatMode;
-(id)serverIsAlive;
-(void)setAllowsRemoteUIAccess:(id)access;
-(void)setCurrentChapterIndex:(id)index;
-(void)setCurrentPlaybackRate:(id)rate;
-(void)setCurrentPlaybackTime:(id)time;
-(void)setNowPlayingItem:(id)item;
-(void)setPlaybackSpeed:(id)speed;
-(void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;
-(void)setQueueWithItemCollection:(id)itemCollection;
-(void)setQueueWithQuery:(id)query;
-(void)setQueueWithQuery:(id)query firstItem:(id)item;
-(id)setQueueWithSeedItems:(id)seedItems;
-(void)setRepeatMode:(id)mode;
-(void)setShuffleMode:(id)mode;
-(void)setUseApplicationSpecificQueue:(id)queue;
-(void)shuffle;
-(id)shuffleMode;
-(void)skipToBeginning;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToNextItem;
-(void)skipToPreviousChapter;
-(void)skipToPreviousItem;
-(void)stop;
-(id)unshuffledIndexOfNowPlayingItem;
@end

@interface MPMusicPlayerController : XXUnknownSuperclass <MPMediaPlayback> {
@private
	MPMusicPlayerControllerInternal* _internal;
}
@property(assign, nonatomic) float currentPlaybackRate;
@property(assign, nonatomic) double currentPlaybackTime;
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;
+(id)applicationMusicPlayer;
+(id)iPodMusicPlayer;
+(void)initialize;
+(id)runLoopForNotifications;
+(void)setRunLoopForNotifications:(id)notifications;
-(id)init;
-(void)_clientCheckInUsingExistencePort:(BOOL)usingExistencePort;
-(void)_isQueuePreparedDidChange:(BOOL)_isQueuePrepared;
-(void)_itemPlaybackDidEnd:(unsigned long long)_itemPlayback;
-(void)_musicPlayerDidLaunch;
-(BOOL)_musicPlayerExistencePortIsValid;
-(void)_nowPlayingItemDidChange:(unsigned long long)_nowPlayingItem;
-(void)_playbackStateDidChange:(int)_playbackState;
-(void)_registerForLaunchNotifications;
-(void)_repeatModeDidChange:(int)_repeatMode;
-(void)_runMigServerOnPort:(unsigned)port;
-(void)_serverDied:(id)died;
-(void)_setUseApplicationSpecificQueue:(BOOL)queue;
-(void)_shuffleModeDidChange:(int)_shuffleMode;
-(void)_stopMigServer;
-(void)_systemVolumeDidChange:(id)_systemVolume;
-(void)_unregisterForLaunchNotifications;
-(BOOL)allowsRemoteUIAccess;
-(void)beginGeneratingPlaybackNotifications;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
-(unsigned)currentChapterIndex;
// declared property getter: -(float)currentPlaybackRate;
// declared property getter: -(double)currentPlaybackTime;
-(void)dealloc;
-(void)endGeneratingPlaybackNotifications;
-(void)endSeeking;
-(void)forwardInvocation:(id)invocation;
-(unsigned)indexOfNowPlayingItem;
-(BOOL)isGeniusAvailable;
-(BOOL)isGeniusAvailableForSeedItems:(id)seedItems;
-(BOOL)isNowPlayingItemFromGeniusMix;
// declared property getter: -(BOOL)isPreparedToPlay;
-(id)methodSignatureForSelector:(SEL)selector;
-(id)nowPlayingItem;
-(id)nowPlayingItemAtIndex:(unsigned)index;
-(unsigned)numberOfItems;
-(void)pause;
-(void)pauseWithFadeoutDuration:(double)fadeoutDuration;
-(void)play;
-(int)playbackSpeed;
-(int)playbackState;
-(void)prepareToPlay;
-(int)repeatMode;
-(BOOL)serverIsAlive;
-(void)setAllowsRemoteUIAccess:(BOOL)access;
-(void)setCurrentChapterIndex:(unsigned)index;
// declared property setter: -(void)setCurrentPlaybackRate:(float)rate;
// declared property setter: -(void)setCurrentPlaybackTime:(double)time;
-(void)setPlaybackSpeed:(int)speed;
-(void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;
-(void)setQueueWithItemCollection:(id)itemCollection;
-(void)setQueueWithQuery:(id)query;
-(void)setQueueWithQuery:(id)query firstItem:(id)item;
-(BOOL)setQueueWithSeedItems:(id)seedItems;
-(void)setRepeatMode:(int)mode;
-(void)setShuffleMode:(int)mode;
-(void)setUseCachedPlaybackState:(BOOL)state;
-(void)setVolume:(float)volume;
-(int)shuffleMode;
-(void)stop;
-(unsigned)unshuffledIndexOfNowPlayingItem;
-(float)volume;
@end
