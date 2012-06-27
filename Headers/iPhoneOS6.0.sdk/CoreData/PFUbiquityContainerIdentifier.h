/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PFUbiquityLocation, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerIdentifier : XXUnknownSuperclass {
@private
	NSString* _storeName;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _uuidString;
	PFUbiquityLocation* _uuidFileLocation;
	BOOL _usedExistingUUIDFile;
}
@property(readonly, assign, nonatomic) BOOL usedExistingUUIDFile;	// @synthesize=_usedExistingUUIDFile
@property(readonly, assign, nonatomic) PFUbiquityLocation* uuidFileLocation;	// @synthesize=_uuidFileLocation
@property(readonly, assign, nonatomic) NSString* uuidString;	// @synthesize=_uuidString
-(id)init;
-(id)initWithLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;
-(void)dealloc;
-(BOOL)identifyContainer:(id*)container;
-(BOOL)replaceIdentifierWithUUID:(id)uuid error:(id*)error;
-(void)setUUIDStringFromLocation:(id)location;
// declared property getter: -(BOOL)usedExistingUUIDFile;
// declared property getter: -(id)uuidFileLocation;
// declared property getter: -(id)uuidString;
-(BOOL)writeToDisk:(id*)disk;
@end
