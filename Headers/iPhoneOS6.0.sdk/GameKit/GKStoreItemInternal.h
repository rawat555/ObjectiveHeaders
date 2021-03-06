/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKInternalRepresentation.h"

@class NSURL, NSDate, NSNumber, NSString;

@interface GKStoreItemInternal : GKInternalRepresentation {
@private
	NSDate* _expirationDate;
	NSURL* _viewItemURL;
	NSString* _priceDisplay;
	NSNumber* _adamID;
	unsigned _numberOfUserRatings;
	float _averageUserRating;
	NSString* _artistName;
}
@property(retain, nonatomic) NSNumber* adamID;	// @synthesize=_adamID
@property(retain, nonatomic) NSString* artistName;	// @synthesize=_artistName
@property(assign, nonatomic) float averageUserRating;	// @synthesize=_averageUserRating
@property(retain, nonatomic) NSDate* expirationDate;	// @synthesize=_expirationDate
@property(assign, nonatomic) unsigned numberOfUserRatings;	// @synthesize=_numberOfUserRatings
@property(retain, nonatomic) NSString* priceDisplay;	// @synthesize=_priceDisplay
@property(retain, nonatomic) NSURL* viewItemURL;	// @synthesize=_viewItemURL
+(id)codedPropertyKeys;
// declared property getter: -(id)adamID;
// declared property getter: -(id)artistName;
// declared property getter: -(float)averageUserRating;
-(void)dealloc;
// declared property getter: -(id)expirationDate;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(unsigned)numberOfUserRatings;
// declared property getter: -(id)priceDisplay;
// declared property setter: -(void)setAdamID:(id)anId;
// declared property setter: -(void)setArtistName:(id)name;
// declared property setter: -(void)setAverageUserRating:(float)rating;
// declared property setter: -(void)setExpirationDate:(id)date;
// declared property setter: -(void)setNumberOfUserRatings:(unsigned)userRatings;
// declared property setter: -(void)setPriceDisplay:(id)display;
// declared property setter: -(void)setViewItemURL:(id)url;
// declared property getter: -(id)viewItemURL;
@end

