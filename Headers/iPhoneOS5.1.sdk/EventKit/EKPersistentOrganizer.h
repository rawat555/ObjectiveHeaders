/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentParticipant.h"


@interface EKPersistentOrganizer : EKPersistentParticipant {
}
@property(assign, nonatomic, getter=isCurrentUser) BOOL currentUser;
+(id)organizerWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;
+(id)relations;
-(id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(int)entityType;
// declared property getter: -(BOOL)isCurrentUser;
-(id)owner;
// declared property setter: -(void)setCurrentUser:(BOOL)user;
-(void)setOwner:(id)owner;
@end

