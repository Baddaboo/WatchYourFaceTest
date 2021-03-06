//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSArray, NSMutableDictionary, UIColor;

@interface NTKFaceColorScheme : NSObject
{
    NSMutableDictionary *_colorsByUnit;
    _Bool _containsOverrideFaceColor;
    NSArray *_faceColors;
    float _multicolorAlpha;
}

+ (id)interpolationFromFaceColor:(unsigned int)arg1 toFaceColor:(unsigned int)arg2 fraction:(float)arg3 units:(unsigned int)arg4 brightenUnits:(unsigned int)arg5 overrideColor:(id)arg6 alternateHighlight:(_Bool)arg7;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(float)arg3 brightenUnits:(unsigned int)arg4;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(float)arg3;
+ (id)colorSchemeWithFaceColor:(unsigned int)arg1 foregroundColor:(id)arg2 units:(unsigned int)arg3 alternateHighlight:(_Bool)arg4;
+ (id)colorSchemeWithFaceColor:(unsigned int)arg1 units:(unsigned int)arg2;
@property(nonatomic) float multicolorAlpha; // @synthesize multicolorAlpha=_multicolorAlpha;
@property(retain, nonatomic) NSArray *faceColors; // @synthesize faceColors=_faceColors;
@property(nonatomic) _Bool containsOverrideFaceColor; // @synthesize containsOverrideFaceColor=_containsOverrideFaceColor;
// - (void).cxx_destruct;
- (id)_colorForUnit:(unsigned int)arg1;
- (void)_setColor:(id)arg1 forUnit:(unsigned int)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int units;
@property(readonly, nonatomic) UIColor *activityTickColor;
@property(readonly, nonatomic) UIColor *alternativeTickColor;
@property(readonly, nonatomic) UIColor *tickColor;
@property(readonly, nonatomic) UIColor *stackedImagesForegroundColor;
@property(readonly, nonatomic) UIColor *shiftedBackgroundColor;
@property(readonly, nonatomic) UIColor *shiftedForegroundColor;
@property(readonly, nonatomic) UIColor *accentColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *secondaryForegroundColor;
@property(readonly, nonatomic) UIColor *foregroundColor;
- (id)init;

@end

