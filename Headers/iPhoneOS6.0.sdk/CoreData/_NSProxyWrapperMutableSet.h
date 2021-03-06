/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableSet.h"

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {
@private
	_NSFaultingMutableSetMutationMethods* _mutationMethods;
}
-(id)initWithContainer:(id)container key:(id)key mutableSet:(id)set mutationMethods:(id)methods;
-(void)addObject:(id)object;
-(void)addObjectsFromArray:(id)array;
-(void)dealloc;
-(void)intersectSet:(id)set;
-(void)minusSet:(id)set;
-(void)removeAllObjects;
-(void)removeObject:(id)object;
-(void)setSet:(id)set;
-(void)unionSet:(id)set;
@end

