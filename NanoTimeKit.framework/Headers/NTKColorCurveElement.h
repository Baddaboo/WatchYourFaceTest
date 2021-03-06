//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CAMediaTimingFunction, UIColor;

@interface NTKColorCurveElement : NSObject
{
    UIColor *_color;
    float _fraction;
    CAMediaTimingFunction *_timingFunction;
}

@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) float fraction; // @synthesize fraction=_fraction;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
- (id)initWithColor:(id)arg1 fraction:(float)arg2;

@end

