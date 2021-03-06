/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSTimeZone;

@interface NSCalendarDate : XXUnknownSuperclass {
@private
	unsigned refCount;
	double _timeIntervalSinceReferenceDate;
	NSTimeZone* _timeZone;
	NSString* _formatString;
	void* _reserved;
}
+(id)allocWithZone:(NSZone*)zone;
+(id)calendarDate;
+(id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;
+(id)dateWithString:(id)string calendarFormat:(id)format;
+(id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;
+(id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;
+(id)distantFuture;
+(id)distantPast;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithString:(id)string;
-(id)initWithString:(id)string calendarFormat:(id)format;
-(id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;
-(id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;
-(id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;
-(id)addTimeInterval:(double)interval;
-(id)calendarFormat;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;
-(int)dayOfCommonEra;
-(int)dayOfMonth;
-(int)dayOfWeek;
-(int)dayOfYear;
-(void)dealloc;
-(id)description;
-(id)descriptionWithCalendarFormat:(id)calendarFormat;
-(id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;
-(id)descriptionWithLocale:(id)locale;
-(void)encodeWithCoder:(id)coder;
-(int)hourOfDay;
-(int)microsecondOfSecond;
-(int)minuteOfHour;
-(int)monthOfYear;
-(oneway void)release;
-(id)replacementObjectForPortCoder:(id)portCoder;
-(int)secondOfMinute;
-(void)setCalendarFormat:(id)format;
-(void)setTimeZone:(id)zone;
-(double)timeIntervalSinceReferenceDate;
-(id)timeZone;
-(id)timeZoneDetail;
-(int)yearOfCommonEra;
-(void)years:(int*)years months:(int*)months days:(int*)days hours:(int*)hours minutes:(int*)minutes seconds:(int*)seconds sinceDate:(id)date;
@end

