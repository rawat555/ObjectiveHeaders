/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

typedef struct _NSZone NSZone;

typedef struct CGColorSpace* CGColorSpaceRef;
typedef struct Context {
	/*function-pointer*/ void** _field1;
	unsigned _field2;
	CGColorSpaceRef _field3;
	CGColorSpaceRef _field4;
} Context;

typedef struct _opaque_pthread_mutex_t {
	long _field1;
	BOOL _field2[40];
} opaque_pthread_mutex_t;

typedef struct CIContextInternal {
	Context* _field1;
	opaque_pthread_mutex_t _field2;
	bool _field3;
	id _field4;
} CIContextInternal;

struct CGColorSpace* CGColorSpaceRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CVBuffer* CVBufferRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGAffineTransform {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
} CGAffineTransform;

typedef struct {
	char* baseAddress;
	int width;
	int height;
	int rowSamples;
	int rowBytes;
	int size;
	int samplesPerPixel;
	int bytesPerSample;
	float resolution;
} XXStruct_7sjjeB;

typedef struct {
	int minrow;
	int maxrow;
	int mincol;
	int maxcol;
} XXStruct_ck5uzC;

typedef struct {
	BOOL _field1[256];
	BOOL _field2[32];
	XXStruct_7sjjeB _field3;
	int _field4;
	int _field5;
	XXStruct_ck5uzC _field6;
	CGColorSpaceRef _field7;
	unsigned _field8;
	int _field9;
	int _field10;
	BOOL _field11;
	float _field12;
} XXStruct_kb0fHB;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct __CFData* CFDataRef;

typedef struct {
	int origHitX;
	int origHitY;
	int snapHitX;
	int snapHitY;
	int bitmaskSeedX;
	int bitmaskSeedY;
	int bitmaskThreshold;
	int cornealReflectionSeedX;
	int cornealReflectionSeedY;
	int cornealReflectionThreshold;
	BOOL align;
	XXStruct_ck5uzC mTemplate;
	XXStruct_ck5uzC existingTemplate;
	int averageSkinMapY;
	int characterizeCase;
	int finalEyeCase;
	float IOD;
	struct {
		int orientation;
		float SNR;
		bool N90;
		int redBitmaskArea;
		float imageCenterX;
		float imageCenterY;
		float halfDiagonalSize;
	} O;
	XXStruct_ck5uzC CR;
} XXStruct_eP6C5A;

typedef struct {
	int tag;
	CGPoint pt2;
	int eyeCase;
	int forceCase;
	int npixels;
	int bignpixels;
	XXStruct_7sjjeB fullNew;
	XXStruct_ck5uzC YR;
	XXStruct_ck5uzC psTemplate;
	bool pupilShadeAlignment;
	XXStruct_ck5uzC matchingTemplate;
	int faceIndex;
	BOOL left;
	float IOD;
	XXStruct_eP6C5A data;
	struct {
		CGPoint centroid;
		int area;
		float ovalness;
		float contrast;
		float mincontrast;
		int nborder;
		XXStruct_ck5uzC IR;
		float aspectRatio;
		bool touchingEdge;
		int localmax;
		int localmaxrow;
		int localmaxcol;
		int localfloor;
		float rgmean;
		float rgstd;
		float ymean;
		float ystd;
	} BI;
} XXStruct_WqZPoA;

typedef struct vec3 {
	float _field1;
	float _field2;
	float _field3;
} vec3;

typedef struct {
	BOOL _field1;
	int _field2;
	int _field3;
	float _field4;
	float _field5;
	int _field6;
	int _field7;
	int _field8;
	int _field9;
	float _field10;
	float _field11;
	int _field12;
	int _field13;
	float _field14;
	int _field15;
	int _field16;
	int _field17;
	int _field18;
	int _field19;
	int _field20;
	float _field21;
	int _field22;
	int _field23;
	int _field24;
	int _field25;
} XXStruct_$ifKmC;

typedef struct {
	int _field1;
	struct {
		float _field1;
		int _field2;
		int _field3;
		float _field4;
		float _field5;
		float _field6;
		int _field7;
		int _field8;
		float _field9;
	} _field2[4];
} XXStruct_2IQLbD;

typedef struct Rectangle {
	double _field1;
	double _field2;
	double _field3;
	double _field4;
} Rectangle;

typedef struct vec2 {
	float _field1;
	float _field2;
} vec2;

typedef struct vec4 {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
} vec4;

typedef struct image {
	char* _field1;
	int _field2;
	int _field3;
} image;

typedef struct face face;

typedef struct _Vector_impl {
	face* _field1;
	face* _field2;
	face* _field3;
} Vector_impl;

template<>
struct vector<vision::lib::face, std::allocator<vision::lib::face> > {
	Vector_impl _field1;
};

typedef struct Data Data;

typedef struct _Alloc_hider {
	char* _field1;
} Alloc_hider;

template<>
struct basic_string<char, std::char_traits<char>, std::allocator<char> > {
	Alloc_hider _field1;
};

typedef struct FaceCoreAPI {
	/*function-pointer*/ void** _field1;
	Data* _field2;
	int _field3;
	basic_string<char, std::char_traits<char>, std::allocator<char> > _field4;
	basic_string<char, std::char_traits<char>, std::allocator<char> > _field5;
} FaceCoreAPI;

typedef struct CGColor* CGColorRef;

typedef struct {
	int* _field1;
	int _field2;
} XXStruct_xecwpA;


