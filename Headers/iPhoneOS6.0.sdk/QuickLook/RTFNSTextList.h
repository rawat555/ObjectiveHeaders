/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "QuickLook-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RTFNSTextList : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSString* _markerFormat;
	unsigned _listFlags;
	int _startIndex;
	void* _listSecondary;
}
+(id)_standardMarkerAttributesForAttributes:(id)attributes;
+(void)initialize;
-(id)initWithCoder:(id)coder;
-(id)initWithMarkerFormat:(id)markerFormat options:(unsigned)options;
-(BOOL)_isOrdered;
-(id)_markerForMarkerFormat:(id)markerFormat itemNumber:(int)number isNumbered:(BOOL*)numbered substitutionStart:(unsigned*)start end:(unsigned*)end specifierStart:(unsigned*)start6 end:(unsigned*)end7;
-(id)_markerPrefix;
-(id)_markerSpecifier;
-(id)_markerSuffix;
-(id)_markerTitle;
-(id)_unaffixedMarkerForItemNumber:(int)itemNumber;
-(id)_unaffixedMarkerFormat;
-(id)_unaffixedMarkerTitle;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(unsigned)listOptions;
-(id)markerForItemNumber:(int)itemNumber;
-(id)markerFormat;
-(unsigned)options;
-(void)setStartingItemNumber:(int)number;
-(int)startingItemNumber;
@end

