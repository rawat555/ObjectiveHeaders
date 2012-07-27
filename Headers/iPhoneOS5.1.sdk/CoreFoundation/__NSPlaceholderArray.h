/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)immutablePlaceholder;
+(void)initialize;
+(id)mutablePlaceholder;
-(id)init;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithContentsOfFile:(id)file;
-(id)initWithContentsOfURL:(id)url;
-(id)initWithObjects:(const id*)objects count:(unsigned)count;
-(unsigned)count;
-(void)dealloc;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(id)objectAtIndex:(unsigned)index;
-(oneway void)release;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(id)retain;
-(unsigned)retainCount;
@end
