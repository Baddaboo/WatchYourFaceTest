//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@interface NTKEditOptionCollection : NSObject
{
    _Bool _isColor;
    _Bool _isPosition;
    _Bool _isShowSeconds;
    int _mode;
    NSString *_localizedName;
    NSArray *_options;
}

+ (id)editOptionCollectionWithEditMode:(int)arg1 localizedName:(id)arg2 options:(id)arg3;
@property(nonatomic) _Bool isShowSeconds; // @synthesize isShowSeconds=_isShowSeconds;
@property(nonatomic) _Bool isPosition; // @synthesize isPosition=_isPosition;
@property(nonatomic) _Bool isColor; // @synthesize isColor=_isColor;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) int mode; // @synthesize mode=_mode;
// - (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEditMode:(int)arg1 localizedName:(id)arg2 options:(id)arg3;

@end
