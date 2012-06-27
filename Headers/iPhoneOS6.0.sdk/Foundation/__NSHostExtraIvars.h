/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject {
@private
	NSString* thingToResolve;
	int resolveType;
	NSObject<OS_dispatch_queue>* resolveQueue;
	NSObject<OS_dispatch_queue>* cacheAccessQueue;
	NSObject<OS_dispatch_queue>* callbackQueue;
	BOOL startedResolving;
}
@property(readonly, assign) NSObject<OS_dispatch_queue>* cacheAccessQueue;	// @synthesize
@property(readonly, assign) NSObject<OS_dispatch_queue>* callbackQueue;	// @synthesize
@property(readonly, assign) NSObject<OS_dispatch_queue>* resolveQueue;	// @synthesize
@property(assign, nonatomic) int resolveType;	// @synthesize
@property(assign) BOOL startedResolving;	// @synthesize
@property(retain, nonatomic) NSString* thingToResolve;	// @synthesize
-(id)init;
// declared property getter: -(id)cacheAccessQueue;
// declared property getter: -(id)callbackQueue;
-(void)cleanup;
-(void)dealloc;
-(void)finalize;
// declared property getter: -(id)resolveQueue;
// declared property getter: -(int)resolveType;
// declared property setter: -(void)setResolveType:(int)type;
// declared property setter: -(void)setStartedResolving:(BOOL)resolving;
// declared property setter: -(void)setThingToResolve:(id)resolve;
// declared property getter: -(BOOL)startedResolving;
// declared property getter: -(id)thingToResolve;
@end
