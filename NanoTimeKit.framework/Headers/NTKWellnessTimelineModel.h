//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class HKActivitySummary, HKAnchoredObjectQuery, HKCurrentActivityCacheQuery, HKHealthStore, HKObserverQuery, HKQuantityType, HKQueryAnchor, HKSortedSampleArray, HKUnit, NSArray, NSHashTable, NSMutableDictionary, NSObject, _HKCurrentActivitySummaryQuery, _HKDelayedOperation;

@interface NTKWellnessTimelineModel : NSObject
{
    HKHealthStore *_healthStore;
    HKQuantityType *_calorieGoalType;
    HKUnit *_kcalUnit;
    HKUnit *_minuteUnit;
    HKUnit *_countUnit;
    HKObserverQuery *_queue_calorieGoalObserverQuery;
    HKAnchoredObjectQuery *_queue_calorieGoalAnchoredObjectQuery;
    HKQueryAnchor *_queue_calorieGoalAnchor;
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheAndStatisticsQuery;
    NSObject *_queue;
    HKActivitySummary *_queue_currentActivitySummary;
    HKSortedSampleArray *_queue_calorieGoals;
    NSArray *_queue_moveActivityStatisticsQuantityInfos;
    NSArray *_queue_exerciseActivityStatisticsQuantityInfos;
    NSArray *_queue_standActivityStatisticsStandHourInfos;
    NSArray *_queue_sortedEntriesKeys;
    NSMutableDictionary *_queue_wellnessEntriesByDate;
    _HKDelayedOperation *_delayedProcessingOperation;
    NSObject *_subscriber_queue;
    NSHashTable *_subscribers;
}

+ (id)sharedModel;
// - (void).cxx_destruct;
- (void)_broadcastHistoricalDataLoaded:(_Bool)arg1 toSubscriber:(id)arg2;
- (void)_broadcastToAllSubscribersHistoricalDataLoaded:(_Bool)arg1;
- (void)_broadcastHistoricalDataWasUpdatedToSubscribers;
- (void)_broadcastCurrentEntryUpdate:(id)arg1 toSubscriber:(id)arg2;
- (void)_broadcastCurrentEntryUpdateToSubscribers:(id)arg1;
- (void)_handleTimeChange;
- (void)_queue_processNewCalorieGoals:(id)arg1 deletedSamples:(id)arg2;
- (void)_queue_processMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (void)_queue_updateMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (void)_updateMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (void)_queue_updateCalorieGoalsWithSamples:(id)arg1 deletedSamples:(id)arg2 anchor:(id)arg3;
- (void)_updateCalorieGoalsWithSamples:(id)arg1 deletedSamples:(id)arg2 anchor:(id)arg3;
- (void)_queue_fetchCalorieGoalSamples;
- (void)_fetchCalorieGoalSamples;
- (id)_createCalorieGoalObserverQuery;
- (void)_queue_updateCurrentActivitySummaryWithSummary:(id)arg1;
- (void)_updateCurrentActivitySummaryWithSummary:(id)arg1;
- (_Bool)_queue_historicalDataLoaded;
- (id)_queue_calorieGoalSampleForDate:(id)arg1;
- (id)_queue_standHourForDate:(id)arg1;
- (id)_wellnessEntryModelFromActivitySummary:(id)arg1;
- (void)_queue_restartQueries;
- (void)_queue_restartQueriesIfQueryInUse:(id)arg1;
- (void)_restartQueriesIfQueryInUse:(id)arg1;
- (void)_queue_stopQueries;
- (void)_queue_startQueries;
- (void)getWellnessEntriesBeforeDate:(id)arg1 limit:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getWellnessEntriesAfterDate:(id)arg1 limit:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getCurrentWellnessEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)timelineEndDate;
- (id)timelineStartDate;
- (void)removeSubscriber:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (id)init;

@end

