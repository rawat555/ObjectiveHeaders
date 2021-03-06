/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableOrderedSet, NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableOrderedSet : XXUnknownSuperclass {
@private
	NSManagedObject* _container;
	NSString* _key;
	NSMutableOrderedSet* _mutableOrderedSet;
}
-(id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set;
-(void)addObject:(id)object;
-(void)addObjects:(const id*)objects count:(unsigned)count;
-(void)addObjectsFromArray:(id)array;
-(id)allObjects;
-(id)array;
-(BOOL)containsObject:(id)object;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(id)description;
-(id)descriptionWithLocale:(id)locale;
-(id)descriptionWithLocale:(id)locale indent:(unsigned)indent;
-(void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;
-(void)enumerateObjectsUsingBlock:(id)block;
-(void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;
-(void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;
-(id)firstObject;
-(void)getObjects:(id*)objects;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(unsigned)indexOfObject:(id)object;
-(unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;
-(unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;
-(unsigned)indexOfObjectPassingTest:(id)objectPassingTest;
-(unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;
-(id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;
-(id)indexesOfObjectsPassingTest:(id)objectsPassingTest;
-(id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(void)insertObjects:(id)objects atIndexes:(id)indexes;
-(void)insertObjects:(id*)objects count:(unsigned)count atIndex:(unsigned)index;
-(void)intersectOrderedSet:(id)set;
-(void)intersectSet:(id)set;
-(BOOL)intersectsOrderedSet:(id)set;
-(BOOL)intersectsSet:(id)set;
-(BOOL)isEqualToOrderedSet:(id)orderedSet;
-(BOOL)isSubsetOfOrderedSet:(id)orderedSet;
-(BOOL)isSubsetOfSet:(id)set;
-(id)lastObject;
-(void)minusOrderedSet:(id)set;
-(void)minusSet:(id)set;
-(void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)objectAtIndex:(unsigned)index;
-(id)objectEnumerator;
-(id)objectsAtIndexes:(id)indexes;
-(void)removeAllObjects;
-(void)removeObject:(id)object;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)removeObjectsAtIndexes:(id)indexes;
-(void)removeObjectsInArray:(id)array;
-(void)removeObjectsInRange:(NSRange)range;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;
-(void)replaceObjectsInRange:(NSRange)range withObjects:(const id*)objects count:(unsigned)count;
-(id)reverseObjectEnumerator;
-(id)reversedOrderedSet;
-(id)set;
-(void)setObject:(id)object atIndex:(unsigned)index;
-(void)setValue:(id)value forKey:(id)key;
-(void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;
-(void)sortUsingComparator:(id)comparator;
-(void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;
-(id)sortedArrayUsingComparator:(id)comparator;
-(id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;
-(void)unionOrderedSet:(id)set;
-(void)unionSet:(id)set;
-(id)valueForKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
@end

