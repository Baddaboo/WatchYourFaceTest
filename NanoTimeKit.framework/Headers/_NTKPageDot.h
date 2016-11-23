//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

#import "NTKPageDot.h"

@class UIImage;

@interface _NTKPageDot : UIImageView <NTKPageDot>
{
    float _diameter;
    UIImage *_currentPageImage;
    UIImage *_otherPageImage;
    _Bool _representsCurrentPage;
}

@property(nonatomic) _Bool representsCurrentPage; // @synthesize representsCurrentPage=_representsCurrentPage;
// - (void).cxx_destruct;
- (void)_updateImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDiameter:(float)arg1 currentPageColor:(id)arg2 otherPageColor:(id)arg3;

@end
