/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iAd-Structs.h"

@class NSMutableDictionary;

@interface ADDefaults : XXUnknownSuperclass {
@private
	CFStringRef _defaultsBundleId;
	NSMutableDictionary* _factoryDefaults;
}
+(id)_defaultValueForKey:(id)key valueClass:(Class)aClass;
+(void)_setDefaultValue:(id)value forKey:(id)key;
+(void)addFactoryDefaults:(id)defaults;
+(id)allocWithZone:(NSZone*)zone;
+(BOOL)boolForKey:(id)key;
+(double)doubleForKey:(id)key;
+(int)integerForKey:(id)key;
+(void)setBool:(BOOL)aBool forKey:(id)key;
+(void)setDouble:(double)aDouble forKey:(id)key;
+(void)setInteger:(int)integer forKey:(id)key;
+(void)setString:(id)string forKey:(id)key;
+(id)sharedInstance;
+(id)stringForKey:(id)key;
-(id)init;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)zone;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
@end

