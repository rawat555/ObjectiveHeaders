/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Twitter.framework/Twitter
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Twitter-Structs.h"


@interface TWColor : XXUnknownSuperclass {
	CGColorRef _colorRef;
}
+(id)clearColor;
+(id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
+(id)colorWithWhite:(float)white alpha:(float)alpha;
+(id)grayColor;
+(id)whiteColor;
-(CGColorRef)CGColor;
-(void)dealloc;
-(void)setCGColor:(CGColorRef)color;
-(void)setOnContext:(CGContextRef)context;
@end

