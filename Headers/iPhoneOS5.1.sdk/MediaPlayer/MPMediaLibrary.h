/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaLibrary.h"
#import "NSCoding.h"
#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL, NSDate;

@interface MPMediaLibrary : XXUnknownSuperclass <NSCoding> {
@private
	MPMediaLibraryInternal _internal;
}
@property(assign, nonatomic) MPMediaLibraryInternal _internal;	// @synthesize
@property(readonly, assign, nonatomic) NSDate* lastModifiedDate;
@property(assign, nonatomic) int removalReason;
+(id)_libraryDataProviders;
+(id)_libraryForDataProvider:(id)dataProvider;
+(id)_mediaLibraries;
+(void)addLibraryDataProvider:(id)provider;
+(void)beginDiscoveringMediaLibraries;
+(id)defaultMediaLibrary;
+(id)deviceMediaLibrary;
+(void)endDiscoveringMediaLibraries;
+(BOOL)isLibraryServerDisabled;
+(id)libraryDataProviders;
+(id)mediaLibraries;
+(id)mediaLibraryWithUniqueIdentifier:(id)uniqueIdentifier;
+(void)reloadDisplayValuesForLibraryDataProvider:(id)libraryDataProvider;
+(void)reloadDynamicPropertiesForLibraryDataProvider:(id)libraryDataProvider;
+(void)reloadLibraryDataProvider:(id)provider;
+(void)removeLibraryDataProvider:(id)provider removalReason:(int)reason;
+(void)setDefaultMediaLibrary:(id)library;
+(void)setLibraryServerDisabled:(BOOL)disabled;
+(void)setRunLoopForNotifications:(id)notifications;
+(void)syncGenerationDidChangeForLibraryDataProvider:(id)syncGeneration;
-(id)init;
-(id)initWithCoder:(id)coder;
-(BOOL)_checkHasContent:(BOOL*)content determined:(BOOL*)determined mediaType:(int)type queryIsEmptyBlock:(id)block;
-(BOOL)_checkHasContent:(BOOL*)content determined:(BOOL*)determined queryIsEmptyBlock:(id)block;
-(void)_clearCachedContentData;
-(void)_clearCachedEntities;
-(void)_clearPendingDisconnection;
-(id)_collectionsForQueryCriteria:(id)queryCriteria;
-(void)_connectionProgressDisplayLinkCallback:(id)callback;
-(void)_didReceiveMemoryWarning:(id)warning;
-(void)_displayValuesDidChangeNotification:(id)_displayValues;
-(id)_initWithLibraryDataProvider:(id)libraryDataProvider;
// declared property getter: -(MPMediaLibraryInternal)_internal;
-(id)_itemsForQueryCriteria:(id)queryCriteria immediate:(BOOL)immediate;
-(unsigned long long)_persistentIDForAssetURL:(id)assetURL;
-(void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)notificationInfo;
-(void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)notificationInfo;
-(void)_removeConnectionAssertion:(id)assertion;
-(void)_stopConnectionProgressDisplayLink;
-(id)addPlaylistWithName:(id)name;
-(id)addPlaylistWithName:(id)name activeGeniusPlaylist:(BOOL)playlist;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block;
-(void)connectWithCompletionHandler:(id)completionHandler;
-(id)connectionAssertionWithIdentifier:(id)identifier;
-(float)connectionProgress;
-(void)dealloc;
-(id)description;
-(void)disconnect;
-(void)downloadItem:(id)item completionHandler:(id)handler;
-(void)encodeWithCoder:(id)coder;
-(void)endGeneratingLibraryChangeNotifications;
-(BOOL)hasAlbums;
-(BOOL)hasArtists;
-(BOOL)hasAudibleAudioBooks;
-(BOOL)hasAudiobooks;
-(BOOL)hasCompilations;
-(BOOL)hasComposers;
-(BOOL)hasGeniusMixes;
-(BOOL)hasGenres;
-(BOOL)hasITunesUContent;
-(BOOL)hasMedia;
-(BOOL)hasMediaOfType:(int)type;
-(BOOL)hasMovieRentals;
-(BOOL)hasMovies;
-(BOOL)hasMusicVideos;
-(BOOL)hasPlaylists;
-(BOOL)hasPodcasts;
-(BOOL)hasSongs;
-(BOOL)hasTVShows;
-(BOOL)hasVideoPodcasts;
-(BOOL)hasVideos;
-(unsigned)hash;
-(BOOL)isArtworkIdenticalForItem:(id)item otherItem:(id)item2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;
-(BOOL)isEqual:(id)equal;
-(BOOL)isFilteringDisabled;
-(BOOL)isGeniusEnabled;
-(BOOL)isValidAssetURL:(id)url;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;
-(id)itemWithPersistentID:(unsigned long long)persistentID;
-(id)itemWithPersistentID:(unsigned long long)persistentID verifyExistence:(BOOL)existence;
// declared property getter: -(id)lastModifiedDate;
-(id)libraryDataProvider;
-(BOOL)libraryHasBeenModifiedWithToken:(id)token;
-(id)modificationToken;
-(id)name;
-(id)newPlaylistWithPersistentID:(unsigned long long)persistentID;
-(id)pathForAssetURL:(id)assetURL;
-(BOOL)performTransactionWithBlock:(id)block;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;
-(long long)playlistGeneration;
-(id)playlistWithPersistentID:(unsigned long long)persistentID;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
// declared property getter: -(int)removalReason;
-(BOOL)removeItems:(id)items;
-(BOOL)removePlaylist:(id)playlist;
-(BOOL)requiresAuthentication;
-(void)setFilteringDisabled:(BOOL)disabled;
// declared property setter: -(void)setRemovalReason:(int)reason;
// declared property setter: -(void)set_internal:(MPMediaLibraryInternal)internal;
-(int)status;
-(unsigned long long)syncGenerationID;
-(id)syncValidity;
-(double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;
-(id)uniqueIdentifier;
-(void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value timestamp:(double)timestamp;
-(BOOL)writable;
@end

@interface MPMediaLibrary (MPMediaLibraryContentProtectionAdditions)
@property(readonly, assign, nonatomic) NSURL* protectedContentSupportStorageURL;
// declared property getter: -(id)protectedContentSupportStorageURL;
@end

@interface MPMediaLibrary (MPMediaLibrarySyncAnchorSupport)
@property(readonly, assign, nonatomic) NSString* _syncValidity;
// declared property getter: -(id)_syncValidity;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)anchor usingBlock:(id)block;
@end

@interface MPMediaLibrary (MPAVErrorResolverAdditions)
-(id)errorResolverForMediaItem:(id)mediaItem;
@end

