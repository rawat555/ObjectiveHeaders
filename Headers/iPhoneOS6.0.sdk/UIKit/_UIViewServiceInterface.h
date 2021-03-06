/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class _UIAsyncInvocation, BKSProcessAssertion, NSError, _UIViewServiceSessionEndpoint;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterface : XXUnknownSuperclass {
@private
	int _terminationStateLock;
	NSError* _terminationError;
	id _terminationHandler;
	BOOL _isTerminated;
	_UIAsyncInvocation* _terminateInvocation;
	_UIViewServiceSessionEndpoint* _serviceSessionEndpoint;
	BKSProcessAssertion* _serviceProcessAssertion;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
}
+(id)connectToViewServiceWithBundleIdentifier:(id)bundleIdentifier connectionHandler:(id)handler;
-(int)__automatic_invalidation_logic;
-(id)_initWithConnectionInfo:(XXStruct_OzJQfB)connectionInfo serviceBundleIdentifier:(id)identifier;
-(BOOL)_isDeallocating;
-(void)_terminateUnconditionallyThen:(id)then;
-(id)_terminateWithError:(id)error;
-(BOOL)_tryRetain;
-(id)connectToDeputyOfType:(id)type connectionHandler:(id)handler;
-(void)dealloc;
-(id)disconnect;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
-(void)setTerminationHandler:(id)handler;
@end

