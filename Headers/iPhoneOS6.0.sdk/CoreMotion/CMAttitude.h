/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreMotion-Structs.h"
#import </libobjc.A.h>


@interface CMAttitude : NSObject <NSCopying, NSCoding> {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) double pitch;
@property(readonly, assign, nonatomic) XXStruct_N5B6hD quaternion;
@property(readonly, assign, nonatomic) double roll;
@property(readonly, assign, nonatomic) XXStruct_VSauOA rotationMatrix;
@property(readonly, assign, nonatomic) double yaw;
-(id)initWithCoder:(id)coder;
-(id)initWithQuaternion:(XXStruct_N5B6hD)quaternion;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)multiplyByInverseOfAttitude:(id)attitude;
// declared property getter: -(double)pitch;
// declared property getter: -(XXStruct_N5B6hD)quaternion;
// declared property getter: -(double)roll;
// declared property getter: -(XXStruct_VSauOA)rotationMatrix;
-(void)setQuaternion:(XXStruct_N5B6hD)quaternion;
// declared property getter: -(double)yaw;
@end

