/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : XXUnknownSuperclass {
@private
	AVCaptureOutputInternal* _outputInternal;
}
@property(readonly, assign, nonatomic) NSArray* connections;
-(id)init;
-(void)_applyOverridesToCaptureOptions:(id)captureOptions;
-(id)_inputForConnection:(id)connection;
-(id)addConnection:(id)connection error:(id*)error;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)connection;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)connection;
-(void)bumpChangeSeed;
-(BOOL)canAddConnectionForMediaType:(id)mediaType;
-(int)changeSeed;
-(id)connectionWithMediaType:(id)mediaType;
// declared property getter: -(id)connections;
-(void)dealloc;
-(void)didStartForSession:(id)session;
-(void)didStopForSession:(id)session error:(id)error;
-(id)firstEnabledConnectionForMediaType:(id)mediaType;
-(void)handleEnabledChangedForConnection:(id)connection;
-(void)handleNotification:(id)notification payload:(id)payload;
-(id)liveConnections;
-(id)notReadyError;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(CGSize)outputSizeForCaptureOptions:(id)captureOptions;
-(void)removeConnection:(id)connection;
-(id)session;
-(void)setSession:(id)session;
-(id)transformedMetadataObjectForMetadataObject:(id)metadataObject connection:(id)connection;
-(void)updateMetadataTransformForCaptureOptions:(id)captureOptions;
@end

