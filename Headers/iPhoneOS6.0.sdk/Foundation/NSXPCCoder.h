/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"
#import "Foundation-Structs.h"

@protocol NSObject;

@interface NSXPCCoder : NSCoder {
	id<NSObject> _userInfo;
	id _reserved1;
}
@property(retain) id<NSObject> userInfo;	// @synthesize=_userInfo
-(void)dealloc;
-(id)decodeXPCObjectForKey:(id)key;
-(void)encodeXPCObject:(id)object forKey:(id)key;
-(BOOL)requiresSecureCoding;
// declared property setter: -(void)setUserInfo:(id)info;
// declared property getter: -(id)userInfo;
@end
