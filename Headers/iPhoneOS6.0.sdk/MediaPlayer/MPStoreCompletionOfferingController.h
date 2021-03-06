/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MCProfileConnectionObserver.h"

@class NSObject, NSCache, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferingController : XXUnknownSuperclass <MCProfileConnectionObserver> {
@private
	NSCache* _offeringCache;
	NSMutableDictionary* _lookupItemsByStoreLookupID;
	NSMutableDictionary* _lookupItemsByTokenID;
	unsigned _nextTokenID;
	NSObject<OS_dispatch_queue>* _queue;
}
+(void)setWantsArtwork:(BOOL)artwork;
+(id)storeOfferingController;
-(id)init;
-(void)_defaultMediaLibraryDidChangeNotification:(id)_defaultMediaLibrary;
-(void)_dumpCache;
-(void)_getIsCMCDisabled:(BOOL*)disabled disabledReason:(id*)reason;
-(void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned)anId;
-(void)_onQueueClearCache;
-(id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)albumItemsQuery;
-(id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)albumItemsQuery requestAlreadyIssued:(BOOL*)issued responseBlock:(id)block;
-(BOOL)_onQueueIsCmcEnabled;
-(id)_onQueueLookupCompletedWithResponse:(id)response lookupItem:(id)item error:(id)error;
-(void)_onQueuePostLookupCompletedForLookupItem:(id)lookupItem offering:(id)offering error:(id)error;
-(void)_onQueueRemoveLookupItemsForStoreLookupID:(id)storeLookupID;
-(void)_onQueueRemoveLoookupItem:(id)item;
-(void)_onQueueSetCachedCompletionOffering:(id)offering forStoreLookupID:(id)storeLookupID;
-(id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)albumItemsQuery responseBlock:(id)block;
-(id)_sanitizedQuery:(id)query;
-(void)_storeAccountsDidChangeNotification:(id)_storeAccounts;
-(void)cancelCompletionOfferingLookup:(unsigned)lookup;
-(id)completionOfferingForAlbumItemsQuery:(id)albumItemsQuery;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;
-(unsigned)startCompletionOfferingLookupForAlbumItemsQuery:(id)albumItemsQuery responseBlock:(id)block;
@end

