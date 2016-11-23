//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationDataSource.h>

@interface NTKTestComplicationDataSource : NTKComplicationDataSource
{
}

+ (float)_percentOfDayCompletedForDate:(id)arg1;
+ (_Bool)acceptsComplicationFamily:(int)arg1;
+ (_Bool)acceptsComplicationType:(unsigned int)arg1;
- (id)roundDateDownToNearestHour:(id)arg1;
- (id)timelineEntryForFamily:(int)arg1 forDate:(id)arg2;
- (void)getDesiredUpdateIntervalWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;

@end
