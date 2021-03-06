/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "NSProgressPublisher.h"

@class NSXPCConnection, NSMutableDictionary, NSString;

@interface NSProgress : NSObject <NSProgressPublisher> {
@private
	NSProgress* _parent;
	long long _portionOfParentUnitCount;
	id _values;
	id _valuesSeenFromMainThread;
	id _cancellationHandler;
	id _pausingHandler;
	long long _pendingUnitCount;
	id _userInfoProxy;
	NSString* _publisherID;
	NSXPCConnection* _connection;
	int _unpublishingBlockageCount;
	int _remoteObserverCount;
	NSMutableDictionary* _acknowledgementHandlersByBundleID;
	NSMutableDictionary* _lastNotificationTimesByKey;
	NSMutableDictionary* _userInfoLastNotificationTimesByKey;
	id _reserved1;
	id _reserved2;
}
@property(assign, getter=isCancellable) BOOL cancellable;
@property(readonly, assign, getter=isCancelled) BOOL cancelled;
@property(assign) long long completedUnitCount;
@property(readonly, assign) double fractionCompleted;
@property(readonly, assign, getter=isIndeterminate) BOOL indeterminate;
@property(copy) NSString* kind;
@property(copy) NSString* localizedDescription;
@property(readonly, assign) NSString* localizedItemCountDescription;
@property(readonly, assign, getter=isOld) BOOL old;
@property(assign, getter=isPausable) BOOL pausable;
@property(readonly, assign, getter=isPaused) BOOL paused;
@property(assign) long long totalUnitCount;
+(id)_publisherInterface;
+(id)_registrarInterface;
+(id)_subscriberInterface;
+(id)addSubscriberForFileURL:(id)fileURL usingBlock:(id)block;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)currentProgress;
+(id)keyPathsForValuesAffectingFractionCompleted;
+(id)keyPathsForValuesAffectingLocalizedDescription;
+(id)progressWithTotalUnitCount:(long long)totalUnitCount;
+(void)removeSubscriber:(id)subscriber;
-(id)init;
-(id)initWithParent:(id)parent userInfo:(id)info;
-(void)__notifyRemoteObserversOfValueForKey:(id)key inUserInfo:(BOOL)userInfo;
-(void)__setValueForKey:(id)key usingBlock:(id)block;
-(void)_cancel;
-(double)_fractionCompletedUsingValuesFinder:(id)finder;
-(void)_getValueUsingBlock:(id)block;
-(id)_initWithValues:(id)values;
-(void)_notifyRemoteObserversOfValueForKey:(id)key inUserInfo:(BOOL)userInfo;
-(void)_pause;
-(void)_setUserInfoValue:(id)value forKey:(id)key;
-(void)_setValue:(id)value forKey:(id)key inUserInfo:(BOOL)userInfo;
-(void)_setValueForKey:(id)key usingBlock:(id)block;
-(void)_unblockUnpublishing;
-(void)acknowledge;
-(void)acknowledgeWithSuccess:(BOOL)success;
-(oneway void)appWithBundleID:(id)bundleID didAcknowledgeWithSuccess:(BOOL)success;
-(void)becomeCurrentWithPendingUnitCount:(long long)pendingUnitCount;
-(void)cancel;
// declared property getter: -(long long)completedUnitCount;
-(void)dealloc;
// declared property getter: -(double)fractionCompleted;
-(void)handleAcknowledgementByAppWithBundleIdentifer:(id)bundleIdentifer usingBlock:(id)block;
-(void)handleAcknowledgementByAppWithBundleIdentifier:(id)bundleIdentifier usingBlock:(id)block;
// declared property getter: -(BOOL)isCancellable;
// declared property getter: -(BOOL)isCancelled;
// declared property getter: -(BOOL)isIndeterminate;
// declared property getter: -(BOOL)isOld;
// declared property getter: -(BOOL)isPausable;
// declared property getter: -(BOOL)isPaused;
// declared property getter: -(id)kind;
// declared property getter: -(id)localizedDescription;
// declared property getter: -(id)localizedItemCountDescription;
-(unsigned)ownedDictionaryCount;
-(id)ownedDictionaryKeyEnumerator;
-(id)ownedDictionaryObjectForKey:(id)key;
-(void)pause;
-(void)publish;
-(void)resignCurrent;
// declared property setter: -(void)setCancellable:(BOOL)cancellable;
-(void)setCancellationHandler:(id)handler;
// declared property setter: -(void)setCompletedUnitCount:(long long)count;
// declared property setter: -(void)setKind:(id)kind;
// declared property setter: -(void)setLocalizedDescription:(id)description;
// declared property setter: -(void)setPausable:(BOOL)pausable;
-(void)setPausingHandler:(id)handler;
// declared property setter: -(void)setTotalUnitCount:(long long)count;
-(void)setUserInfoObject:(id)object forKey:(id)key;
-(oneway void)startProvidingValuesWithInitialAcceptor:(id)initialAcceptor;
-(oneway void)stopProvidingValues;
// declared property getter: -(long long)totalUnitCount;
-(void)unpublish;
-(id)userInfo;
@end

