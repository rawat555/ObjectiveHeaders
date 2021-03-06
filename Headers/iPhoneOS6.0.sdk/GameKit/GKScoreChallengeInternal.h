/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKChallengeInternal.h"

@class GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {
@private
	GKScoreInternal* _score;
}
@property(copy, nonatomic) GKScoreInternal* score;	// @synthesize=_score
+(id)codedPropertyKeys;
+(id)internalRepresentation;
-(void)dealloc;
-(id)issueRepresentationToPlayerID:(id)playerID;
// declared property getter: -(id)score;
// declared property setter: -(void)setScore:(id)score;
@end

