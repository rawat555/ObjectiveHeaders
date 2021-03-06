/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, NSArray;

@interface CAState : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSString* _name;
	NSString* _basedOn;
	NSMutableArray* _elements;
	double _nextDelay;
	double _previousDelay;
	BOOL _locked;
	BOOL _initial;
}
@property(copy) NSString* basedOn;	// @synthesize=_basedOn
@property(copy, nonatomic) NSArray* elements;
@property(assign, getter=isInitial) BOOL initial;	// @synthesize=_initial
@property(assign, nonatomic, getter=isLocked) BOOL locked;	// @synthesize=_locked
@property(copy, nonatomic) NSString* name;	// @synthesize=_name
@property(assign) double nextDelay;	// @synthesize=_nextDelay
@property(assign) double previousDelay;	// @synthesize=_previousDelay
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)addElement:(id)element;
// declared property getter: -(id)basedOn;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)debugDescription;
// declared property getter: -(id)elements;
-(void)encodeWithCoder:(id)coder;
-(void)foreachLayer:(id)layer;
// declared property getter: -(BOOL)isInitial;
// declared property getter: -(BOOL)isLocked;
// declared property getter: -(id)name;
// declared property getter: -(double)nextDelay;
// declared property getter: -(double)previousDelay;
-(void)removeElement:(id)element;
// declared property setter: -(void)setBasedOn:(id)on;
// declared property setter: -(void)setElements:(id)elements;
// declared property setter: -(void)setInitial:(BOOL)initial;
// declared property setter: -(void)setLocked:(BOOL)locked;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setNextDelay:(double)delay;
// declared property setter: -(void)setPreviousDelay:(double)delay;
@end

