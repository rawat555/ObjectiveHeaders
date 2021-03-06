/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface UIKBKeylist : XXUnknownSuperclass <NSCoding, NSCopying> {
	NSString* m_name;
	NSMutableArray* m_keys;
}
@property(readonly, assign, nonatomic) unsigned count;
@property(retain, nonatomic) NSMutableArray* keys;	// @synthesize=m_keys
@property(retain, nonatomic) NSString* name;	// @synthesize=m_name
+(id)keylist;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithName:(id)name keys:(id)keys;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(unsigned)count;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)keyWithName:(id)name;
// declared property getter: -(id)keys;
-(id)keysWithInteractionType:(id)interactionType;
// declared property getter: -(id)name;
// declared property setter: -(void)setKeys:(id)keys;
// declared property setter: -(void)setName:(id)name;
@end

