//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSBundle, NSString;

@interface NTKVideo : NSObject
{
    NSString *_name;
    NSBundle *_bundle;
    _Bool _loops;
}

@property(readonly, nonatomic) _Bool loops; // @synthesize loops=_loops;
// - (void).cxx_destruct;
- (id)videoURL;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 bundle:(id)arg2 loops:(_Bool)arg3;

@end
