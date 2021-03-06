/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UIFont : XXUnknownSuperclass <NSCopying> {
}
@property(readonly, assign, nonatomic) float ascender;
@property(readonly, assign, nonatomic) float capHeight;
@property(readonly, assign, nonatomic) float descender;
@property(readonly, assign, nonatomic) NSString* familyName;
@property(readonly, assign, nonatomic) NSString* fontName;
@property(readonly, assign, nonatomic) float lineHeight;
@property(readonly, assign, nonatomic) float pointSize;
@property(readonly, assign, nonatomic) float xHeight;
+(id)__newDummy;
+(id)_boldItalicSystemFontOfSize:(float)size;
+(id)_systemFontsOfSize:(float)size traits:(int)traits;
+(id)boldSystemFontOfSize:(float)size;
+(float)buttonFontSize;
+(id)classFallbacksForKeyedArchiver;
+(id)familyNames;
+(id)fontNamesForFamilyName:(id)familyName;
+(id)fontWithFamilyName:(id)familyName traits:(int)traits size:(float)size;
+(id)fontWithMarkupDescription:(id)markupDescription;
+(id)fontWithName:(id)name size:(float)size;
+(id)fontWithName:(id)name size:(float)size traits:(int)traits;
+(id)italicSystemFontOfSize:(float)size;
+(float)labelFontSize;
+(float)smallSystemFontSize;
+(id)systemFontOfSize:(float)size;
+(id)systemFontOfSize:(float)size traits:(int)traits;
+(float)systemFontSize;
-(id)initWithCoder:(id)coder;
-(id)initWithFamilyName:(id)familyName traits:(int)traits size:(float)size;
-(id)initWithMarkupDescription:(id)markupDescription;
-(id)initWithName:(id)name size:(float)size;
-(id)_alternateSystemFonts;
-(id)_fontScaledByScaleFactor:(float)factor;
// declared property getter: -(float)ascender;
// declared property getter: -(float)capHeight;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(float)descender;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)familyName;
-(id)familyNameForCSSFontFamilyValue;
// declared property getter: -(id)fontName;
-(id)fontWithSize:(float)size;
-(BOOL)isFixedPitch;
-(BOOL)isSystemFont;
-(float)leading;
// declared property getter: -(float)lineHeight;
-(id)markupDescription;
// declared property getter: -(float)pointSize;
-(int)traits;
// declared property getter: -(float)xHeight;
@end

