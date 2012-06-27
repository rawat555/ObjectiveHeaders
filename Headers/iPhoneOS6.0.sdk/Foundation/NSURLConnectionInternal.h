/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"
#import "NSURLAuthenticationChallengeSender.h"
#import "NSURLConnectionRequired.h"

@class NSURLConnection, NSDictionary, NSURL, NSOperationQueue, NSURLRequest;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {
@private
	NSURLConnection* _connection;
	NSOperationQueue* _delegateQueue;
	NSURL* _url;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	id _delegate;
	NSDictionary* _connectionProperties;
	BOOL _connectionActive;
}
-(id)initWithInfo:(const InternalInit*)info;
-(id)_connectionProperties;
-(void)_invalidate;
-(void)_setDelegateQueue:(id)queue;
-(void)_withActiveConnectionAndDelegate:(id)activeConnectionAndDelegate;
-(void)_withConnection:(id)connection;
-(void)_withConnectionAndDelegate:(id)connectionAndDelegate onlyActive:(BOOL)active;
-(void)_withConnectionDisconnectFromConnection;
-(void)_withErrorForConnection:(id)connection;
-(void)cancelAuthenticationChallenge:(id)challenge;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;
-(id)currentRequest;
-(void)dealloc;
-(void)invokeForDelegate:(id)delegate;
-(BOOL)isConnectionActive;
-(id)originalRequest;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;
-(void)setConnectionActive:(BOOL)active;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;
@end
