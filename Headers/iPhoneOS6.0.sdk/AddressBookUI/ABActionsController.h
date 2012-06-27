/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ABActionsController : XXUnknownSuperclass {
@private
	void* _person;
	int _property;
	int _recordID;
	int _multiValueIdentifier;
	id _value;
	NSString* _stringValue;
	void* _context;
	int _lastPropertyForActions;
	CFArrayRef _actionsForProperty;
}
+(int)defaultActionForProperty:(int)property;
+(id)newActionsControllerForProperty:(int)property;
-(id)init;
-(id)initWithProperty:(int)property;
-(int)_actionAtIndex:(int)index forProperty:(int)property;
-(CFArrayRef)_actionsForProperty:(int)property;
-(void)_performAction:(int)action forProperty:(int)property;
-(int)actionsCountForProperty:(int)property;
-(void*)context;
-(void)dealloc;
-(int)defaultAction;
-(void)performAction:(int)action;
-(void)performActionAtIndex:(int)index forProperty:(int)property;
-(void)performDefaultAction;
-(void*)person;
-(void)resetPrimaryPropertyActions;
-(void)setContext:(void*)context;
-(void)setMultiValueIdentifier:(int)identifier;
-(void)setPerson:(void*)person;
-(void)setRecordID:(int)anId;
-(void)setStringValue:(id)value;
-(void)setValue:(id)value;
-(id)stringValue;
-(id)titleAtIndex:(int)index forProperty:(int)property;
-(id)titleForAction:(int)action;
-(id)urlForAction:(int)action forProperty:(int)property;
-(id)value;
@end
