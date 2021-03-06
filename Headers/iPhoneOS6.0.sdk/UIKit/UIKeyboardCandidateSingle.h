/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidate.h"

@class NSString;

@interface UIKeyboardCandidateSingle : UIKeyboardCandidate {
@private
	NSString* _candidate;
	NSString* _input;
}
@property(copy, nonatomic) NSString* candidate;	// @synthesize=_candidate
@property(copy, nonatomic) NSString* input;	// @synthesize=_input
+(id)candidateWithCandidate:(id)candidate forInput:(id)input;
+(id)candidateWithUnchangedInput:(id)unchangedInput;
-(id)initWithCandidate:(id)candidate;
-(id)initWithCandidate:(id)candidate forInput:(id)input;
-(id)initWithUnchangedInput:(id)unchangedInput;
// declared property getter: -(id)candidate;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(id)input;
// declared property setter: -(void)setCandidate:(id)candidate;
// declared property setter: -(void)setInput:(id)input;
@end

