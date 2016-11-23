//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSObject;

@interface NTKMusicNewUserManager : NSObject
{
    _Bool _isSubscribed;
    _Bool _isLibraryEmpty;
    NSObject *_workQ;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (_Bool)_isLibraryEmpty;
- (void)_handleLibraryUpdates:(id)arg1;
- (void)_handleSubscriptionUpdate:(id)arg1;
@property(readonly, nonatomic) _Bool isLibraryEmpty;
@property(readonly, nonatomic) _Bool isNewUser;
- (void)dealloc;
- (id)init;

@end
