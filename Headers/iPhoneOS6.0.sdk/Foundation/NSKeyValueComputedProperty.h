/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty {
@private
	NSString* _operationName;
	NSString* _operationArgumentKeyPath;
	NSKeyValueProperty* _operationArgumentProperty;
}
-(void)_addDependentValueKey:(id)key;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;
-(id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL*)match;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;
-(void)dealloc;
-(id)description;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;
-(void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;
-(void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;
-(void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;
-(BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB*)values;
@end
