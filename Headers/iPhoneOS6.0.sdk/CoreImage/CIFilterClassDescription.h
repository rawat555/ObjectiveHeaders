/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface CIFilterClassDescription : XXUnknownSuperclass {
@private
	NSMutableDictionary* attributes;
	NSArray* inputKeys;
	NSArray* outputKeys;
}
+(id)classDescriptionForClass:(Class)aClass;
-(id)initWithClass:(Class)aClass;
-(id)attributes;
-(id)inputKeys;
-(id)outputKeys;
@end
