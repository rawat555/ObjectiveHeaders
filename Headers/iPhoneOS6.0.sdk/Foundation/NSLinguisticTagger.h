/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"

@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {
@private
	NSArray* _schemes;
	unsigned _options;
	NSString* _string;
	id _orthographyArray;
	id _tokenArray;
	id _reserved;
}
+(id)availableTagSchemesForLanguage:(id)language;
+(BOOL)supportsLanguage:(id)language;
-(id)initWithTagSchemes:(id)tagSchemes options:(unsigned)options;
-(BOOL)_acceptSentenceTerminatorRange:(NSRange)range paragraphRange:(NSRange)range2 tokens:(NSLTToken*)tokens count:(unsigned)count tokenIndex:(unsigned)index;
-(void)_acceptSentencesForParagraphRange:(NSRange)paragraphRange;
-(void)_analyzePunctuationTokensInRange:(NSRange)range paragraphRange:(NSRange)range2;
-(void)_analyzeTokensInInterwordRange:(NSRange)interwordRange paragraphRange:(NSRange)range;
-(void)_analyzeTokensInWordRange:(NSRange)wordRange paragraphRange:(NSRange)range;
-(void)_calculateSentenceRangesForParagraphRange:(NSRange)paragraphRange;
-(BOOL)_ngramTagsAndFrequenciesForMisspelledRange:(NSRange)misspelledRange word:(id)word tags:(id*)tags frequencies:(id*)frequencies;
-(id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates;
-(id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates contextualFrequencies:(id*)frequencies baseFrequencies:(id*)frequencies4;
-(id)_tagSchemeForScheme:(id)scheme;
-(id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange*)range requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;
-(id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange*)range tagScheme:(id)scheme;
-(id)_tokenDataForParagraphRange:(NSRange)paragraphRange requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;
-(void)_tokenizeParagraphAtIndex:(unsigned)index requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;
-(void)dealloc;
-(id)description;
-(void)enumerateTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options usingBlock:(id)block;
-(id)orthographyAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(id)possibleTagsAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange*)range sentenceRange:(NSRange*)range4 scores:(id*)scores;
-(NSRange)sentenceRangeForRange:(NSRange)range;
-(void)setOrthography:(id)orthography range:(NSRange)range;
-(void)setString:(id)string;
-(id)string;
-(void)stringEditedInRange:(NSRange)range changeInLength:(int)length;
-(id)tagAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange*)range sentenceRange:(NSRange*)range4;
-(id)tagSchemes;
-(id)tagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options tokenRanges:(id*)ranges;
@end
