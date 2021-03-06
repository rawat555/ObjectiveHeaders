/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {
	XXStruct_taVrlB fGravity;
	XXStruct_taVrlB fUserAcceleration;
	XXStruct_taVrlB fRotationRate;
	CMAttitude* fAttitude;
	XXStruct_taVrlB fMagneticField;
	int fMagneticFieldCalibrationLevel;
	bool fDoingYawCorrection;
	bool fDoingBiasEstimation;
}
-(id)initWithDeviceMotion:(XXStruct_cN_7IB)deviceMotion;
-(id).cxx_construct;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)setDeviceMotion:(XXStruct_cN_7IB)motion;
@end

