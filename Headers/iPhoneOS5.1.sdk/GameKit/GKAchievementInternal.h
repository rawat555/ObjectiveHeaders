/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKInternalRepresentation.h"

@class NSString, NSDate;

@interface GKAchievementInternal : GKInternalRepresentation {
@private
	NSString* _identifier;
	NSDate* _lastReportedDate;
	double _percentComplete;
}
@property(retain, nonatomic) NSString* identifier;	// @synthesize=_identifier
@property(retain, nonatomic) NSDate* lastReportedDate;	// @synthesize=_lastReportedDate
@property(assign, nonatomic) double percentComplete;	// @synthesize=_percentComplete
+(id)codedPropertyKeys;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)identifier;
// declared property getter: -(id)lastReportedDate;
// declared property getter: -(double)percentComplete;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setLastReportedDate:(id)date;
// declared property setter: -(void)setPercentComplete:(double)complete;
@end

