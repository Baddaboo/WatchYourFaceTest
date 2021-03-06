//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCircularComplicationView.h>

#import "CLKTimeFormatterObserver.h"
#import "NTKAlarmComplicationDisplay.h"

@class NSDate, NSString, NTKColoringLabel, NTKDigitalTimeLabel, NTKStackedImagesComplicationImageView;

@interface NTKAlarmCircularSmallComplicationView : NTKCircularComplicationView <NTKAlarmComplicationDisplay, CLKTimeFormatterObserver>
{
    NTKDigitalTimeLabel *_timeLabel;
    NTKColoringLabel *_designatorLabel;
    NTKColoringLabel *_alternativeTimeLabel;
    NTKStackedImagesComplicationImageView *_image;
    _Bool _showAlternativeTimeLabel;
    NSDate *_alarmDate;
    double _snoozeDuration;
    int _alarmState;
}

// - (void).cxx_destruct;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)_setShowAlternativeLabel:(_Bool)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateImage;
- (void)_updateTime;
- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateNoAlarms;
- (void)setStateAllAlarmsOff;
- (void)layoutSubviews;
- (void)setUsesMediumLayout:(_Bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

