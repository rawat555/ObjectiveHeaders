/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSFetchedResultsSectionInfo.h"

@class NSFetchedResultsController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _NSDefaultSectionInfo : XXUnknownSuperclass <NSFetchedResultsSectionInfo> {
@private
	NSFetchedResultsController* _controller;
	NSString* _name;
	NSString* _indexTitle;
	unsigned _sectionOffset;
	unsigned _numberOfObjects;
	unsigned _oldSectionNumber;
	id _sectionObjects;
}
@property(readonly, assign, nonatomic) NSString* indexTitle;	// @synthesize=_indexTitle
@property(readonly, assign, nonatomic) NSString* name;	// @synthesize=_name
@property(readonly, assign, nonatomic) unsigned numberOfObjects;	// @synthesize=_numberOfObjects
@property(readonly, assign, nonatomic) NSArray* objects;
@property(assign, nonatomic) unsigned oldSectionNumber;	// @synthesize=_oldSectionNumber
@property(readonly, assign, nonatomic) unsigned sectionNumber;
@property(readonly, assign, nonatomic) unsigned sectionOffset;	// @synthesize=_sectionOffset
-(id)initWithCoder:(id)coder;
-(id)initWithController:(id)controller name:(id)name indexTitle:(id)title sectionOffset:(unsigned)offset;
-(void)clearSectionObjectsCache;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(unsigned)indexOfObject:(id)object;
// declared property getter: -(id)indexTitle;
// declared property getter: -(id)name;
// declared property getter: -(unsigned)numberOfObjects;
// declared property getter: -(id)objects;
// declared property getter: -(unsigned)oldSectionNumber;
// declared property getter: -(unsigned)sectionNumber;
// declared property getter: -(unsigned)sectionOffset;
-(void)setController:(id)controller;
-(void)setNumberOfObjects:(unsigned)objects;
// declared property setter: -(void)setOldSectionNumber:(unsigned)number;
-(void)setSectionOffset:(unsigned)offset;
@end

