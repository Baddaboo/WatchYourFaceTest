//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

@class NSString, UILabel;

@interface _KeylineLabel : UIView
{
    UILabel *_label;
    UIView *_platter;
}

// - (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setLabelAlpha:(float)arg1;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

@end
