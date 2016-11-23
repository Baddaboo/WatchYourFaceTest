//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NTKRing : NSObject
{
    float _fillFraction;
    float _strokeWidth;
    float _backgroundRingAlpha;
    float _radius;
    int _ringStyle;
}

+ (id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2;
+ (id)fillFractionStringWithSymbolForFillFraction:(float)arg1;
+ (id)fillFractionStringForFillFraction:(float)arg1;
@property int ringStyle; // @synthesize ringStyle=_ringStyle;
@property float radius; // @synthesize radius=_radius;
@property float backgroundRingAlpha; // @synthesize backgroundRingAlpha=_backgroundRingAlpha;
@property float strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property float fillFraction; // @synthesize fillFraction=_fillFraction;
- (float)_validFillFraction:(float)arg1;
- (id)fillFractionStringWithSymbol;
- (id)fillFractionString;
- (void)fillFraction:(float)arg1;
- (id)ringImage;
- (id)initWithFillFraction:(float)arg1 style:(int)arg2 radius:(float)arg3 strokeWidth:(float)arg4;
- (id)initWithFillFraction:(float)arg1 style:(int)arg2;
- (id)init;

@end
