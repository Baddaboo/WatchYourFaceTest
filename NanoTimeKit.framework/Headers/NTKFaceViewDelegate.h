//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSDate, NSString;

@protocol NTKFaceViewDelegate <NSObject>
- (void)faceViewRequestedLaunchFromRect:(struct CGRect)arg1;
- (void)faceViewUpdatedResourceDirectory:(NSString *)arg1 wantsToTransferOwnership:(_Bool)arg2;
- (_Bool)faceViewComplicationIsEmptyForSlot:(NSString *)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewDidScrubToDate:(NSDate *)arg1 forced:(_Bool)arg2;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewDidLayoutSubviews;
- (void)faceViewWantsStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(int)arg1;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
@end

