//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

#import "NTKComplicationDisplay.h"
#import "NTKTemplateComplicationDisplay.h"

@class CLKComplicationTemplate, CLKFont, NSDate, NSString, NTKFaceColorScheme, UIColor, UIImageView;

@interface NTKUtilityComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay>
{
    _Bool _highlighted;
    _Bool _usesLegibility;
    UIColor *_foregroundColor;
    UIImageView *_backgroundPlatter;
    CLKFont *_font;
    NSDate *_timeTravelDate;
    _Bool _shouldUseBackgroundPlatter;
    _Bool _useRoundedFontDesign;
    _Bool _suppressesInternalColorOverrides;
    _Bool _editing;
    id <NTKComplicationDisplayObserver> displayObserver;
    float _foregroundAlpha;
    UIColor *_shadowColor;
    UIColor *_accentColor;
    float _foregroundImageAlpha;
    unsigned int _placement;
    float _minimumWidth;
    UIView *_highlightView;
    NTKFaceColorScheme *_colorScheme;
    UIColor *_overrideColor;
    CLKComplicationTemplate *_complicationTemplate;
    struct CGSize _maxSize;
    struct UIEdgeInsets _touchEdgeInsets;
}

+ (id)_worldClockImageProvider;
+ (id)_stopwatchImageProvider;
+ (id)_alarmImageProviderActive:(_Bool)arg1;
+ (id)_timerImageProvider;
+ (id)_preferredAdditionalFontSettings;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (id)largeComplicationViewForType:(unsigned int)arg1 narrow:(_Bool)arg2;
+ (id)smallComplicationViewForType:(unsigned int)arg1;
@property(readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(readonly, nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(retain, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) float minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) _Bool suppressesInternalColorOverrides; // @synthesize suppressesInternalColorOverrides=_suppressesInternalColorOverrides;
@property(nonatomic) _Bool useRoundedFontDesign; // @synthesize useRoundedFontDesign=_useRoundedFontDesign;
@property(readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(nonatomic) _Bool shouldUseBackgroundPlatter; // @synthesize shouldUseBackgroundPlatter=_shouldUseBackgroundPlatter;
@property(nonatomic) unsigned int placement; // @synthesize placement=_placement;
@property(nonatomic) float foregroundImageAlpha; // @synthesize foregroundImageAlpha=_foregroundImageAlpha;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) CLKFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
// - (void).cxx_destruct;
- (void)_updateForTemplateChange;
- (void)_applyForegroundAlpha;
- (float)_widthThatFits;
- (void)_updateContentForEditingChange;
- (void)_updateContentForMaxSizeChange;
- (id)_smallCapsFont;
- (id)_standardFont;
- (id)_newImageViewSubview;
- (id)_newImageViewSubviewWithAlpha:(float)arg1;
- (id)_newStandardLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newDigitalTimeLabelSubviewWithOptions:(unsigned int)arg1;
- (struct UIEdgeInsets)_touchEdgeInsetsForPlacement:(unsigned int)arg1;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)setComplicationTemplate:(id)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setEditing:(_Bool)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateImageViewAlpha:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutLabelVertically:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_applyColorScheme:(id)arg1;
- (void)applyFaceColor:(unsigned int)arg1 units:(unsigned int)arg2;
@property(nonatomic) float foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

