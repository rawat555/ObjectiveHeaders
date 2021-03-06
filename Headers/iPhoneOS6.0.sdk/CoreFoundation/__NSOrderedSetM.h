/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableOrderedSet.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface __NSOrderedSetM : NSMutableOrderedSet {
@private
	unsigned _used;
	CFBasicHashRef _set;
	NSMutableArray* _array;
}
+(id)__new:(const id*)aNew :(unsigned)arg2;
+(id)allocWithZone:(NSZone*)zone;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(void)_mutate;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(void)finalize;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(unsigned)indexOfObject:(id)object;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(id)objectAtIndex:(unsigned)index;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(void)setObject:(id)object atIndex:(unsigned)index;
@end

