/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray {
@private
	unsigned _used;
	unsigned _doHardRetain : 1;
	unsigned _doWeakAccess : 1;
	unsigned _size : 30;
	unsigned _hasObjects : 1;
	unsigned _hasStrongReferences : 1;
	unsigned _offset : 30;
	unsigned long _mutations;
	id* _list;
}
+(id)__new:(const id*)aNew :(unsigned)arg2 :(BOOL)arg3 :(BOOL)arg4 :(BOOL)arg5;
+(id)allocWithZone:(NSZone*)zone;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
-(BOOL)_hasObjects;
-(BOOL)_hasStrongReferences;
-(void)_mutate;
-(void)addObject:(id)object;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(void)finalize;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(unsigned)indexOfObjectIdenticalTo:(id)to;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(id)objectAtIndex:(unsigned)index;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(void)setObject:(id)object atIndex:(unsigned)index;
@end

