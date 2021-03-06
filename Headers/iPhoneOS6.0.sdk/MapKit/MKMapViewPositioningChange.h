/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocation, NSNumber, NSValue;

__attribute__((visibility("hidden")))
@interface MKMapViewPositioningChange : XXUnknownSuperclass {
@private
	CLLocation* _location;
	NSNumber* _zoomLevel;
	NSValue* _position;
	NSNumber* _accuracy;
	NSNumber* _shouldHover;
	NSNumber* _shouldHalo;
	NSNumber* _distance;
	int _locationSource;
	unsigned _runCount;
	struct {
		unsigned hasFocus : 1;
		unsigned isStartVisible : 1;
		unsigned isEndVisible : 1;
		unsigned hasComputedMetrics : 1;
		unsigned shouldScrollToLocation : 1;
	} _flags;
}
@property(assign, nonatomic) float accuracy;
@property(readonly, assign, nonatomic) NSNumber* accuracyObject;
@property(assign, nonatomic) double distance;
@property(readonly, assign, nonatomic) BOOL hasAccuracy;
@property(readonly, assign, nonatomic) BOOL hasChanges;
@property(assign, nonatomic) BOOL hasComputedMetrics;
@property(readonly, assign, nonatomic) BOOL hasDistance;
@property(assign, nonatomic) BOOL hasFocus;
@property(readonly, assign, nonatomic) BOOL hasMetrics;
@property(readonly, assign, nonatomic) BOOL hasPosition;
@property(readonly, assign, nonatomic) BOOL hasShouldHalo;
@property(readonly, assign, nonatomic) BOOL hasShouldHover;
@property(readonly, assign, nonatomic) BOOL hasZoomLevel;
@property(assign, nonatomic) BOOL isEndVisible;
@property(assign, nonatomic) BOOL isStartVisible;
@property(retain, nonatomic) CLLocation* location;	// @synthesize=_location
@property(assign, nonatomic) int locationSource;	// @synthesize=_locationSource
@property(assign, nonatomic) CADoublePoint position;
@property(readonly, assign, nonatomic) NSValue* positionObject;
@property(readonly, assign, nonatomic) unsigned runCount;	// @synthesize=_runCount
@property(assign, nonatomic) BOOL shouldHalo;
@property(assign, nonatomic) BOOL shouldHover;
@property(assign, nonatomic) BOOL shouldScrollToLocation;
@property(assign, nonatomic) float zoomLevel;
// declared property getter: -(float)accuracy;
// declared property getter: -(id)accuracyObject;
-(void)clearAccuracy;
-(void)clearMetrics;
-(void)clearPosition;
-(void)clearShouldHalo;
-(void)clearShouldHover;
-(void)clearZoomLevel;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
// declared property getter: -(double)distance;
// declared property getter: -(BOOL)hasAccuracy;
// declared property getter: -(BOOL)hasChanges;
// declared property getter: -(BOOL)hasComputedMetrics;
// declared property getter: -(BOOL)hasDistance;
// declared property getter: -(BOOL)hasFocus;
// declared property getter: -(BOOL)hasMetrics;
// declared property getter: -(BOOL)hasPosition;
// declared property getter: -(BOOL)hasShouldHalo;
// declared property getter: -(BOOL)hasShouldHover;
// declared property getter: -(BOOL)hasZoomLevel;
-(void)incrementRunCount;
// declared property getter: -(BOOL)isEndVisible;
// declared property getter: -(BOOL)isStartVisible;
// declared property getter: -(id)location;
// declared property getter: -(int)locationSource;
// declared property getter: -(CADoublePoint)position;
// declared property getter: -(id)positionObject;
-(void)resetMetrics;
// declared property getter: -(unsigned)runCount;
// declared property setter: -(void)setAccuracy:(float)accuracy;
// declared property setter: -(void)setDistance:(double)distance;
// declared property setter: -(void)setHasComputedMetrics:(BOOL)metrics;
// declared property setter: -(void)setHasFocus:(BOOL)focus;
// declared property setter: -(void)setIsEndVisible:(BOOL)visible;
// declared property setter: -(void)setIsStartVisible:(BOOL)visible;
// declared property setter: -(void)setLocation:(id)location;
// declared property setter: -(void)setLocationSource:(int)source;
// declared property setter: -(void)setPosition:(CADoublePoint)position;
// declared property setter: -(void)setShouldHalo:(BOOL)halo;
// declared property setter: -(void)setShouldHover:(BOOL)hover;
// declared property setter: -(void)setShouldScrollToLocation:(BOOL)scrollToLocation;
// declared property setter: -(void)setZoomLevel:(float)level;
// declared property getter: -(BOOL)shouldHalo;
// declared property getter: -(BOOL)shouldHover;
// declared property getter: -(BOOL)shouldScrollToLocation;
// declared property getter: -(float)zoomLevel;
@end

