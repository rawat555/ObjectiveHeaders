/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSSetM : NSMutableSet {
@private
	unsigned _used;
}
+(id)__new:(const id*)aNew :(unsigned)arg2;
+(id)allocWithZone:(NSZone*)zone;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(void)addObject:(id)object;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(void)finalize;
-(id)member:(id)member;
-(id)objectEnumerator;
-(void)removeObject:(id)object;
@end

