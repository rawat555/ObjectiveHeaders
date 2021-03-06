/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSString, PFUbiquityLocation, NSMutableDictionary, PFUbiquityKnowledgeVector, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineMetadata : XXUnknownSuperclass <NSCoding> {
@private
	NSString* _storeName;
	NSString* _authorPeerID;
	NSString* _modelVersionHash;
	PFUbiquityLocation* _rootLocation;
	PFUbiquityKnowledgeVector* _pKV;
	PFUbiquityKnowledgeVector* _kv;
	NSMutableDictionary* _peerRanges;
}
@property(readonly, assign) NSString* authorPeerID;	// @synthesize=_authorPeerID
@property(readonly, assign) PFUbiquityKnowledgeVector* knowledgeVector;	// @synthesize=_kv
@property(readonly, assign) NSString* modelVersionHash;	// @synthesize=_modelVersionHash
@property(readonly, assign) NSDictionary* peerRanges;	// @synthesize=_peerRanges
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector* previousKnowledgeVector;	// @synthesize=_pKV
@property(readonly, assign) PFUbiquityLocation* rootLocation;	// @synthesize=_rootLocation
@property(readonly, assign) NSString* storeName;	// @synthesize=_storeName
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;
-(void)_migrateToModelVersionHash:(id)modelVersionHash;
-(void)addDictionaryForPeerRange:(id)peerRange;
// declared property getter: -(id)authorPeerID;
-(id)createNewLocalRangeWithRangeStart:(unsigned)rangeStart andRangeEnd:(unsigned)end forEntityNamed:(id)entityNamed;
-(id)createPeerRangeDictionary:(id)dictionary;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(BOOL)gatherMetadataWithStore:(id)store andError:(id*)error;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)knowledgeVector;
// declared property getter: -(id)modelVersionHash;
// declared property getter: -(id)peerRanges;
// declared property getter: -(id)previousKnowledgeVector;
// declared property getter: -(id)rootLocation;
-(void)setKnowledgeVector:(id)vector;
-(void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)currentMetadata;
// declared property getter: -(id)storeName;
@end

