/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAEmitterLayer : CALayer {
}
@property(assign) float birthRate;
@property(copy) NSArray* emitterCells;
@property(assign) float emitterDepth;
@property(copy) NSString* emitterMode;
@property(assign) CGPoint emitterPosition;
@property(copy) NSString* emitterShape;
@property(assign) CGSize emitterSize;
@property(assign) float emitterZPosition;
@property(assign) float lifetime;
@property(assign) BOOL preservesDepth;
@property(copy) NSString* renderMode;
@property(assign) float scale;
@property(assign) unsigned seed;
@property(assign) float spin;
@property(assign) float velocity;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(id)defaultValueForKey:(id)key;
-(Layer*)_copyRenderLayer:(Transaction*)layer layerFlags:(unsigned)flags commitFlags:(unsigned*)flags3;
-(bool)_renderLayerDefinesProperty:(unsigned)property;
// declared property getter: -(float)birthRate;
-(void)didChangeValueForKey:(id)key;
// declared property getter: -(id)emitterCells;
// declared property getter: -(float)emitterDepth;
// declared property getter: -(id)emitterMode;
// declared property getter: -(CGPoint)emitterPosition;
// declared property getter: -(id)emitterShape;
// declared property getter: -(CGSize)emitterSize;
// declared property getter: -(float)emitterZPosition;
-(id)implicitAnimationForKeyPath:(id)keyPath;
// declared property getter: -(float)lifetime;
// declared property getter: -(BOOL)preservesDepth;
// declared property getter: -(id)renderMode;
// declared property getter: -(float)scale;
// declared property getter: -(unsigned)seed;
// declared property setter: -(void)setBirthRate:(float)rate;
// declared property setter: -(void)setEmitterCells:(id)cells;
// declared property setter: -(void)setEmitterDepth:(float)depth;
// declared property setter: -(void)setEmitterMode:(id)mode;
// declared property setter: -(void)setEmitterPosition:(CGPoint)position;
// declared property setter: -(void)setEmitterShape:(id)shape;
// declared property setter: -(void)setEmitterSize:(CGSize)size;
// declared property setter: -(void)setEmitterZPosition:(float)position;
// declared property setter: -(void)setLifetime:(float)lifetime;
// declared property setter: -(void)setPreservesDepth:(BOOL)depth;
// declared property setter: -(void)setRenderMode:(id)mode;
// declared property setter: -(void)setScale:(float)scale;
// declared property setter: -(void)setSeed:(unsigned)seed;
// declared property setter: -(void)setSpin:(float)spin;
// declared property setter: -(void)setVelocity:(float)velocity;
// declared property getter: -(float)spin;
// declared property getter: -(float)velocity;
@end
