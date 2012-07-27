/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLResponse.h"

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
@private
	NSHTTPURLResponseInternal* _httpInternal;
}
+(BOOL)isErrorStatusCode:(int)code;
+(id)localizedStringForStatusCode:(int)statusCode;
-(id)initWithCoder:(id)coder;
-(id)initWithURL:(id)url statusCode:(int)code HTTPVersion:(id)version headerFields:(id)fields;
-(id)initWithURL:(id)url statusCode:(int)code headerFields:(id)fields requestTime:(double)time;
-(id)_clientCertificateChain;
-(id)_clientCertificateState;
-(id)_initWithCFURLResponse:(CFURLResponseRef)cfurlresponse;
-(id)_peerCertificateChain;
-(SecTrust*)_peerTrust;
-(void)_setPeerTrust:(SecTrust*)trust;
-(id)allHeaderFields;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(int)statusCode;
@end
