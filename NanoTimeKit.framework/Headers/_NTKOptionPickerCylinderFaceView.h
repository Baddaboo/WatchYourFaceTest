//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

#import "NTKPolygonCylinderFaceView.h"

@class NSString;

@interface _NTKOptionPickerCylinderFaceView : UIView <NTKPolygonCylinderFaceView>
{
    float _contentAlpha;
    float _breathingScale;
    UIView *_optionView;
}

@property(retain, nonatomic) UIView *optionView; // @synthesize optionView=_optionView;
// - (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)setRotationFromFront:(float)arg1;
- (void)applyBreathingScale:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

