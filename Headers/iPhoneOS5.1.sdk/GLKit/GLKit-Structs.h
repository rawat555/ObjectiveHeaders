/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float _field1;
	float _field2;
} CGPoint;

typedef struct CGSize {
	float _field1;
	float _field2;
} CGSize;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} XXStruct_$0zJSA;

typedef union _GLKVector4 {
	XXStruct_$0zJSA;
	XXStruct_$0zJSA;
	XXStruct_$0zJSA;
	float v[4];
} GLKVector4;

typedef struct GLKBigInt_s {
	unsigned long long n0;
	unsigned long long n1;
} GLKBigInt_s;

typedef struct GLKEffectPropertyPrv {
	GLKBigInt_s* _field1;
	GLKBigInt_s* _field2;
	GLKBigInt_s* _field3;
	GLKBigInt_s* _field4;
} GLKEffectPropertyPrv;

typedef struct {
	float x;
	float y;
	float z;
} XXStruct_ZUkpeA;

typedef union _GLKVector3 {
	XXStruct_ZUkpeA;
	XXStruct_ZUkpeA;
	XXStruct_ZUkpeA;
	float v[3];
} GLKVector3;

typedef union _GLKMatrix4 {
	struct {
		float m00;
		float m01;
		float m02;
		float m03;
		float m10;
		float m11;
		float m12;
		float m13;
		float m20;
		float m21;
		float m22;
		float m23;
		float m30;
		float m31;
		float m32;
		float m33;
	};
	float m[16];
} GLKMatrix4;

typedef union _GLKMatrix3 {
	struct {
		float m00;
		float m01;
		float m02;
		float m10;
		float m11;
		float m12;
		float m20;
		float m21;
		float m22;
	};
	float m[9];
} GLKMatrix3;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct __CFData* CFDataRef;

typedef struct CGImage* CGImageRef;

typedef struct CGImageProvider* CGImageProviderRef;

typedef struct dispatch_queue_s dispatch_queue_s;


