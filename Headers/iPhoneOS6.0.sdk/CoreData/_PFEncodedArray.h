/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : XXUnknownSuperclass {
@private
	NSData* _sourceData;
	int _cd_rc;
	unsigned _count;
}
-(id)init;
-(BOOL)_isDeallocating;
-(void)_replaceObject:(id)object atIndex:(unsigned)index;
-(BOOL)_tryRetain;
-(const id*)_values;
-(Class)classForArchiver;
-(Class)classForCoder;
-(id)copy;
-(unsigned)count;
-(void)dealloc;
-(id)description;
-(id)mutableCopy;
-(id)objectAtIndex:(unsigned)index;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
@end

