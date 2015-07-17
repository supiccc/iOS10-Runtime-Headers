/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *AMSymbol;
@property (readonly, copy) NSString *PMSymbol;
@property (readonly, copy) NSString *calendarIdentifier;
@property (readonly, copy) NSArray *eraSymbols;
@property unsigned int firstWeekday;
@property (copy) NSLocale *locale;
@property (readonly, copy) NSArray *longEraSymbols;
@property unsigned int minimumDaysInFirstWeek;
@property (readonly, copy) NSArray *monthSymbols;
@property (readonly, copy) NSArray *quarterSymbols;
@property (readonly, copy) NSArray *shortMonthSymbols;
@property (readonly, copy) NSArray *shortQuarterSymbols;
@property (readonly, copy) NSArray *shortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *shortStandaloneQuarterSymbols;
@property (readonly, copy) NSArray *shortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *shortWeekdaySymbols;
@property (readonly, copy) NSArray *standaloneMonthSymbols;
@property (readonly, copy) NSArray *standaloneQuarterSymbols;
@property (readonly, copy) NSArray *standaloneWeekdaySymbols;
@property (copy) NSTimeZone *timeZone;
@property (readonly, copy) NSArray *veryShortMonthSymbols;
@property (readonly, copy) NSArray *veryShortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *veryShortWeekdaySymbols;
@property (readonly, copy) NSArray *weekdaySymbols;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)calendarWithIdentifier:(id)arg1;
+ (id)currentCalendar;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)AMSymbol;
- (id)PMSymbol;
- (unsigned char)_addComponents:(double*)arg1 :(unsigned long)arg2 :(const char *)arg3 :(void*)arg4;
- (unsigned long)_cfTypeID;
- (unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char *)arg2 :(void*)arg3;
- (id)_copyLocale;
- (id)_copyTimeZone;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char *)arg2 :(void*)arg3;
- (unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long)arg3 :(const char *)arg4 :(void*)arg5;
- (id)_gregorianStartDate;
- (struct { int x1; int x2; })_maximumRangeOfUnit:(unsigned int)arg1;
- (struct { int x1; int x2; })_minimumRangeOfUnit:(unsigned int)arg1;
- (long)_ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (struct { int x1; int x2; })_rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forAT:(double)arg3;
- (unsigned char)_rangeOfUnit:(unsigned int)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4;
- (void)_setGregorianStartDate:(id)arg1;
- (id)calendarIdentifier;
- (int)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned int)arg3;
- (int)component:(unsigned int)arg1 fromDate:(id)arg2;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)components:(unsigned int)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned int)arg4;
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)date:(id)arg1 matchesComponents:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (id)dateByAddingUnit:(unsigned int)arg1 value:(int)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateBySettingHour:(int)arg1 minute:(int)arg2 second:(int)arg3 ofDate:(id)arg4 options:(unsigned int)arg5;
- (id)dateBySettingHour:(int)arg1 minute:(int)arg2 second:(int)arg3 toDate:(id)arg4 options:(unsigned int)arg5;
- (id)dateBySettingUnit:(unsigned int)arg1 value:(int)arg2 ofDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateBySettingUnit:(unsigned int)arg1 value:(int)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateFromComponents:(id)arg1;
- (id)dateWithEra:(int)arg1 year:(int)arg2 month:(int)arg3 day:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8;
- (id)dateWithEra:(int)arg1 yearForWeekOfYear:(int)arg2 weekOfYear:(int)arg3 weekday:(int)arg4 hour:(int)arg5 minute:(int)arg6 second:(int)arg7 nanosecond:(int)arg8;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (id)eraSymbols;
- (unsigned int)firstWeekday;
- (void)getEra:(out int*)arg1 year:(out int*)arg2 month:(out int*)arg3 day:(out int*)arg4 fromDate:(id)arg5;
- (void)getEra:(out int*)arg1 yearForWeekOfYear:(out int*)arg2 weekOfYear:(out int*)arg3 weekday:(out int*)arg4 fromDate:(id)arg5;
- (void)getHour:(out int*)arg1 minute:(out int*)arg2 second:(out int*)arg3 nanosecond:(out int*)arg4 fromDate:(id)arg5;
- (id)gregorianStartDate;
- (unsigned int)hash;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned int)arg3;
- (BOOL)isDate:(id)arg1 inSameDayAsDate:(id)arg2;
- (BOOL)isDateInToday:(id)arg1;
- (BOOL)isDateInTomorrow:(id)arg1;
- (BOOL)isDateInWeekend:(id)arg1;
- (BOOL)isDateInYesterday:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)locale;
- (id)longEraSymbols;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maximumRangeOfUnit:(unsigned int)arg1;
- (unsigned int)minimumDaysInFirstWeek;
- (struct _NSRange { unsigned int x1; unsigned int x2; })minimumRangeOfUnit:(unsigned int)arg1;
- (id)monthSymbols;
- (id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned int)arg3;
- (id)nextDateAfterDate:(id)arg1 matchingHour:(int)arg2 minute:(int)arg3 second:(int)arg4 options:(unsigned int)arg5;
- (id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned int)arg2 value:(int)arg3 options:(unsigned int)arg4;
- (BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned int)arg3 afterDate:(id)arg4;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (id)quarterSymbols;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (BOOL)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3;
- (void)setFirstWeekday:(unsigned int)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (void)setTimeZone:(id)arg1;
- (id)shortMonthSymbols;
- (id)shortQuarterSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneQuarterSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)shortWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneQuarterSymbols;
- (id)standaloneWeekdaySymbols;
- (id)startOfDayForDate:(id)arg1;
- (id)timeZone;
- (id)veryShortMonthSymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)weekdaySymbols;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)autoupdatingCurrentCalendar;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_gregorianCalendarWithUTCTimeZone;

- (id)hk_startOfDateByAddingDays:(int)arg1 toDate:(id)arg2;
- (id)hk_startOfDateBySubtractingDays:(int)arg1 fromDate:(id)arg2;
- (id)hk_startOfFitnessWeekBeforeDate:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_gregorianCalendar;

- (BOOL)_maps_isDateInToday:(id)arg1 inTimeZone:(id)arg2;
- (id)_maps_offsetDate:(id)arg1 toTimeZone:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)_dateOnlyComponentsForDate:(id)arg1;
- (id)_timeOnlyComponentsForDate:(id)arg1;
- (BOOL)date:(id)arg1 isSameDayAsDate:(id)arg2;
- (BOOL)date:(id)arg1 isSameYearAsDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)CalGregorianGMTCalendar;
+ (id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2;
+ (id)sharedAutoupdatingCurrentCalendar;

- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (int)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (BOOL)dateIsFirstOfMonth:(id)arg1;
- (BOOL)dateIsFirstOfYear:(id)arg1;
- (int)daysInMonthContainingDate:(id)arg1;
- (int)daysInWeek;
- (int)hoursInDay;
- (int)minutesInHour;
- (int)monthsInYearForDate:(id)arg1;
- (int)secondsInDay;
- (int)secondsInMinute;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_currentCalendar;
+ (void)__ck_setTestCalendar:(id)arg1;

- (unsigned int)__ck_unitOfDisambiguityFromDate:(id)arg1 toDate:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)_dateOnlyComponentsForDate:(id)arg1;
- (id)_timeOnlyComponentsForDate:(id)arg1;
- (BOOL)date:(id)arg1 isSameDayAsDate:(id)arg2;
- (BOOL)date:(id)arg1 isSameYearAsDate:(id)arg2;

@end
