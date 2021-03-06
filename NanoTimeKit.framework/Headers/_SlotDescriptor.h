//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "NTKRestrictedApplicationsChangeObserver.h"

@class NSArray, NSString;

@interface _SlotDescriptor : NSObject <NTKRestrictedApplicationsChangeObserver>
{
    unsigned int _slotAllowedTypes;
    int _family;
    NSArray *_typesRankedList;
    unsigned int _allowedTypes;
}

+ (id)descriptorWithComplicationFamily:(int)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int allowedTypes; // @synthesize allowedTypes=_allowedTypes;
@property(readonly, nonatomic) NSArray *typesRankedList; // @synthesize typesRankedList=_typesRankedList;
@property(readonly, nonatomic) int family; // @synthesize family=_family;
// - (void).cxx_destruct;
- (void)restrictedApplicationsDidChange;
- (_Bool)allowsType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

