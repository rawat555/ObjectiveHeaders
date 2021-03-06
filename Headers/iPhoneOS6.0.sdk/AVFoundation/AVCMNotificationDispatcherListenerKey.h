/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : XXUnknownSuperclass <NSCopying> {
@private
	AVWeakReference* _weakReferenceToListener;
	/*function-pointer*/ void* _callback;
	NSString* _name;
	const void* _object;
}
+(id)listenerKeyWithWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void*)callback name:(id)name object:(const void*)object;
-(id)initWithWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void*)callback name:(id)name object:(const void*)object;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

