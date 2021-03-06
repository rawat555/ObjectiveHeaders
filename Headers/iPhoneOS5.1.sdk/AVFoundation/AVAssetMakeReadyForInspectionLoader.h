/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspectorLoader.h"

@class AVAssetCache, NSURL, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
	AVAssetInspector* _assetInspector;
	AVAssetCache* _assetCache;
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
	NSURL* _downloadDestinationURL;
@private
	OpaqueFigFormatReader* _formatReader;
	OpaqueFigSimpleMutex* _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	int _status;
	long _basicInspectionFailureCode;
	NSURL* _URL;
}
@property(readonly, assign, nonatomic) NSURL* URL;	// @synthesize=_URL
@property(readonly, assign, nonatomic) AVAssetCache* assetCache;	// @synthesize=_assetCache
@property(readonly, assign, nonatomic) NSURL* downloadDestinationURL;	// @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
-(id)initWithURL:(id)url;
// declared property getter: -(id)URL;
-(OpaqueFigFormatReader*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)figErrorCode;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(OpaqueFigFormatReader*)_formatReader;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(BOOL)_inspectionRequiresAFormatReader;
-(BOOL)_isStreaming;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;
-(id)_loadValuesWhileMutexLockedForKeys:(id)keys;
-(OpaqueFigSimpleMutex*)_loadingMutex;
-(OpaqueFigPlaybackItem*)_playbackItem;
-(BOOL)_providesAccurateTiming;
-(void)_serverHasDied;
-(void)_setStatus:(int)status figErrorCode:(long)code;
-(int)_status;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id*)error;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;
-(BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;
// declared property getter: -(id)assetCache;
-(id)assetInspector;
-(void)cancelLoading;
-(id)chapterGroupInfo;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(id)downloadDestinationURL;
-(XXStruct_pwHToB)duration;
-(void)finalize;
-(BOOL)hasProtectedContent;
-(BOOL)isComposable;
-(BOOL)isExportable;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;
-(id)lyrics;
// declared property getter: -(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
// declared property getter: -(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(int)statusOfValueForKey:(id)key error:(id*)error;
@end

